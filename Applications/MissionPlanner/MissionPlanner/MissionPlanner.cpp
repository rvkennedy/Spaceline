#include "MissionPlanner.h"
#include <QtOpenGL/QGLWidget>


MissionPlanner::MissionPlanner(QWidget *parent, Qt::WFlags flags)
	: QMainWindow(parent, flags)
{
	ui.setupUi(this);
	ui.glWidget;
}

MissionPlanner::~MissionPlanner()
{

}
