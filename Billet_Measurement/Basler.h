#pragma once
#include <QString>
#include <QLabel>
#include <QLineEdit>
#include <QMessageBox>
#include <algorithm>
#include <pylon/PylonIncludes.h>
#include <pylon/ImageFormatConverter.h>
#include <pylon/gige/BaslerGigEInstantCameraArray.h>

#ifdef PYLON_WIN_BUILD
#    include <pylon/PylonGUI.h>
#endif
using namespace Pylon;
class Basler
{
public:

	class CamPara
	{
	public:

		//unsigned int LeftCamIp;
		//unsigned int LeftCamMac;
		//QString LeftTriggerType;
		unsigned int LeftExposureTime;
		unsigned int LeftImageHeight;
		unsigned int LeftImageWidth;
		unsigned int LeftImageFrequency;

		////unsigned int LeftDownCamIp;
		////unsigned int LeftDownCamMac;
		////QString LeftDownTriggerType;
		//unsigned int LeftDownExposureTime;
		//unsigned int LeftDownImageHeight;
		//unsigned int LeftDownImageWidth;
		//unsigned int LeftDownImageFrequency;

		//unsigned int RightCamIp;
		//unsigned int RightCamMac;
		//QString RightTriggerType;
		unsigned int RightExposureTime;
		unsigned int RightImageHeight;
		unsigned int RightImageWidth;
		unsigned int RightImageFrequency;

		////unsigned int RightDownCamIp;
		////unsigned int RightDownCamMac;
		////QString RightDownTriggerType;
		//unsigned int RightDownExposureTime;
		//unsigned int RightDownImageHeight;
		//unsigned int RightDownImageWidth;
		//unsigned int RightDownImageFrequency;


		CamPara()
		{

		}
	};

public:
	Basler();
	~Basler();
public:

    CBaslerGigEInstantCameraArray CamList;
	bool EnableOutputFlag;

	//把检测发现的所有相机打开。
	void Connect();

	//卸载所有的设备防止非正常关闭时报错
	void DetachDevice();

	//检查所有的相机是否已连接
	bool IsConnected();

	//断开已连接的所有的相机，如需重新采集，需先连接相机。
	void Disconnect();

	//连接相机后，进行采集工作。
	void StartGrabbing();

	//采集线程
	static void GrabThread(Basler* pClass);
	//
	void GrabThreadFunction();

	//检查所有的相机是否都处于采集状态
	bool IsGrabbing();

	//停止采集，如需重新采集，直接StartGrabbing。
	void StopGrabbing();

	//取得相机的初始参数
	void GetCamInitPara();

	//取得用户的输入参数
	void GetUserPara(CamPara &Para);

	//取得用户的输入的值后对相机进行设置。
	void SetCamPara(CamPara &Para);

	//得到左侧相机设置参数窗口的控件的地址
	QLabel* LeftLabelAdd;
	QLineEdit* LeftCamIp;
	QLineEdit* LeftCamID;
	QLineEdit* LeftCamMac;
	QLineEdit* LeftImageHeight;
	QLineEdit* LeftImageWidth;
	QLineEdit* LeftExposureTime;
	QLineEdit* LeftTriggerMode;
	QLineEdit* LeftFrameFrequency;

	//QLabel* LeftDownLabelAdd;
	//QLineEdit* LeftDownCamIp;
	//QLineEdit* LeftDownCamID;
	//QLineEdit* LeftDownCamMac;
	//QLineEdit* LeftDownImageHeight;
	//QLineEdit* LeftDownImageWidth;
	//QLineEdit* LeftDownExposureTime;
	//QLineEdit* LeftDownTriggerMode;
	//QLineEdit* LeftDownFrameFrequency;

	//得到右侧相机设置参数窗口的控件的地址
	QLabel* RightLabelAdd;
	QLineEdit* RightCamIp;
	QLineEdit* RightCamID;
	QLineEdit* RightCamMac;
	QLineEdit* RightImageHeight;
	QLineEdit* RightImageWidth;
	QLineEdit* RightExposureTime;
	QLineEdit* RightTriggerMode;
	QLineEdit* RightFrameFrequency;

