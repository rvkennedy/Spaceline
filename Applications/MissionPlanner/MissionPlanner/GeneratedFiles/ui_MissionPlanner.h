/********************************************************************************
** Form generated from reading ui file 'MissionPlanner.ui'
**
** Created: Sat 29. Jan 20:44:00 2011
**      by: Qt User Interface Compiler version 4.5.3
**
** WARNING! All changes made in this file will be lost when recompiling ui file!
********************************************************************************/

#ifndef UI_MISSIONPLANNER_H
#define UI_MISSIONPLANNER_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDockWidget>
#include <QtGui/QHeaderView>
#include <QtGui/QMainWindow>
#include <QtGui/QMenuBar>
#include <QtGui/QStatusBar>
#include <QtGui/QToolBar>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>
#include <QtOpenGL/QGLWidget>

QT_BEGIN_NAMESPACE

class Ui_MissionPlannerClass
{
public:
    QWidget *centralWidget;
    QVBoxLayout *verticalLayout;
    QGLWidget *glWidget;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;
    QDockWidget *dockWidget;
    QWidget *dockWidgetContents;

    void setupUi(QMainWindow *MissionPlannerClass)
    {
        if (MissionPlannerClass->objectName().isEmpty())
            MissionPlannerClass->setObjectName(QString::fromUtf8("MissionPlannerClass"));
        MissionPlannerClass->resize(600, 400);
        centralWidget = new QWidget(MissionPlannerClass);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        verticalLayout = new QVBoxLayout(centralWidget);
        verticalLayout->setSpacing(6);
        verticalLayout->setMargin(11);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        glWidget = new QGLWidget(centralWidget);
        glWidget->setObjectName(QString::fromUtf8("glWidget"));

        verticalLayout->addWidget(glWidget);

        MissionPlannerClass->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MissionPlannerClass);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 600, 22));
        MissionPlannerClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MissionPlannerClass);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        MissionPlannerClass->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MissionPlannerClass);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        MissionPlannerClass->setStatusBar(statusBar);
        dockWidget = new QDockWidget(MissionPlannerClass);
        dockWidget->setObjectName(QString::fromUtf8("dockWidget"));
        dockWidgetContents = new QWidget();
        dockWidgetContents->setObjectName(QString::fromUtf8("dockWidgetContents"));
        dockWidget->setWidget(dockWidgetContents);
        MissionPlannerClass->addDockWidget(static_cast<Qt::DockWidgetArea>(1), dockWidget);

        retranslateUi(MissionPlannerClass);

        QMetaObject::connectSlotsByName(MissionPlannerClass);
    } // setupUi

    void retranslateUi(QMainWindow *MissionPlannerClass)
    {
        MissionPlannerClass->setWindowTitle(QApplication::translate("MissionPlannerClass", "MissionPlanner", 0, QApplication::UnicodeUTF8));
        Q_UNUSED(MissionPlannerClass);
    } // retranslateUi

};

namespace Ui {
    class MissionPlannerClass: public Ui_MissionPlannerClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MISSIONPLANNER_H
