#include "Basler.h"
#include <QMessageBox>
#include <QCoreApplication>
#include <thread>

using namespace Pylon;
using namespace std;
using namespace Basler_GigECameraParams;


Basler::Basler()
{

}
Basler::~Basler()
{
	PylonTerminate();
}

//basler����ڿ���ʹ�ù����У����´����ʱ����ָ������ռ�õ���������������Ч�����
class CHeartbeatHelper
{
public:
	explicit CHeartbeatHelper(CInstantCamera& camera)
		: m_pHeartbeatTimeout(NULL)
	{
		// m_pHeartbeatTimeout may be NULL
		m_pHeartbeatTimeout = camera.GetTLNodeMap().GetNode("HeartbeatTimeout");
	}

	bool SetValue(int64_t NewValue)
	{
		// Do nothing if no heartbeat feature is available.
		if (!m_pHeartbeatTimeout.IsValid())
			return false;

		// Apply the increment and cut off invalid values if neccessary.
		int64_t correctedValue = NewValue - (NewValue % m_pHeartbeatTimeout->GetInc());

		m_pHeartbeatTimeout->SetValue(correctedValue);
		return true;
	}

	bool SetMax()
	{
		// Do nothing if no heartbeat feature is available.
		if (!m_pHeartbeatTimeout.IsValid())
			return false;

		int64_t maxVal = m_pHeartbeatTimeout->GetMax();
		return SetValue(maxVal);
	}

protected:
	GenApi::CIntegerPtr m_pHeartbeatTimeout; // Pointer to the node, will be NULL if no node exists.
};
//ʮ����ת������
vector<int> DecimalToBinary(qlonglong decimal)
{
	int remainder;
	vector<int> binary;
	while (decimal != 0)
	{
		remainder = decimal % 2;
		decimal /= 2;
		binary.push_back(remainder);
	}
	reverse(binary.begin(), binary.end());

	return binary;
}
//������תIP��ַ
string BinaryToIp(vector<int> binary)
{
	string ip;
	int partsum = 0;
	for (size_t i = 0; i < binary.size(); i++) 
	{

		if (binary.at(i))
		{
			partsum = partsum + pow(2, (7 - i % 8));
		}

		if (i == 7 || i == 15 || i == 23 || i == 31 )
		{
			ip.append(to_string (partsum));
			partsum = 0;
			if (i != 31)
			{
				ip.append(".");
			}
		}
	}
	return ip;
}
string DecimalToMac(int64_t decimal)
{
	int remainder;
	string binary;
	while (decimal != 0)
	{
		remainder = decimal % 16;
		decimal /= 16;
		if (remainder == 10)
		{
			binary.append("A");
		}
		else if(remainder == 11)
		{
			binary.append("B");
		}
		else if(remainder == 12)
		{
			binary.append("C");
		}
		else if(remainder == 13)
		{
			binary.append("D");
		}
		else if(remainder == 14)
		{
			binary.append("E");
		}
		else if(remainder == 15)
		{
			binary.append("F");
		}
		else
		{
			binary.append(to_string(remainder));
		}
	}
	reverse(binary.begin(), binary.end());
	binary.insert(0, "00");
	for (int i = 2; i < binary.size();i=i+3)
	{
		binary.insert(i, ":");
	}

	return binary;
}


