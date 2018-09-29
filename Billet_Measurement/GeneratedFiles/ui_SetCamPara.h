/********************************************************************************
** Form generated from reading UI file 'SetCamPara.ui'
**
** Created by: Qt User Interface Compiler version 5.5.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SETCAMPARA_H
#define UI_SETCAMPARA_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SetCamPara
{
public:
    QLineEdit *lineEdit_frameFrequency;
    QLineEdit *lineEdit_exposureTime;
    QLineEdit *lineEdit_triggerMode;
    QLabel *label_3;
    QLabel *label_6;
    QLabel *label_7;
    QLineEdit *lineEdit_imageHeight;
    QLabel *label_4;
    QLineEdit *lineEdit_camIP;
    QLabel *label_2;
    QLineEdit *lineEdit_imageWidth;
    QLineEdit *lineEdit_camMAC;
    QLabel *label_5;
    QLabel *label_8;
    QLineEdit *lineEdit_frameFrequency_2;
    QLineEdit *lineEdit_camMAC_2;
    QLineEdit *lineEdit_imageHeight_2;
    QLabel *label_9;
    QLabel *label_10;
    QLineEdit *lineEdit_triggerMode_2;
    QLabel *label_11;
    QLabel *label_12;
    QLabel *label_13;
    QLineEdit *lineEdit_camIP_2;
    QLineEdit *lineEdit_exposureTime_2;
    QLabel *label_14;
    QLabel *label_15;
    QLineEdit *lineEdit_imageWidth_2;
    QPushButton *Btn_Cancel;
    QPushButton *Btn_Ok;
    QLabel *label_16;
    QLineEdit *lineEdit_CamID_2;
    QLineEdit *lineEdit_CamID;
    QLabel *label_17;
    QLabel *label_18;
    QLineEdit *lineEdit_exposureTime_4;
    QLineEdit *lineEdit_camIP_3;
    QLabel *label_19;
    QLabel *label_20;
    QLabel *label_21;
    QLabel *label_22;
    QLabel *label_23;
    QLabel *label_24;
    QLineEdit *lineEdit_triggerMode_4;
    QLineEdit *lineEdit_imageHeight_3;
    QLabel *label_25;
    QLabel *label_26;
    QLineEdit *lineEdit_imageHeight_4;
    QLabel *label_27;
    QLineEdit *lineEdit_frameFrequency_3;
    QLineEdit *lineEdit_exposureTime_3;
    QLineEdit *lineEdit_camMAC_3;
    QLabel *label_28;
    QLabel *label_29;
    QLineEdit *lineEdit_camIP_4;
    QLineEdit *lineEdit_CamID_3;
    QLineEdit *lineEdit_camMAC_4;
    QLineEdit *lineEdit_triggerMode_3;
    QLabel *label_30;
    QLabel *label_31;
    QLineEdit *lineEdit_CamID_4;
    QLineEdit *lineEdit_imageWidth_3;
    QLineEdit *lineEdit_imageWidth_4;
    QLineEdit *lineEdit_frameFrequency_4;
    QLabel *label_32;
    QLabel *label_33;

    void setupUi(QWidget *SetCamPara)
    {
        if (SetCamPara->objectName().isEmpty())
            SetCamPara->setObjectName(QStringLiteral("SetCamPara"));
        SetCamPara->resize(600, 651);
        lineEdit_frameFrequency = new QLineEdit(SetCamPara);
        lineEdit_frameFrequency->setObjectName(QStringLiteral("lineEdit_frameFrequency"));
        lineEdit_frameFrequency->setGeometry(QRect(130, 250, 130, 20));
        lineEdit_exposureTime = new QLineEdit(SetCamPara);
        lineEdit_exposureTime->setObjectName(QStringLiteral("lineEdit_exposureTime"));
        lineEdit_exposureTime->setGeometry(QRect(130, 220, 130, 20));
        lineEdit_triggerMode = new QLineEdit(SetCamPara);
        lineEdit_triggerMode->setObjectName(QStringLiteral("lineEdit_triggerMode"));
        lineEdit_triggerMode->setEnabled(false);
        lineEdit_triggerMode->setGeometry(QRect(130, 130, 130, 20));
        label_3 = new QLabel(SetCamPara);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(70, 250, 48, 16));
        label_6 = new QLabel(SetCamPara);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(70, 100, 42, 16));
        label_6->setAlignment(Qt::AlignCenter);
        label_7 = new QLabel(SetCamPara);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(70, 70, 36, 16));
        label_7->setAlignment(Qt::AlignCenter);
        lineEdit_imageHeight = new QLineEdit(SetCamPara);
        lineEdit_imageHeight->setObjectName(QStringLiteral("lineEdit_imageHeight"));
        lineEdit_imageHeight->setGeometry(QRect(130, 160, 130, 20));
        label_4 = new QLabel(SetCamPara);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(70, 220, 48, 16));
        lineEdit_camIP = new QLineEdit(SetCamPara);
        lineEdit_camIP->setObjectName(QStringLiteral("lineEdit_camIP"));
        lineEdit_camIP->setEnabled(false);
        lineEdit_camIP->setGeometry(QRect(130, 70, 130, 20));
        label_2 = new QLabel(SetCamPara);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(70, 160, 48, 16));
        label_2->setAlignment(Qt::AlignCenter);
        lineEdit_imageWidth = new QLineEdit(SetCamPara);
        lineEdit_imageWidth->setObjectName(QStringLiteral("lineEdit_imageWidth"));
        lineEdit_imageWidth->setGeometry(QRect(130, 190, 130, 20));
        lineEdit_camMAC = new QLineEdit(SetCamPara);
        lineEdit_camMAC->setObjectName(QStringLiteral("lineEdit_camMAC"));
        lineEdit_camMAC->setEnabled(false);
        lineEdit_camMAC->setGeometry(QRect(130, 100, 130, 20));
        label_5 = new QLabel(SetCamPara);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(70, 130, 48, 16));
        label_8 = new QLabel(SetCamPara);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setGeometry(QRect(70, 190, 48, 16));
        label_8->setAlignment(Qt::AlignCenter);
        lineEdit_frameFrequency_2 = new QLineEdit(SetCamPara);
        lineEdit_frameFrequency_2->setObjectName(QStringLiteral("lineEdit_frameFrequency_2"));
        lineEdit_frameFrequency_2->setGeometry(QRect(400, 250, 130, 20));
        lineEdit_camMAC_2 = new QLineEdit(SetCamPara);
        lineEdit_camMAC_2->setObjectName(QStringLiteral("lineEdit_camMAC_2"));
        lineEdit_camMAC_2->setEnabled(false);
        lineEdit_camMAC_2->setGeometry(QRect(400, 100, 130, 20));
        lineEdit_imageHeight_2 = new QLineEdit(SetCamPara);
        lineEdit_imageHeight_2->setObjectName(QStringLiteral("lineEdit_imageHeight_2"));
        lineEdit_imageHeight_2->setGeometry(QRect(400, 160, 130, 20));
        label_9 = new QLabel(SetCamPara);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setGeometry(QRect(340, 220, 48, 16));
        label_10 = new QLabel(SetCamPara);
        label_10->setObjectName(QStringLiteral("label_10"));
        label_10->setGeometry(QRect(340, 190, 48, 16));
        lineEdit_triggerMode_2 = new QLineEdit(SetCamPara);
        lineEdit_triggerMode_2->setObjectName(QStringLiteral("lineEdit_triggerMode_2"));
        lineEdit_triggerMode_2->setEnabled(false);
        lineEdit_triggerMode_2->setGeometry(QRect(400, 130, 130, 20));
        label_11 = new QLabel(SetCamPara);
        label_11->setObjectName(QStringLiteral("label_11"));
        label_11->setGeometry(QRect(340, 100, 42, 16));
        label_12 = new QLabel(SetCamPara);
        label_12->setObjectName(QStringLiteral("label_12"));
        label_12->setGeometry(QRect(340, 70, 36, 16));
        label_12->setAlignment(Qt::AlignCenter);
        label_13 = new QLabel(SetCamPara);
        label_13->setObjectName(QStringLiteral("label_13"));
        label_13->setGeometry(QRect(340, 130, 48, 16));
        lineEdit_camIP_2 = new QLineEdit(SetCamPara);
        lineEdit_camIP_2->setObjectName(QStringLiteral("lineEdit_camIP_2"));
        lineEdit_camIP_2->setEnabled(false);
        lineEdit_camIP_2->setGeometry(QRect(400, 70, 130, 20));
        lineEdit_exposureTime_2 = new QLineEdit(SetCamPara);
        lineEdit_exposureTime_2->setObjectName(QStringLiteral("lineEdit_exposureTime_2"));
        lineEdit_exposureTime_2->setGeometry(QRect(400, 220, 130, 20));
        label_14 = new QLabel(SetCamPara);
        label_14->setObjectName(QStringLiteral("label_14"));
        label_14->setGeometry(QRect(340, 160, 48, 16));
        label_15 = new QLabel(SetCamPara);
        label_15->setObjectName(QStringLiteral("label_15"));
        label_15->setGeometry(QRect(340, 250, 48, 16));
        lineEdit_imageWidth_2 = new QLineEdit(SetCamPara);
        lineEdit_imageWidth_2->setObjectName(QStringLiteral("lineEdit_imageWidth_2"));
        lineEdit_imageWidth_2->setGeometry(QRect(400, 190, 130, 20));
        Btn_Cancel = new QPushButton(SetCamPara);
        Btn_Cancel->setObjectName(QStringLiteral("Btn_Cancel"));
        Btn_Cancel->setGeometry(QRect(390, 590, 73, 23));
        Btn_Ok = new QPushButton(SetCamPara);
        Btn_Ok->setObjectName(QStringLiteral("Btn_Ok"));
        Btn_Ok->setGeometry(QRect(150, 590, 73, 23));
        label_16 = new QLabel(SetCamPara);
        label_16->setObjectName(QStringLiteral("label_16"));
        label_16->setGeometry(QRect(70, 40, 48, 16));
        lineEdit_CamID_2 = new QLineEdit(SetCamPara);
        lineEdit_CamID_2->setObjectName(QStringLiteral("lineEdit_CamID_2"));
        lineEdit_CamID_2->setEnabled(false);
        lineEdit_CamID_2->setGeometry(QRect(400, 40, 130, 20));
        lineEdit_CamID = new QLineEdit(SetCamPara);
        lineEdit_CamID->setObjectName(QStringLiteral("lineEdit_CamID"));
        lineEdit_CamID->setEnabled(false);
        lineEdit_CamID->setGeometry(QRect(130, 40, 130, 20));
        label_17 = new QLabel(SetCamPara);
        label_17->setObjectName(QStringLiteral("label_17"));
        label_17->setGeometry(QRect(340, 40, 48, 16));
        label_18 = new QLabel(SetCamPara);
        label_18->setObjectName(QStringLiteral("label_18"));
        label_18->setGeometry(QRect(70, 320, 48, 16));
        lineEdit_exposureTime_4 = new QLineEdit(SetCamPara);
        lineEdit_exposureTime_4->setObjectName(QStringLiteral("lineEdit_exposureTime_4"));
        lineEdit_exposureTime_4->setGeometry(QRect(400, 500, 130, 20));
        lineEdit_camIP_3 = new QLineEdit(SetCamPara);
        lineEdit_camIP_3->setObjectName(QStringLiteral("lineEdit_camIP_3"));
        lineEdit_camIP_3->setEnabled(false);
        lineEdit_camIP_3->setGeometry(QRect(130, 350, 130, 20));
        label_19 = new QLabel(SetCamPara);
        label_19->setObjectName(QStringLiteral("label_19"));
        label_19->setGeometry(QRect(340, 350, 36, 16));
        label_19->setAlignment(Qt::AlignCenter);
        label_20 = new QLabel(SetCamPara);
        label_20->setObjectName(QStringLiteral("label_20"));
        label_20->setGeometry(QRect(340, 380, 42, 16));
        label_20->setAlignment(Qt::AlignCenter);
        label_21 = new QLabel(SetCamPara);
        label_21->setObjectName(QStringLiteral("label_21"));
        label_21->setGeometry(QRect(70, 530, 48, 16));
        label_22 = new QLabel(SetCamPara);
        label_22->setObjectName(QStringLiteral("label_22"));
        label_22->setGeometry(QRect(340, 440, 48, 16));
        label_22->setAlignment(Qt::AlignCenter);
        label_23 = new QLabel(SetCamPara);
        label_23->setObjectName(QStringLiteral("label_23"));
        label_23->setGeometry(QRect(70, 380, 42, 16));
        label_24 = new QLabel(SetCamPara);
        label_24->setObjectName(QStringLiteral("label_24"));
        label_24->setGeometry(QRect(70, 500, 48, 16));
        lineEdit_triggerMode_4 = new QLineEdit(SetCamPara);
        lineEdit_triggerMode_4->setObjectName(QStringLiteral("lineEdit_triggerMode_4"));
        lineEdit_triggerMode_4->setEnabled(false);
        lineEdit_triggerMode_4->setGeometry(QRect(400, 410, 130, 20));
        lineEdit_imageHeight_3 = new QLineEdit(SetCamPara);
        lineEdit_imageHeight_3->setObjectName(QStringLiteral("lineEdit_imageHeight_3"));
        lineEdit_imageHeight_3->setGeometry(QRect(130, 440, 130, 20));
        label_25 = new QLabel(SetCamPara);
        label_25->setObjectName(QStringLiteral("label_25"));
        label_25->setGeometry(QRect(70, 350, 36, 16));
        label_25->setAlignment(Qt::AlignCenter);
        label_26 = new QLabel(SetCamPara);
        label_26->setObjectName(QStringLiteral("label_26"));
        label_26->setGeometry(QRect(340, 470, 48, 16));
        label_26->setAlignment(Qt::AlignCenter);
        lineEdit_imageHeight_4 = new QLineEdit(SetCamPara);
        lineEdit_imageHeight_4->setObjectName(QStringLiteral("lineEdit_imageHeight_4"));
        lineEdit_imageHeight_4->setGeometry(QRect(400, 440, 130, 20));
        label_27 = new QLabel(SetCamPara);
        label_27->setObjectName(QStringLiteral("label_27"));
        label_27->setGeometry(QRect(340, 530, 48, 16));
        lineEdit_frameFrequency_3 = new QLineEdit(SetCamPara);
        lineEdit_frameFrequency_3->setObjectName(QStringLiteral("lineEdit_frameFrequency_3"));
        lineEdit_frameFrequency_3->setGeometry(QRect(130, 530, 130, 20));
        lineEdit_exposureTime_3 = new QLineEdit(SetCamPara);
        lineEdit_exposureTime_3->setObjectName(QStringLiteral("lineEdit_exposureTime_3"));
        lineEdit_exposureTime_3->setGeometry(QRect(130, 500, 130, 20));
        lineEdit_camMAC_3 = new QLineEdit(SetCamPara);
        lineEdit_camMAC_3->setObjectName(QStringLiteral("lineEdit_camMAC_3"));
        lineEdit_camMAC_3->setEnabled(false);
        lineEdit_camMAC_3->setGeometry(QRect(130, 380, 130, 20));
        label_28 = new QLabel(SetCamPara);
        label_28->setObjectName(QStringLiteral("label_28"));
        label_28->setGeometry(QRect(70, 470, 48, 16));
        label_29 = new QLabel(SetCamPara);
        label_29->setObjectName(QStringLiteral("label_29"));
        label_29->setGeometry(QRect(70, 440, 48, 16));
        lineEdit_camIP_4 = new QLineEdit(SetCamPara);
        lineEdit_camIP_4->setObjectName(QStringLiteral("lineEdit_camIP_4"));
        lineEdit_camIP_4->setEnabled(false);
        lineEdit_camIP_4->setGeometry(QRect(400, 350, 130, 20));
        lineEdit_CamID_3 = new QLineEdit(SetCamPara);
        lineEdit_CamID_3->setObjectName(QStringLiteral("lineEdit_CamID_3"));
        lineEdit_CamID_3->setEnabled(false);
        lineEdit_CamID_3->setGeometry(QRect(130, 320, 130, 20));
        lineEdit_camMAC_4 = new QLineEdit(SetCamPara);
        lineEdit_camMAC_4->setObjectName(QStringLiteral("lineEdit_camMAC_4"));
        lineEdit_camMAC_4->setEnabled(false);
        lineEdit_camMAC_4->setGeometry(QRect(400, 380, 130, 20));
        lineEdit_triggerMode_3 = new QLineEdit(SetCamPara);
        lineEdit_triggerMode_3->setObjectName(QStringLiteral("lineEdit_triggerMode_3"));
        lineEdit_triggerMode_3->setEnabled(false);
        lineEdit_triggerMode_3->setGeometry(QRect(130, 410, 130, 20));
        label_30 = new QLabel(SetCamPara);
        label_30->setObjectName(QStringLiteral("label_30"));
        label_30->setGeometry(QRect(340, 410, 48, 16));
        label_31 = new QLabel(SetCamPara);
        label_31->setObjectName(QStringLiteral("label_31"));
        label_31->setGeometry(QRect(70, 410, 48, 16));
        lineEdit_CamID_4 = new QLineEdit(SetCamPara);
        lineEdit_CamID_4->setObjectName(QStringLiteral("lineEdit_CamID_4"));
        lineEdit_CamID_4->setEnabled(false);
        lineEdit_CamID_4->setGeometry(QRect(400, 320, 130, 20));
        lineEdit_imageWidth_3 = new QLineEdit(SetCamPara);
        lineEdit_imageWidth_3->setObjectName(QStringLiteral("lineEdit_imageWidth_3"));
        lineEdit_imageWidth_3->setGeometry(QRect(130, 470, 130, 20));
        lineEdit_imageWidth_4 = new QLineEdit(SetCamPara);
        lineEdit_imageWidth_4->setObjectName(QStringLiteral("lineEdit_imageWidth_4"));
        lineEdit_imageWidth_4->setGeometry(QRect(400, 470, 130, 20));
        lineEdit_frameFrequency_4 = new QLineEdit(SetCamPara);
        lineEdit_frameFrequency_4->setObjectName(QStringLiteral("lineEdit_frameFrequency_4"));
        lineEdit_frameFrequency_4->setGeometry(QRect(400, 530, 130, 20));
        label_32 = new QLabel(SetCamPara);
        label_32->setObjectName(QStringLiteral("label_32"));
        label_32->setGeometry(QRect(340, 500, 48, 16));
        label_33 = new QLabel(SetCamPara);
        label_33->setObjectName(QStringLiteral("label_33"));
        label_33->setGeometry(QRect(340, 320, 48, 16));

        retranslateUi(SetCamPara);

        QMetaObject::connectSlotsByName(SetCamPara);
    } // setupUi

    void retranslateUi(QWidget *SetCamPara)
    {
        SetCamPara->setWindowTitle(QApplication::translate("SetCamPara", "\347\233\270\346\234\272\345\217\202\346\225\260\350\256\276\347\275\256", 0));
        lineEdit_triggerMode->setText(QApplication::translate("SetCamPara", "\345\244\226\351\203\250\350\247\246\345\217\221", 0));
        label_3->setText(QApplication::translate("SetCamPara", "\345\233\276\345\203\217\345\270\247\351\242\221", 0));
        label_6->setText(QApplication::translate("SetCamPara", "\347\233\270\346\234\272MAC", 0));
        label_7->setText(QApplication::translate("SetCamPara", "\347\233\270\346\234\272IP", 0));
        label_4->setText(QApplication::translate("SetCamPara", "\346\233\235\345\205\211\346\227\266\351\227\264", 0));
        label_2->setText(QApplication::translate("SetCamPara", "\345\233\276\345\203\217\351\253\230\345\272\246", 0));
        label_5->setText(QApplication::translate("SetCamPara", "\350\247\246\345\217\221\346\250\241\345\274\217", 0));
        label_8->setText(QApplication::translate("SetCamPara", "\345\233\276\345\203\217\345\256\275\345\272\246", 0));
        label_9->setText(QApplication::translate("SetCamPara", "\346\233\235\345\205\211\346\227\266\351\227\264", 0));
        label_10->setText(QApplication::translate("SetCamPara", "\345\233\276\345\203\217\345\256\275\345\272\246", 0));
        lineEdit_triggerMode_2->setText(QApplication::translate("SetCamPara", "\345\244\226\351\203\250\350\247\246\345\217\221", 0));
        label_11->setText(QApplication::translate("SetCamPara", "\347\233\270\346\234\272MAC", 0));
        label_12->setText(QApplication::translate("SetCamPara", "\347\233\270\346\234\272IP", 0));
        label_13->setText(QApplication::translate("SetCamPara", "\350\247\246\345\217\221\346\250\241\345\274\217", 0));
        label_14->setText(QApplication::translate("SetCamPara", "\345\233\276\345\203\217\351\253\230\345\272\246", 0));
        label_15->setText(QApplication::translate("SetCamPara", "\345\233\276\345\203\217\345\270\247\351\242\221", 0));
        Btn_Cancel->setText(QApplication::translate("SetCamPara", "\345\217\226\346\266\210", 0));
        Btn_Ok->setText(QApplication::translate("SetCamPara", "\347\241\256\345\256\232", 0));
        Btn_Ok->setShortcut(QApplication::translate("SetCamPara", "Return", 0));
        label_16->setText(QApplication::translate("SetCamPara", "\347\233\270\346\234\272ID", 0));
        label_17->setText(QApplication::translate("SetCamPara", "\347\233\270\346\234\272ID", 0));
        label_18->setText(QApplication::translate("SetCamPara", "\347\233\270\346\234\272ID", 0));
        label_19->setText(QApplication::translate("SetCamPara", "\347\233\270\346\234\272IP", 0));
        label_20->setText(QApplication::translate("SetCamPara", "\347\233\270\346\234\272MAC", 0));
        label_21->setText(QApplication::translate("SetCamPara", "\345\233\276\345\203\217\345\270\247\351\242\221", 0));
        label_22->setText(QApplication::translate("SetCamPara", "\345\233\276\345\203\217\351\253\230\345\272\246", 0));
        label_23->setText(QApplication::translate("SetCamPara", "\347\233\270\346\234\272MAC", 0));
        label_24->setText(QApplication::translate("SetCamPara", "\346\233\235\345\205\211\346\227\266\351\227\264", 0));
        lineEdit_triggerMode_4->setText(QApplication::translate("SetCamPara", "\345\244\226\351\203\250\350\247\246\345\217\221", 0));
        label_25->setText(QApplication::translate("SetCamPara", "\347\233\270\346\234\272IP", 0));
        label_26->setText(QApplication::translate("SetCamPara", "\345\233\276\345\203\217\345\256\275\345\272\246", 0));
        label_27->setText(QApplication::translate("SetCamPara", "\345\233\276\345\203\217\345\270\247\351\242\221", 0));
        label_28->setText(QApplication::translate("SetCamPara", "\345\233\276\345\203\217\345\256\275\345\272\246", 0));
        label_29->setText(QApplication::translate("SetCamPara", "\345\233\276\345\203\217\351\253\230\345\272\246", 0));
        lineEdit_triggerMode_3->setText(QApplication::translate("SetCamPara", "\345\244\226\351\203\250\350\247\246\345\217\221", 0));
        label_30->setText(QApplication::translate("SetCamPara", "\350\247\246\345\217\221\346\250\241\345\274\217", 0));
        label_31->setText(QApplication::translate("SetCamPara", "\350\247\246\345\217\221\346\250\241\345\274\217", 0));
        label_32->setText(QApplication::translate("SetCamPara", "\346\233\235\345\205\211\346\227\266\351\227\264", 0));
        label_33->setText(QApplication::translate("SetCamPara", "\347\233\270\346\234\272ID", 0));
    } // retranslateUi

};

namespace Ui {
    class SetCamPara: public Ui_SetCamPara {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SETCAMPARA_H
