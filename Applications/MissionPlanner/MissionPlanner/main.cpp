#include "MissionPlanner.h"
#include <QtGui/QApplication>

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	MissionPlanner w;
	w.show();
	return a.exec();
}