	//QLabel* RightDownLabelAdd;
	//QLineEdit* RightDownCamIp;
	//QLineEdit* RightDownCamID;
	//QLineEdit* RightDownCamMac;
	//QLineEdit* RightDownImageHeight;
	//QLineEdit* RightDownImageWidth;
	//QLineEdit* RightDownExposureTime;
	//QLineEdit* RightDownTriggerMode;
	//QLineEdit* RightDownFrameFrequency;

	//取得窗口控件地址

	void GetLeftLabelAddress(QLabel &LeftLabelPointer);
	void GetRightLabelAddress(QLabel &RightLabelPointer);
	void GetLeftDownLabelAddress(QLabel &LeftDownLabelPointer);
	void GetRightDownLabelAddress(QLabel &RightDownLabelPointer);

	void GetLeftCamID(QLineEdit &LeftCamIDPointer);
	void GetLeftIpAddress(QLineEdit &LeftIpPointer);
	void GetLeftMacAddress(QLineEdit &LeftMacPointer);
	void GetLeftImageHeightAddress(QLineEdit &LeftImageHeightPointer);
	void GetLeftImageWidthAddress(QLineEdit &LeftImageWidthPointer);
	void GetLeftExposureAddress(QLineEdit &LeftExposurePointer);
	void GetLeftTriggerAddress(QLineEdit &LeftTriggerPointer);
	void GetLeftFrameAddress(QLineEdit &LeftFramePointer);

	void GetRightCamID(QLineEdit &RightCamIDPointer);
	void GetRightIpAddress(QLineEdit &RightIpPointer);
	void GetRightMacAddress(QLineEdit &RightMacPointer);
	void GetRightImageHeightAddress(QLineEdit &RightImageHeightPointer);
	void GetRightImageWidthAddress(QLineEdit &RightImageWidthPointer);
	void GetRightExposureAddress(QLineEdit &RightExposurePointer);
	void GetRightTriggerAddress(QLineEdit &RightTriggerPointer);
	void GetRightFrameAddress(QLineEdit &RightFramePointer);


	//void GetLeftDownCamID(QLineEdit &LeftDownCamIDPointer);
	//void GetLeftDownIpAddress(QLineEdit &LeftDownIpPointer);
	//void GetLeftDownMacAddress(QLineEdit &LeftDownMacPointer);
	//void GetLeftDownImageHeightAddress(QLineEdit &LeftDownImageHeightPointer);
	//void GetLeftDownImageWidthAddress(QLineEdit &LeftDownImageWidthPointer);
	//void GetLeftDownExposureAddress(QLineEdit &LeftDownExposurePointer);
	//void GetLeftDownTriggerAddress(QLineEdit &LeftDownTriggerPointer);
	//void GetLeftDownFrameAddress(QLineEdit &LeftDownFramePointer);

	//void GetRightDownCamID(QLineEdit &RightDownCamIDPointer);
	//void GetRightDownIpAddress(QLineEdit &RightDownIpPointer);
	//void GetRightDownMacAddress(QLineEdit &RightDownMacPointer);
	//void GetRightDownImageHeightAddress(QLineEdit &RightDownImageHeightPointer);
	//void GetRightDownImageWidthAddress(QLineEdit &RightDownImageWidthPointer);
	//void GetRightDownExposureAddress(QLineEdit &RightDownExposurePointer);
	//void GetRightDownTriggerAddress(QLineEdit &RightDownTriggerPointer);
	//void GetRightDownFrameAddress(QLineEdit &RightDownFramePointer);

protected:
	GenApi::CIntegerPtr m_pHeartbeatTimeout; // Pointer to the node, will be NULL if no node exists.

private:
	CGrabResultPtr LeftptrGrabResult;
	CGrabResultPtr RightptrGrabResult;

};