//ȡ������ĳ�ʼ�����������ô�������ʾ
void Basler::GetCamInitPara()
{
	//qlonglongʮ����תQstring��ip
	//qlonglong str = CamList[0].GevCurrentIPAddress.GetValue();
	//vector<int> binary_ip = DecimalToBinary(str);

	LeftCamID->setText(QString::QString(CamList[0].GetDeviceInfo().GetUserDefinedName()));
	LeftCamIp->setText(QString::fromStdString(BinaryToIp(DecimalToBinary(CamList[0].GevCurrentIPAddress.GetValue()))));
	LeftCamMac->setText(QString::fromStdString(DecimalToMac(CamList[0].GevMACAddress.GetValue())));
	LeftImageHeight->setText(QString::number(CamList[0].Height.GetValue()));
	LeftImageWidth->setText(QString::number(CamList[0].Width.GetValue()));
	LeftExposureTime->setText(QString::number(CamList[0].ExposureTimeAbs.GetValue()));
	//LeftTriggerMode->setText(QString::number(CamList[0].TriggerMode.GetValue()));
	LeftFrameFrequency->setText(QString::number(CamList[0].AcquisitionFrameRateAbs.GetValue()));

	RightCamID->setText(QString::QString(CamList[1].GetDeviceInfo().GetUserDefinedName()));
	RightCamIp->setText(QString::fromStdString(BinaryToIp(DecimalToBinary(CamList[1].GevCurrentIPAddress.GetValue()))));
	RightCamMac->setText(QString::fromStdString(DecimalToMac(CamList[1].GevMACAddress.GetValue())));
	RightImageHeight->setText(QString::number(CamList[1].Height.GetValue()));
	RightImageWidth->setText(QString::number(CamList[1].Width.GetValue()));
	RightExposureTime->setText(QString::number(CamList[1].ExposureTimeAbs.GetValue()));
	//RightTriggerMode->setText(QString::number(CamList[1].TriggerMode.GetValue()));
	RightFrameFrequency->setText(QString::number(CamList[1].AcquisitionFrameRateAbs.GetValue()));

	//LeftDownCamID->setText(QString::QString(CamList[2].GetDeviceInfo().GetUserDefinedName()));
	//LeftDownCamIp->setText(QString::fromStdString(BinaryToIp(DecimalToBinary(CamList[2].GevCurrentIPAddress.GetValue()))));
	//LeftDownCamMac->setText(QString::fromStdString(DecimalToMac(CamList[2].GevMACAddress.GetValue())));
	//LeftDownImageHeight->setText(QString::number(CamList[2].Height.GetValue()));
	//LeftDownImageWidth->setText(QString::number(CamList[2].Width.GetValue()));
	//LeftDownExposureTime->setText(QString::number(CamList[2].ExposureTimeAbs.GetValue()));
	////LeftDownTriggerMode->setText(QString::number(CamList[2].TriggerMode.GetValue()));
	//LeftDownFrameFrequency->setText(QString::number(CamList[2].AcquisitionFrameRateAbs.GetValue()));

	//RightDownCamID->setText(QString::QString(CamList[3].GetDeviceInfo().GetUserDefinedName()));
	//RightDownCamIp->setText(QString::fromStdString(BinaryToIp(DecimalToBinary(CamList[3].GevCurrentIPAddress.GetValue()))));
	//RightDownCamMac->setText(QString::fromStdString(DecimalToMac(CamList[3].GevMACAddress.GetValue())));
	//RightDownImageHeight->setText(QString::number(CamList[3].Height.GetValue()));
	//RightDownImageWidth->setText(QString::number(CamList[3].Width.GetValue()));
	//RightDownExposureTime->setText(QString::number(CamList[3].ExposureTimeAbs.GetValue()));
	////RightDownTriggerMode->setText(QString::number(CamList[3].TriggerMode.GetValue()));
	//RightDownFrameFrequency->setText(QString::number(CamList[3].AcquisitionFrameRateAbs.GetValue()));

}

