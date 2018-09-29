/********************************************************************************
** Form generated from reading UI file 'billet_measurement.ui'
**
** Created by: Qt User Interface Compiler version 5.5.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BILLET_MEASUREMENT_H
#define UI_BILLET_MEASUREMENT_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Billet_MeasurementClass
{
public:
    QAction *action_connect;
    QAction *action_disconnect;
    QAction *action_start;
    QAction *action_pause;
    QAction *action_setcampara;
    QAction *action_ExTriggerON;
    QAction *action_ExTriggerOff;
    QAction *action_TriggerParam;
    QWidget *centralWidget;
    QWidget *widget;
    QLabel *label_left_up;
    QWidget *widget_2;
    QLabel *label_left_down;
    QWidget *widget_3;
    QLabel *label_right_up;
    QWidget *widget_4;
    QLabel *label_right_down;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;
    QMenuBar *menuBar;
    QMenu *menu;
    QMenu *menu_2;
    QMenu *menu_3;
    QMenu *menu_4;

    void setupUi(QMainWindow *Billet_MeasurementClass)
    {
        if (Billet_MeasurementClass->objectName().isEmpty())
            Billet_MeasurementClass->setObjectName(QStringLiteral("Billet_MeasurementClass"));
        Billet_MeasurementClass->setEnabled(true);
        Billet_MeasurementClass->resize(805, 600);
        Billet_MeasurementClass->setMaximumSize(QSize(16777215, 16777215));
        Billet_MeasurementClass->setAcceptDrops(true);
        action_connect = new QAction(Billet_MeasurementClass);
        action_connect->setObjectName(QStringLiteral("action_connect"));
        QIcon icon;
        icon.addFile(QStringLiteral(":/image/image/connect.ico"), QSize(), QIcon::Normal, QIcon::Off);
        action_connect->setIcon(icon);
        action_disconnect = new QAction(Billet_MeasurementClass);
        action_disconnect->setObjectName(QStringLiteral("action_disconnect"));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/image/image/disconnect.ico"), QSize(), QIcon::Normal, QIcon::Off);
        action_disconnect->setIcon(icon1);
        action_start = new QAction(Billet_MeasurementClass);
        action_start->setObjectName(QStringLiteral("action_start"));
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/image/image/start.ico"), QSize(), QIcon::Normal, QIcon::Off);
        action_start->setIcon(icon2);
        action_pause = new QAction(Billet_MeasurementClass);
        action_pause->setObjectName(QStringLiteral("action_pause"));
        QIcon icon3;
        icon3.addFile(QStringLiteral(":/image/image/pasue.ico"), QSize(), QIcon::Normal, QIcon::Off);
        action_pause->setIcon(icon3);
        action_setcampara = new QAction(Billet_MeasurementClass);
        action_setcampara->setObjectName(QStringLiteral("action_setcampara"));
        QIcon icon4;
        icon4.addFile(QStringLiteral(":/image/image/Setting_32px.ico"), QSize(), QIcon::Normal, QIcon::Off);
        action_setcampara->setIcon(icon4);
        action_ExTriggerON = new QAction(Billet_MeasurementClass);
        action_ExTriggerON->setObjectName(QStringLiteral("action_ExTriggerON"));
        QIcon icon5;
        icon5.addFile(QString::fromUtf8(":/image/image/\345\274\200\345\205\263 \345\274\200(1).png"), QSize(), QIcon::Normal, QIcon::Off);
        action_ExTriggerON->setIcon(icon5);
        action_ExTriggerOff = new QAction(Billet_MeasurementClass);
        action_ExTriggerOff->setObjectName(QStringLiteral("action_ExTriggerOff"));
        QIcon icon6;
        icon6.addFile(QString::fromUtf8(":/image/image/\345\274\200\345\205\263 \345\205\263(1).png"), QSize(), QIcon::Normal, QIcon::Off);
        action_ExTriggerOff->setIcon(icon6);
        action_TriggerParam = new QAction(Billet_MeasurementClass);
        action_TriggerParam->setObjectName(QStringLiteral("action_TriggerParam"));
        QIcon icon7;
        icon7.addFile(QString::fromUtf8(":/image/image/\350\256\276\347\275\256\345\217\202\346\225\260.png"), QSize(), QIcon::Normal, QIcon::Off);
        action_TriggerParam->setIcon(icon7);
        centralWidget = new QWidget(Billet_MeasurementClass);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        widget = new QWidget(centralWidget);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(5, 0, 390, 260));
        label_left_up = new QLabel(widget);
        label_left_up->setObjectName(QStringLiteral("label_left_up"));
        label_left_up->setEnabled(true);
        label_left_up->setGeometry(QRect(0, 0, 390, 260));
        label_left_up->setMaximumSize(QSize(1626, 1236));
        label_left_up->setStyleSheet(QStringLiteral("background-color: rgb(0, 0, 0);"));
        widget_2 = new QWidget(centralWidget);
        widget_2->setObjectName(QStringLiteral("widget_2"));
        widget_2->setGeometry(QRect(5, 270, 390, 260));
        label_left_down = new QLabel(widget_2);
        label_left_down->setObjectName(QStringLiteral("label_left_down"));
        label_left_down->setEnabled(true);
        label_left_down->setGeometry(QRect(0, 0, 390, 260));
        label_left_down->setMaximumSize(QSize(1626, 1236));
        label_left_down->setStyleSheet(QStringLiteral("background-color: rgb(0, 0, 0);"));
        widget_3 = new QWidget(centralWidget);
        widget_3->setObjectName(QStringLiteral("widget_3"));
        widget_3->setGeometry(QRect(405, 0, 390, 260));
        label_right_up = new QLabel(widget_3);
        label_right_up->setObjectName(QStringLiteral("label_right_up"));
        label_right_up->setGeometry(QRect(0, 0, 390, 260));
        label_right_up->setMaximumSize(QSize(1626, 1236));
        label_right_up->setStyleSheet(QStringLiteral("background-color: rgb(0, 0, 0);"));
        widget_4 = new QWidget(centralWidget);
        widget_4->setObjectName(QStringLiteral("widget_4"));
        widget_4->setGeometry(QRect(405, 270, 390, 260));
        label_right_down = new QLabel(widget_4);
        label_right_down->setObjectName(QStringLiteral("label_right_down"));
        label_right_down->setGeometry(QRect(0, 0, 390, 260));
        label_right_down->setMaximumSize(QSize(1626, 1236));
        label_right_down->setStyleSheet(QStringLiteral("background-color: rgb(0, 0, 0);"));
        layoutWidget = new QWidget(centralWidget);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(0, 0, 2, 2));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        Billet_MeasurementClass->setCentralWidget(centralWidget);
        mainToolBar = new QToolBar(Billet_MeasurementClass);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        Billet_MeasurementClass->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(Billet_MeasurementClass);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        Billet_MeasurementClass->setStatusBar(statusBar);
        menuBar = new QMenuBar(Billet_MeasurementClass);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 805, 17));
        menu = new QMenu(menuBar);
        menu->setObjectName(QStringLiteral("menu"));
        menu_2 = new QMenu(menuBar);
        menu_2->setObjectName(QStringLiteral("menu_2"));
        menu_3 = new QMenu(menuBar);
        menu_3->setObjectName(QStringLiteral("menu_3"));
        menu_4 = new QMenu(menuBar);
        menu_4->setObjectName(QStringLiteral("menu_4"));
        Billet_MeasurementClass->setMenuBar(menuBar);

        mainToolBar->addAction(action_connect);
        mainToolBar->addSeparator();
        mainToolBar->addAction(action_disconnect);
        mainToolBar->addSeparator();
        mainToolBar->addAction(action_start);
        mainToolBar->addSeparator();
        mainToolBar->addAction(action_pause);
        mainToolBar->addSeparator();
        mainToolBar->addAction(action_setcampara);
        mainToolBar->addSeparator();
        mainToolBar->addAction(action_ExTriggerON);
        mainToolBar->addSeparator();
        mainToolBar->addAction(action_ExTriggerOff);
        mainToolBar->addSeparator();
        mainToolBar->addAction(action_TriggerParam);
        menuBar->addAction(menu->menuAction());
        menuBar->addAction(menu_2->menuAction());
        menuBar->addAction(menu_3->menuAction());
        menuBar->addAction(menu_4->menuAction());

        retranslateUi(Billet_MeasurementClass);

        QMetaObject::connectSlotsByName(Billet_MeasurementClass);
    } // setupUi

    void retranslateUi(QMainWindow *Billet_MeasurementClass)
    {
        Billet_MeasurementClass->setWindowTitle(QApplication::translate("Billet_MeasurementClass", "\351\222\242\345\235\217\350\275\256\345\273\223\345\234\250\347\272\277\346\265\213\351\207\217\347\263\273\347\273\237   ", 0));
        action_connect->setText(QApplication::translate("Billet_MeasurementClass", "\350\277\236\346\216\245\347\233\270\346\234\272", 0));
        action_disconnect->setText(QApplication::translate("Billet_MeasurementClass", "\346\226\255\345\274\200\347\233\270\346\234\272", 0));
        action_start->setText(QApplication::translate("Billet_MeasurementClass", "\345\274\200\345\247\213\351\207\207\351\233\206", 0));
        action_pause->setText(QApplication::translate("Billet_MeasurementClass", "\345\201\234\346\255\242\351\207\207\351\233\206", 0));
        action_setcampara->setText(QApplication::translate("Billet_MeasurementClass", "\350\256\276\347\275\256\347\233\270\346\234\272\345\217\202\346\225\260", 0));
        action_ExTriggerON->setText(QApplication::translate("Billet_MeasurementClass", "\346\211\223\345\274\200\345\244\226\351\203\250\350\247\246\345\217\221", 0));
        action_ExTriggerOff->setText(QApplication::translate("Billet_MeasurementClass", "\345\205\263\351\227\255\345\244\226\351\203\250\350\247\246\345\217\221", 0));
        action_TriggerParam->setText(QApplication::translate("Billet_MeasurementClass", "\350\256\276\347\275\256\345\244\226\351\203\250\350\247\246\345\217\221\345\217\202\346\225\260", 0));
        label_left_up->setText(QApplication::translate("Billet_MeasurementClass", "TextLabel", 0));
        label_left_down->setText(QApplication::translate("Billet_MeasurementClass", "TextLabel", 0));
        label_right_up->setText(QApplication::translate("Billet_MeasurementClass", "TextLabel", 0));
        label_right_down->setText(QApplication::translate("Billet_MeasurementClass", "TextLabel", 0));
        menu->setTitle(QApplication::translate("Billet_MeasurementClass", "\346\226\207\344\273\266", 0));
        menu_2->setTitle(QApplication::translate("Billet_MeasurementClass", "\347\274\226\350\276\221", 0));
        menu_3->setTitle(QApplication::translate("Billet_MeasurementClass", "\345\270\256\345\212\251", 0));
        menu_4->setTitle(QApplication::translate("Billet_MeasurementClass", "\345\205\263\344\272\216\346\210\221\344\273\254", 0));
    } // retranslateUi

};

namespace Ui {
    class Billet_MeasurementClass: public Ui_Billet_MeasurementClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BILLET_MEASUREMENT_H
