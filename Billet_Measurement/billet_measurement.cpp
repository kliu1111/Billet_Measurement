#include "billet_measurement.h"
#include "Basler.h"
#include <windows.h>
#include <QDebug>
using namespace std;
using namespace Pylon;

#ifdef PYLON_WIN_BUILD
#endif

Basler Cam;
Billet_Measurement::Billet_Measurement(QWidget *parent)
	: QMainWindow(parent)
{
	ui.setupUi(this);
	SetCamWindow = new SetCamPara(this);
	SetCamWindow->setWindowFlags(Qt::Window);
	SetTriggerWindow = new SetTriggerParam(this);
	SetTriggerWindow->setWindowFlags(Qt::Window);

	//？？
	AllocConsole();
	freopen("CONOUT$", "w+t", stdout);
	InitSlot();
}

Billet_Measurement::~Billet_Measurement()
{
	Cam.DetachDevice();
	PylonTerminate();
}

void Billet_Measurement::SlotCamConnect()
{
	
	Cam.GetLeftLabelAddress(*ui.label_left_up);
	Cam.GetRightLabelAddress(*ui.label_right_up);
	Cam.Connect();
}

void Billet_Measurement::SlotCamDisconn()
{
	Cam.Disconnect();
}

void Billet_Measurement::SlotStartGrab()
{
	Cam.StartGrabbing();
}

void Billet_Measurement::SlotPauseGrab()
{
	Cam.StopGrabbing();
}

//点击相机设置窗口，显示出初始的相机参数
void Billet_Measurement::SlotSetCam()
{
	if (!Cam.IsConnected())
	{
		QMessageBox::about(NULL, QStringLiteral("提示"), QStringLiteral("请连接相机后再进行相机设置！！！"));
		return;
	}
	if (Cam.IsGrabbing())
	{
		QMessageBox::about(NULL, QStringLiteral("提示"), QStringLiteral("请停止相机采集后再进行相机参数设置！！！"));
		return;
	}
	//取得控件地址，然后显示
	Cam.GetLeftCamID(*SetCamWindow->ui.lineEdit_CamID);
	Cam.GetLeftIpAddress(*SetCamWindow->ui.lineEdit_camIP);
	Cam.GetLeftMacAddress(*SetCamWindow->ui.lineEdit_camMAC);
	Cam.GetLeftImageHeightAddress(*SetCamWindow->ui.lineEdit_imageHeight);
	Cam.GetLeftImageWidthAddress(*SetCamWindow->ui.lineEdit_imageWidth);
	Cam.GetLeftExposureAddress(*SetCamWindow->ui.lineEdit_exposureTime);
	Cam.GetLeftTriggerAddress(*SetCamWindow->ui.lineEdit_triggerMode);
	Cam.GetLeftFrameAddress(*SetCamWindow->ui.lineEdit_frameFrequency);

	Cam.GetRightCamID(*SetCamWindow->ui.lineEdit_CamID_2);
	Cam.GetRightIpAddress(*SetCamWindow->ui.lineEdit_camIP_2);
	Cam.GetRightMacAddress(*SetCamWindow->ui.lineEdit_camMAC_2);
	Cam.GetRightImageHeightAddress(*SetCamWindow->ui.lineEdit_imageHeight_2);
	Cam.GetRightImageWidthAddress(*SetCamWindow->ui.lineEdit_imageWidth_2);
	Cam.GetRightExposureAddress(*SetCamWindow->ui.lineEdit_exposureTime_2);
	Cam.GetRightTriggerAddress(*SetCamWindow->ui.lineEdit_triggerMode_2);
	Cam.GetRightFrameAddress(*SetCamWindow->ui.lineEdit_frameFrequency_2);

	//Cam.GetLeftDownCamID(*SetCamWindow->ui.lineEdit_CamID_3);
	//Cam.GetLeftDownIpAddress(*SetCamWindow->ui.lineEdit_camIP_3);
	//Cam.GetLeftDownMacAddress(*SetCamWindow->ui.lineEdit_camMAC_3);
	//Cam.GetLeftDownImageHeightAddress(*SetCamWindow->ui.lineEdit_imageHeight_3);
	//Cam.GetLeftDownImageWidthAddress(*SetCamWindow->ui.lineEdit_imageWidth_3);
	//Cam.GetLeftDownExposureAddress(*SetCamWindow->ui.lineEdit_exposureTime_3);
	//Cam.GetLeftDownTriggerAddress(*SetCamWindow->ui.lineEdit_triggerMode_3);
	//Cam.GetLeftDownFrameAddress(*SetCamWindow->ui.lineEdit_frameFrequency_3);

	//Cam.GetRightDownCamID(*SetCamWindow->ui.lineEdit_CamID_4);
	//Cam.GetRightDownIpAddress(*SetCamWindow->ui.lineEdit_camIP_4);
	//Cam.GetRightDownMacAddress(*SetCamWindow->ui.lineEdit_camMAC_4);
	//Cam.GetRightDownImageHeightAddress(*SetCamWindow->ui.lineEdit_imageHeight_4);
	//Cam.GetRightDownImageWidthAddress(*SetCamWindow->ui.lineEdit_imageWidth_4);
	//Cam.GetRightDownExposureAddress(*SetCamWindow->ui.lineEdit_exposureTime_4);
	//Cam.GetRightDownTriggerAddress(*SetCamWindow->ui.lineEdit_triggerMode_4);
	//Cam.GetRightDownFrameAddress(*SetCamWindow->ui.lineEdit_frameFrequency_4);

	Cam.GetCamInitPara();
	SetCamWindow->show();
}