void Basler::SetCamPara(CamPara &Para)
{
	try
	{
		CamList[0].AcquisitionFrameRateAbs.SetValue(Para.LeftImageFrequency);
		CamList[0].ExposureTimeAbs.SetValue(Para.LeftExposureTime);
		CamList[0].Width.SetValue(Para.LeftImageWidth);
		CamList[0].Height.SetValue(Para.LeftImageHeight);
		//CamList[0].GevMACAddress.SetValue(Para.LeftCamMac);
		//CamList[0].GevPersistentIPAddress.SetValue(Para.LeftCamIp);
		//CamList[0].TriggerMode.SetValue(Para.LeftTriggerType);

		CamList[1].AcquisitionFrameRateAbs.SetValue(Para.RightImageFrequency);
		CamList[1].ExposureTimeAbs.SetValue(Para.RightExposureTime);
		CamList[1].Width.SetValue(Para.RightImageWidth);
		CamList[1].Height.SetValue(Para.RightImageHeight);
		//CamList[1].GevMACAddress.SetValue(Para.RightCamMac);
		//CamList[1].GevPersistentIPAddress.SetValue(Para.RightCamIp);
		//CamList[1].TriggerMode.SetValue(Para.RightTriggerType);

		//CamList[2].AcquisitionFrameRateAbs.SetValue(Para.LeftDownImageFrequency);
		//CamList[2].ExposureTimeAbs.SetValue(Para.LeftDownExposureTime);
		//CamList[2].Width.SetValue(Para.LeftDownImageWidth);
		//CamList[2].Height.SetValue(Para.LeftDownImageHeight);
		////CamList[2].GevMACAddress.SetValue(Para.LeftDownCamMac);
		////CamList[2].GevPersistentIPAddress.SetValue(Para.LeftDownCamIp);
		////CamList[2].TriggerMode.SetValue(Para.LeftDownTriggerType);

		//CamList[3].AcquisitionFrameRateAbs.SetValue(Para.RightDownImageFrequency);
		//CamList[3].ExposureTimeAbs.SetValue(Para.RightDownExposureTime);
		//CamList[3].Width.SetValue(Para.RightDownImageWidth);
		//CamList[3].Height.SetValue(Para.RightDownImageHeight);
		////CamList[3].GevMACAddress.SetValue(Para.RightDownCamMac);
		////CamList[3].GevPersistentIPAddress.SetValue(Para.RightDownCamIp);
		////CamList[3].TriggerMode.SetValue(Para.RightDownTriggerType);
	}
	catch (const GenericException &e)
	{
		// Error handling
		cerr << "An exception occurred." << endl
			<< e.GetDescription() << endl;
	}
}

