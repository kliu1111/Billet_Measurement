#ifndef SETCAMPARA_H
#define SETCAMPARA_H

#include <QWidget>
#include "ui_SetCamPara.h"

class SetCamPara : public QWidget
{
	Q_OBJECT

public:
	SetCamPara(QWidget *parent = 0);
	~SetCamPara();

public:
	Ui::SetCamPara ui;
};

#endif // SETCAMPARA_H
