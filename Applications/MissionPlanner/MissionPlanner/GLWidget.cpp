#include "GLWidget.h"

GLWidget::GLWidget(QWidget *parent)
	: QGLWidget(parent)
{
	ui.setupUi(this);
}

GLWidget::~GLWidget()
{

}