void Basler::Connect()
{
   //�����е�����豸���г�ʼ��
	PylonInitialize();

	try
	{
		CTlFactory& tlFactory = CTlFactory::GetInstance();
		DeviceInfoList_t deviceList;
		//û�м�⵽���ʱ��ʱ����
		if (tlFactory.EnumerateDevices(deviceList) == 0)
		{
			QMessageBox::critical(NULL, QStringLiteral("��ʾ"), QStringLiteral("δ��⵽���,����Ӳ�����ӣ�����"),
				QMessageBox::Yes | QMessageBox::No, QMessageBox::Yes);
			return;;
		}

		//�������Ѽ�⵽������豸
		size_t nSize = deviceList.size();
		CamList.Initialize(nSize);

		//ָ�������豸
		//string CamName0 = tlFactory.CreateDevice(deviceList[0])->GetDeviceInfo().GetUserDefinedName();
		//string CamName1 = tlFactory.CreateDevice(deviceList[1])->GetDeviceInfo().GetUserDefinedName();
		//string CamName2 = tlFactory.CreateDevice(deviceList[2])->GetDeviceInfo().GetUserDefinedName();
		//string CamName3 = tlFactory.CreateDevice(deviceList[3])->GetDeviceInfo().GetUserDefinedName();
		//CamList[CamName0[4] - 1].Attach(tlFactory.CreateDevice(deviceList[0]));
		//CamList[CamName1[4] - 1].Attach(tlFactory.CreateDevice(deviceList[1]));
		//CamList[CamName2[4] - 1].Attach(tlFactory.CreateDevice(deviceList[2]));
		//CamList[CamName3[4] - 1].Attach(tlFactory.CreateDevice(deviceList[3]));

		string CamName = tlFactory.CreateDevice(deviceList[0])->GetDeviceInfo().GetUserDefinedName();
		if (CamName == "Cam1")
		{
			CamList[0].Attach(tlFactory.CreateDevice(deviceList[0]));
			CamList[1].Attach(tlFactory.CreateDevice(deviceList[1]));
		}
		else
		{
			CamList[1].Attach(tlFactory.CreateDevice(deviceList[0]));
			CamList[0].Attach(tlFactory.CreateDevice(deviceList[1]));
			
		}

		CamList.Open();
		CamList[0].TriggerMode.SetValue(Basler_GigECamera::TriggerMode_On);
		CamList[1].TriggerMode.SetValue(Basler_GigECamera::TriggerMode_On);
		//CamList[2].TriggerMode.SetValue(Basler_GigECamera::TriggerMode_On);
		//CamList[3].TriggerMode.SetValue(Basler_GigECamera::TriggerMode_On);
		CamList[0].TriggerSource.SetValue(Basler_GigECamera::TriggerSource_Line1);
		CamList[1].TriggerSource.SetValue(Basler_GigECamera::TriggerSource_Line1);
		//CamList[2].TriggerSource.SetValue(Basler_GigECamera::TriggerSource_Line1);
		//CamList[3].TriggerSource.SetValue(Basler_GigECamera::TriggerSource_Line1);

		//�ô�����Ч��������ռ�õ�����
		CHeartbeatHelper cam1_heartbeatHelper(CamList[0]);
		CHeartbeatHelper cam2_heartbeatHelper(CamList[1]);
		cam1_heartbeatHelper.SetValue(500);  // 1000 ms timeout
		cam2_heartbeatHelper.SetValue(500);  // 1000 ms timeout
		//CHeartbeatHelper cam3_heartbeatHelper(CamList[2]);
		//CHeartbeatHelper cam4_heartbeatHelper(CamList[3]);
		//cam3_heartbeatHelper.SetValue(500);  // 1000 ms timeout
		//cam4_heartbeatHelper.SetValue(500);  // 1000 ms timeout

	}
	catch (const GenericException &e)
	{
		cerr << "An exception occurred." << endl << e.GetDescription() << endl;
	}

}

bool Basler::IsConnected()
{
	return CamList.IsOpen();
}

void Basler::DetachDevice()
{
	CamList.DetachDevice();
	CamList.DestroyDevice();
}

void Basler::Disconnect()
{
	try
	{
		if (CamList.GetSize() == 0)
		{
			QMessageBox::about(NULL, QStringLiteral("��ʾ"), QStringLiteral("��ǰ��������ӣ�����Ͽ�������"));
			return;
		}
		CamList.Close();
		CamList.DestroyDevice();
		PylonTerminate();
	}
	catch (GenICam::GenericException &e)
	{
		// Error handling.
		cerr << "An exception occurred." << endl
			<< e.GetDescription() << endl;
	}
}

void Basler::StartGrabbing()
{
	if (CamList.IsGrabbing())
	{
		QMessageBox::about(NULL, QStringLiteral("��ʾ"), QStringLiteral("��������ڲɼ�״̬������"));
		return;
	}
	if(!CamList.IsOpen())
	{
		QMessageBox::about(NULL, QStringLiteral("��ʾ"), QStringLiteral("������������ٽ��вɼ�������"));
		return;
	}
	CamList.StartGrabbing();
	//�����߳�
	std::thread Thread(Basler::GrabThread, this);
	Thread.detach();
}

void Basler::GrabThread(Basler* pClass)
{
	pClass->GrabThreadFunction();
}