void Billet_Measurement::SlotGetCam()
{
	Basler::CamPara CameraPara;
	//CameraPara.LeftCamIp = (SetCamWindow->ui.lineEdit_camIP->text()).toInt();
	//CameraPara.LeftCamMac = (SetCamWindow->ui.lineEdit_camMAC->text()).toInt();
	CameraPara.LeftImageHeight = (SetCamWindow->ui.lineEdit_imageHeight->text()).toInt();
	CameraPara.LeftImageWidth = (SetCamWindow->ui.lineEdit_imageWidth->text()).toInt();
	CameraPara.LeftExposureTime = (SetCamWindow->ui.lineEdit_exposureTime->text()).toInt();
	////CameraPara.LeftTriggerType = SetCamWindow->ui.lineEdit_triggerMode->text();
	CameraPara.LeftImageFrequency = (SetCamWindow->ui.lineEdit_frameFrequency->text()).toInt();

	//CameraPara.RightCamIp = (SetCamWindow->ui.lineEdit_camIP_2->text()).toInt();
	//CameraPara.RightCamMac = (SetCamWindow->ui.lineEdit_camMAC_2->text()).toInt();
	CameraPara.RightImageHeight = (SetCamWindow->ui.lineEdit_imageHeight_2->text()).toInt();
	CameraPara.RightImageWidth = (SetCamWindow->ui.lineEdit_imageWidth_2->text()).toInt();
	CameraPara.RightExposureTime = (SetCamWindow->ui.lineEdit_exposureTime_2->text()).toInt();
	////CameraPara.RightTriggerType = SetCamWindow->ui.lineEdit_triggerMode_2->text();
	CameraPara.RightImageFrequency = (SetCamWindow->ui.lineEdit_frameFrequency_2->text()).toInt();

	////CameraPara.LeftDownCamIp = (SetCamWindow->ui.lineEdit_camIP_3->text()).toInt();
	////CameraPara.LeftDownCamMac = (SetCamWindow->ui.lineEdit_camMAC_3->text()).toInt();
	//CameraPara.LeftDownImageHeight = (SetCamWindow->ui.lineEdit_imageHeight_3->text()).toInt();
	//CameraPara.LeftDownImageWidth = (SetCamWindow->ui.lineEdit_imageWidth_3->text()).toInt();
	//CameraPara.LeftDownExposureTime = (SetCamWindow->ui.lineEdit_exposureTime_3->text()).toInt();
	//////CameraPara.LeftDownTriggerType = SetCamWindow->ui.lineEdit_triggerMode_3->text();
	//CameraPara.LeftDownImageFrequency = (SetCamWindow->ui.lineEdit_frameFrequency_3->text()).toInt();

	////CameraPara.RightDownCamIp = (SetCamWindow->ui.lineEdit_camIP_4->text()).toInt();
	////CameraPara.RightDownCamMac = (SetCamWindow->ui.lineEdit_camMAC_4->text()).toInt();
	//CameraPara.RightDownImageHeight = (SetCamWindow->ui.lineEdit_imageHeight_4->text()).toInt();
	//CameraPara.RightDownImageWidth = (SetCamWindow->ui.lineEdit_imageWidth_4->text()).toInt();
	//CameraPara.RightDownExposureTime = (SetCamWindow->ui.lineEdit_exposureTime_4->text()).toInt();
	//////CameraPara.RightDownTriggerType = SetCamWindow->ui.lineEdit_triggerMode_4->text();
	//CameraPara.RightDownImageFrequency = (SetCamWindow->ui.lineEdit_frameFrequency_4->text()).toInt();

	Cam.SetCamPara(CameraPara);
	SetCamWindow->close();
}

