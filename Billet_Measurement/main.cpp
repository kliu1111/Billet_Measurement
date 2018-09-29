#include "billet_measurement.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	Billet_Measurement w;
	w.show();
	return a.exec();
}