void Basler::GrabThreadFunction()
{
	try
	{
		while (CamList[0].IsGrabbing() && CamList[1].IsGrabbing())
		{
			if (CamList[0].RetrieveResult(5000, LeftptrGrabResult, TimeoutHandling_Return) && CamList[1].RetrieveResult(5000, RightptrGrabResult, TimeoutHandling_Return))
			{
				if (LeftptrGrabResult->GrabSucceeded() && RightptrGrabResult->GrabSucceeded())
				{
					QImage LeftImg = QImage((unsigned char *)(LeftptrGrabResult->GetBuffer()), LeftptrGrabResult->GetWidth(), LeftptrGrabResult->GetHeight(), QImage::Format_Indexed8);
					QImage RightImg = QImage((unsigned char *)(RightptrGrabResult->GetBuffer()), RightptrGrabResult->GetWidth(), RightptrGrabResult->GetHeight(), QImage::Format_Indexed8);

					LeftLabelAdd->setPixmap(QPixmap::fromImage(LeftImg).scaled(LeftLabelAdd->size(), Qt::KeepAspectRatioByExpanding));
					LeftLabelAdd->show();
					RightLabelAdd->setPixmap(QPixmap::fromImage(RightImg).scaled(RightLabelAdd->size(), Qt::KeepAspectRatioByExpanding));
					RightLabelAdd->show();
					QCoreApplication::processEvents();
					//LeftLabelAdd->repaint();
					//RightLabelAdd->repaint();
					//LeftLabelAdd->clear();
					//RightLabelAdd->clear();
				}
			}
		}

	}
	catch (GenICam::GenericException &e)
	{
		// Error handling.
		cerr << "An exception occurred." << endl
			<< e.GetDescription() << endl;
	}

}

bool Basler::IsGrabbing()
{
	return CamList.IsGrabbing();
}

void Basler::StopGrabbing()
{
	if (!CamList.IsGrabbing())
	{
		QMessageBox::about(NULL, QStringLiteral("��ʾ"), QStringLiteral("��ǰ������ɼ�������ֹͣ�ɼ�������"));
		return;
	}
	try
	{
		CamList.StopGrabbing();

	}
	catch (GenICam::GenericException &e)
	{
		// Error handling.
		cerr << "An exception occurred." << endl
			<< e.GetDescription() << endl;
	}
}

void Basler::GetLeftLabelAddress(QLabel &LeftLabelPointer)
{
	LeftLabelAdd = &LeftLabelPointer;
}
void Basler::GetRightLabelAddress(QLabel &RightLabelPointer)
{
	RightLabelAdd = &RightLabelPointer;
}
//void Basler::GetLeftDownLabelAddress(QLabel &LeftDownLabelPointer)
//{
//	LeftDownLabelAdd = &LeftDownLabelPointer;
//}
//void Basler::GetRightDownLabelAddress(QLabel &RightDownLabelPointer)
//{
//	RightDownLabelAdd = &RightDownLabelPointer;
//}

void Basler::GetLeftIpAddress(QLineEdit &LeftIpPointer)
{
	LeftCamIp = &LeftIpPointer;
}
void Basler::GetLeftCamID(QLineEdit &LeftCamIDPointer)
{
	LeftCamID = &LeftCamIDPointer;
}
void Basler::GetLeftMacAddress(QLineEdit &LeftMacPointer)
{
	LeftCamMac = &LeftMacPointer;
}
void Basler::GetLeftImageHeightAddress(QLineEdit &LeftImageHeightPointer)
{
	LeftImageHeight = &LeftImageHeightPointer;
}
void Basler::GetLeftImageWidthAddress(QLineEdit &LeftImageWidthPointer)
{
	LeftImageWidth = &LeftImageWidthPointer;
}
void Basler::GetLeftExposureAddress(QLineEdit &LeftExposurePointer)
{
	LeftExposureTime = &LeftExposurePointer;
}
void Basler::GetLeftTriggerAddress(QLineEdit &LeftTriggerPointer)
{
	LeftTriggerMode = &LeftTriggerPointer;
}
void Basler::GetLeftFrameAddress(QLineEdit &LeftFramePointer)
{
	LeftFrameFrequency = &LeftFramePointer;
}

