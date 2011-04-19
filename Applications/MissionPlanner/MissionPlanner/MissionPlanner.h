#ifndef MISSIONPLANNER_H
#define MISSIONPLANNER_H

#include <QtGui/QMainWindow>
#include "ui_MissionPlanner.h"

class MissionPlanner : public QMainWindow
{
	Q_OBJECT

public:
	MissionPlanner(QWidget *parent = 0, Qt::WFlags flags = 0);
	~MissionPlanner();

private:
	Ui::MissionPlannerClass ui;
};

#endif // MISSIONPLANNER_H
