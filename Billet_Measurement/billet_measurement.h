#ifndef BILLET_MEASUREMENT_H
#define BILLET_MEASUREMENT_H

#include <QtWidgets/QMainWindow>
#include "ui_billet_measurement.h"

#include "SetCamPara.h"
#include "SetTriggerParam.h";
#include "qextserialport/qextserialport.h"
class Billet_Measurement : public QMainWindow
{
	Q_OBJECT

public:
	Billet_Measurement(QWidget *parent = 0);
	~Billet_Measurement();

	

private:

	Ui::Billet_MeasurementClass ui;
	SetCamPara* SetCamWindow;
	SetTriggerParam* SetTriggerWindow;

public:

	/*QextSerialPort *myCom = nullptr*/;
private slots:
    //相机
	void SlotCamConnect();
	void SlotCamDisconn();
	void SlotStartGrab();
	void SlotPauseGrab();

	//相机参数
	void SlotSetCam();
	void SlotGetCam();
	void SlotCancelCamPara();

	//外部触发
	//打开外部触发，相机同时进行拍摄
	void SlotExTriggerOn();
	//关闭外部触发，相机停止拍摄
	void SlotExTriggerOff();
	void SlotSetExTriggerParam();
	void SlotTriggerBtnOk();
	void SlotTriggerBtnCancel();

	void InitSlot();
	

};

#endif // BILLET_MEASUREMENT_H