void Billet_Measurement::SlotCancelCamPara()
{
	SetCamWindow->close();
}

QextSerialPort *myCom = nullptr;
bool IsOpen;
void Billet_Measurement::SlotExTriggerOn()
{
	if (myCom == nullptr)
	{
		myCom = new QextSerialPort("COM4", QextSerialPort::Polling);
		IsOpen = myCom->open(QIODevice::ReadWrite);
	}
	if (IsOpen)
	{
		myCom->write("EnableOutput 1\n");

	}
}

void Billet_Measurement::SlotExTriggerOff()
{
	if (myCom==nullptr)
	{
		myCom = new QextSerialPort("COM4", QextSerialPort::Polling);
		IsOpen = myCom->open(QIODevice::ReadWrite);
	}
	if (IsOpen)
	{
		myCom->write("EnableOutput 0\n");
	}

}

void Billet_Measurement::SlotSetExTriggerParam()
{
	SetTriggerWindow->show();
}

void Billet_Measurement::SlotTriggerBtnOk()
{
	if (myCom == nullptr)
	{
		myCom = new QextSerialPort("COM4", QextSerialPort::Polling);
		IsOpen = myCom->open(QIODevice::ReadWrite);
	}
	if (IsOpen)
	{
		int TextData = (SetTriggerWindow->ui.lineEdit->text()).toInt();
		int InputData = TextData * 4;
		QString CmdData = "Line " + QString::number(InputData) + "\n";
		char CharCmdData[9];
		strcpy(CharCmdData, CmdData.toStdString().c_str());
		myCom->write(CharCmdData);
	}
	SetTriggerWindow->close();

}

void Billet_Measurement::SlotTriggerBtnCancel()
{
	SetTriggerWindow->close();
}

void Billet_Measurement::InitSlot()
{
	connect(ui.action_connect, &QAction::triggered, this, &Billet_Measurement::SlotCamConnect);
	connect(ui.action_disconnect, &QAction::triggered, this, &Billet_Measurement::SlotCamDisconn);
	connect(ui.action_start, &QAction::triggered, this, &Billet_Measurement::SlotStartGrab);

	connect(ui.action_ExTriggerON, &QAction::triggered, this, &Billet_Measurement::SlotExTriggerOn);
	connect(ui.action_ExTriggerOff, &QAction::triggered, this, &Billet_Measurement::SlotExTriggerOff);
	connect(ui.action_TriggerParam, &QAction::triggered, this, &Billet_Measurement::SlotSetExTriggerParam);

	connect(ui.action_pause, &QAction::triggered, this, &Billet_Measurement::SlotPauseGrab);
	connect(ui.action_setcampara, &QAction::triggered, this, &Billet_Measurement::SlotSetCam);
	connect(SetCamWindow->ui.Btn_Ok, SIGNAL(clicked()), this, SLOT(SlotGetCam()));
	connect(SetCamWindow->ui.Btn_Cancel, SIGNAL(clicked()), this, SLOT(SlotCancelCamPara()));

	connect(SetTriggerWindow->ui.Btn_Ok, SIGNAL(clicked()), this, SLOT(SlotTriggerBtnOk()));
	connect(SetTriggerWindow->ui.Btn_Cancel, SIGNAL(clicked()), this, SLOT(SlotTriggerBtnCancel()));
	

}
