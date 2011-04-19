#ifndef GLWIDGET_H
#define GLWIDGET_H

#include <QGLWidget>
#include "ui_GLWidget.h"

class GLWidget : public QGLWidget
{
	Q_OBJECT

public:
	GLWidget(QWidget *parent = 0);
	~GLWidget();

private:
	Ui::GLWidgetClass ui;
};

#endif // GLWIDGET_H