void Basler::GetRightIpAddress(QLineEdit &RightIpPointer)
{
	RightCamIp = &RightIpPointer;
}
void Basler::GetRightCamID(QLineEdit &RightCamIDPointer)
{
	RightCamID = &RightCamIDPointer;
}
void Basler::GetRightMacAddress(QLineEdit &RightMacPointer)
{
	RightCamMac = &RightMacPointer;
}
void Basler::GetRightImageHeightAddress(QLineEdit &RightImageHeightPointer)
{
	RightImageHeight = &RightImageHeightPointer;
}
void Basler::GetRightImageWidthAddress(QLineEdit &RightImageWidthPointer)
{
	RightImageWidth = &RightImageWidthPointer;
}
void Basler::GetRightExposureAddress(QLineEdit &RightExposurePointer)
{
	RightExposureTime = &RightExposurePointer;
}
void Basler::GetRightTriggerAddress(QLineEdit &RightTriggerPointer)
{
	RightTriggerMode = &RightTriggerPointer;
}
void Basler::GetRightFrameAddress(QLineEdit &RightFramePointer)
{
	RightFrameFrequency = &RightFramePointer;
}

//void Basler::GetLeftDownCamID(QLineEdit &LeftDownCamIDPointer)
//{
//	LeftDownCamID = &LeftDownCamIDPointer;
//}
//void Basler::GetLeftDownIpAddress(QLineEdit &LeftDownIpPointer)
//{
//	LeftDownCamIp = &LeftDownIpPointer;
//}
//void Basler::GetLeftDownMacAddress(QLineEdit &LeftDownMacPointer)
//{
//	LeftDownCamMac = &LeftDownMacPointer;
//}
//void Basler::GetLeftDownImageHeightAddress(QLineEdit &LeftDownImageHeightPointer)
//{
//	LeftDownImageHeight = &LeftDownImageHeightPointer;
//}
//void Basler::GetLeftDownImageWidthAddress(QLineEdit &LeftDownImageWidthPointer)
//{
//	LeftDownImageWidth = &LeftDownImageWidthPointer;
//}
//void Basler::GetLeftDownExposureAddress(QLineEdit &LeftDownExposurePointer)
//{
//	LeftDownExposureTime = &LeftDownExposurePointer;
//}
//void Basler::GetLeftDownTriggerAddress(QLineEdit &LeftDownTriggerPointer)
//{
//	LeftDownTriggerMode = &LeftDownTriggerPointer;
//}
//void Basler::GetLeftDownFrameAddress(QLineEdit &LeftDownFramePointer)
//{
//	LeftDownFrameFrequency = &LeftDownFramePointer;
//}
//
//
//void Basler::GetRightDownCamID(QLineEdit &RightDownCamIDPointer)
//{
//	RightDownCamID = &RightDownCamIDPointer;
//}
//void Basler::GetRightDownIpAddress(QLineEdit &RightDownIpPointer)
//{
//	RightDownCamIp = &RightDownIpPointer;
//}
//void Basler::GetRightDownMacAddress(QLineEdit &RightDownMacPointer)
//{
//	RightDownCamMac = &RightDownMacPointer;
//}
//void Basler::GetRightDownImageHeightAddress(QLineEdit &RightDownImageHeightPointer)
//{
//	RightDownImageHeight = &RightDownImageHeightPointer;
//}
//void Basler::GetRightDownImageWidthAddress(QLineEdit &RightDownImageWidthPointer)
//{
//	RightDownImageWidth = &RightDownImageWidthPointer;
//}
//void Basler::GetRightDownExposureAddress(QLineEdit &RightDownExposurePointer)
//{
//	RightDownExposureTime = &RightDownExposurePointer;
//}
//void Basler::GetRightDownTriggerAddress(QLineEdit &RightDownTriggerPointer)
//{
//	RightDownTriggerMode = &RightDownTriggerPointer;
//}
//void Basler::GetRightDownFrameAddress(QLineEdit &RightDownFramePointer)
//{
//	RightDownFrameFrequency = &RightDownFramePointer;
//}