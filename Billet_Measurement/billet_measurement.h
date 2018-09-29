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
    //���
	void SlotCamConnect();
	void SlotCamDisconn();
	void SlotStartGrab();
	void SlotPauseGrab();

	//�������
	void SlotSetCam();
	void SlotGetCam();
	void SlotCancelCamPara();

	//�ⲿ����
	//���ⲿ���������ͬʱ��������
	void SlotExTriggerOn();
	//�ر��ⲿ���������ֹͣ����
	void SlotExTriggerOff();
	void SlotSetExTriggerParam();
	void SlotTriggerBtnOk();
	void SlotTriggerBtnCancel();

	void InitSlot();
	

};

#endif // BILLET_MEASUREMENT_H
