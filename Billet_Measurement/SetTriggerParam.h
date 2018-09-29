#ifndef SETTRIGGERPARAM_H
#define SETTRIGGERPARAM_H

#include <QWidget>
#include "ui_SetTriggerParam.h"

class SetTriggerParam : public QWidget
{
	Q_OBJECT

public:
	SetTriggerParam(QWidget *parent = 0);
	~SetTriggerParam();

public:
	Ui::SetTriggerParam ui;
};

#endif // SETTRIGGERPARAM_H
