/********************************************************************************
** Form generated from reading UI file 'QtWidgetsApplication1.ui'
**
** Created by: Qt User Interface Compiler version 5.12.10
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QTWIDGETSAPPLICATION1_H
#define UI_QTWIDGETSAPPLICATION1_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_QtWidgetsApplication1Class
{
public:
    QWidget *centralWidget;
    QTableWidget *chartTableWidget;
    QMenuBar *menuBar;
    QMenu *menumyGanttChart_1_0;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *QtWidgetsApplication1Class)
    {
        if (QtWidgetsApplication1Class->objectName().isEmpty())
            QtWidgetsApplication1Class->setObjectName(QString::fromUtf8("QtWidgetsApplication1Class"));
        QtWidgetsApplication1Class->resize(1108, 665);
        centralWidget = new QWidget(QtWidgetsApplication1Class);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        chartTableWidget = new QTableWidget(centralWidget);
        if (chartTableWidget->columnCount() < 8)
            chartTableWidget->setColumnCount(8);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        chartTableWidget->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        chartTableWidget->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        chartTableWidget->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        chartTableWidget->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        chartTableWidget->setHorizontalHeaderItem(4, __qtablewidgetitem4);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        chartTableWidget->setHorizontalHeaderItem(5, __qtablewidgetitem5);
        QTableWidgetItem *__qtablewidgetitem6 = new QTableWidgetItem();
        chartTableWidget->setHorizontalHeaderItem(6, __qtablewidgetitem6);
        QTableWidgetItem *__qtablewidgetitem7 = new QTableWidgetItem();
        chartTableWidget->setHorizontalHeaderItem(7, __qtablewidgetitem7);
        if (chartTableWidget->rowCount() < 15)
            chartTableWidget->setRowCount(15);
        QTableWidgetItem *__qtablewidgetitem8 = new QTableWidgetItem();
        chartTableWidget->setVerticalHeaderItem(0, __qtablewidgetitem8);
        QTableWidgetItem *__qtablewidgetitem9 = new QTableWidgetItem();
        chartTableWidget->setVerticalHeaderItem(1, __qtablewidgetitem9);
        QTableWidgetItem *__qtablewidgetitem10 = new QTableWidgetItem();
        chartTableWidget->setVerticalHeaderItem(2, __qtablewidgetitem10);
        QTableWidgetItem *__qtablewidgetitem11 = new QTableWidgetItem();
        chartTableWidget->setVerticalHeaderItem(3, __qtablewidgetitem11);
        QTableWidgetItem *__qtablewidgetitem12 = new QTableWidgetItem();
        chartTableWidget->setVerticalHeaderItem(4, __qtablewidgetitem12);
        QTableWidgetItem *__qtablewidgetitem13 = new QTableWidgetItem();
        chartTableWidget->setVerticalHeaderItem(5, __qtablewidgetitem13);
        QTableWidgetItem *__qtablewidgetitem14 = new QTableWidgetItem();
        chartTableWidget->setVerticalHeaderItem(6, __qtablewidgetitem14);
        QTableWidgetItem *__qtablewidgetitem15 = new QTableWidgetItem();
        chartTableWidget->setVerticalHeaderItem(7, __qtablewidgetitem15);
        QTableWidgetItem *__qtablewidgetitem16 = new QTableWidgetItem();
        chartTableWidget->setVerticalHeaderItem(8, __qtablewidgetitem16);
        QTableWidgetItem *__qtablewidgetitem17 = new QTableWidgetItem();
        chartTableWidget->setVerticalHeaderItem(9, __qtablewidgetitem17);
        QTableWidgetItem *__qtablewidgetitem18 = new QTableWidgetItem();
        chartTableWidget->setVerticalHeaderItem(10, __qtablewidgetitem18);
        QTableWidgetItem *__qtablewidgetitem19 = new QTableWidgetItem();
        chartTableWidget->setVerticalHeaderItem(11, __qtablewidgetitem19);
        QTableWidgetItem *__qtablewidgetitem20 = new QTableWidgetItem();
        chartTableWidget->setVerticalHeaderItem(12, __qtablewidgetitem20);
        QTableWidgetItem *__qtablewidgetitem21 = new QTableWidgetItem();
        chartTableWidget->setVerticalHeaderItem(13, __qtablewidgetitem21);
        QTableWidgetItem *__qtablewidgetitem22 = new QTableWidgetItem();
        chartTableWidget->setVerticalHeaderItem(14, __qtablewidgetitem22);
        QTableWidgetItem *__qtablewidgetitem23 = new QTableWidgetItem();
        chartTableWidget->setItem(0, 0, __qtablewidgetitem23);
        chartTableWidget->setObjectName(QString::fromUtf8("chartTableWidget"));
        chartTableWidget->setGeometry(QRect(0, 0, 1101, 611));
        QtWidgetsApplication1Class->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(QtWidgetsApplication1Class);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 1108, 26));
        menumyGanttChart_1_0 = new QMenu(menuBar);
        menumyGanttChart_1_0->setObjectName(QString::fromUtf8("menumyGanttChart_1_0"));
        QtWidgetsApplication1Class->setMenuBar(menuBar);
        mainToolBar = new QToolBar(QtWidgetsApplication1Class);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        QtWidgetsApplication1Class->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(QtWidgetsApplication1Class);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        QtWidgetsApplication1Class->setStatusBar(statusBar);

        menuBar->addAction(menumyGanttChart_1_0->menuAction());

        retranslateUi(QtWidgetsApplication1Class);

        QMetaObject::connectSlotsByName(QtWidgetsApplication1Class);
    } // setupUi

    void retranslateUi(QMainWindow *QtWidgetsApplication1Class)
    {
        QtWidgetsApplication1Class->setWindowTitle(QApplication::translate("QtWidgetsApplication1Class", "QtWidgetsApplication1", nullptr));
        QTableWidgetItem *___qtablewidgetitem = chartTableWidget->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("QtWidgetsApplication1Class", "\346\226\260\345\273\272\345\210\227", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = chartTableWidget->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("QtWidgetsApplication1Class", "\346\226\260\345\273\272\345\210\227", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = chartTableWidget->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QApplication::translate("QtWidgetsApplication1Class", "\346\226\260\345\273\272\345\210\227", nullptr));
        QTableWidgetItem *___qtablewidgetitem3 = chartTableWidget->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QApplication::translate("QtWidgetsApplication1Class", "\346\226\260\345\273\272\345\210\227", nullptr));
        QTableWidgetItem *___qtablewidgetitem4 = chartTableWidget->horizontalHeaderItem(4);
        ___qtablewidgetitem4->setText(QApplication::translate("QtWidgetsApplication1Class", "\346\226\260\345\273\272\345\210\227", nullptr));
        QTableWidgetItem *___qtablewidgetitem5 = chartTableWidget->horizontalHeaderItem(5);
        ___qtablewidgetitem5->setText(QApplication::translate("QtWidgetsApplication1Class", "\346\226\260\345\273\272\345\210\227", nullptr));
        QTableWidgetItem *___qtablewidgetitem6 = chartTableWidget->horizontalHeaderItem(6);
        ___qtablewidgetitem6->setText(QApplication::translate("QtWidgetsApplication1Class", "\346\226\260\345\273\272\345\210\227", nullptr));
        QTableWidgetItem *___qtablewidgetitem7 = chartTableWidget->horizontalHeaderItem(7);
        ___qtablewidgetitem7->setText(QApplication::translate("QtWidgetsApplication1Class", "\346\226\260\345\273\272\345\210\227", nullptr));
        QTableWidgetItem *___qtablewidgetitem8 = chartTableWidget->verticalHeaderItem(0);
        ___qtablewidgetitem8->setText(QApplication::translate("QtWidgetsApplication1Class", "\346\226\260\345\273\272\350\241\214", nullptr));
        QTableWidgetItem *___qtablewidgetitem9 = chartTableWidget->verticalHeaderItem(1);
        ___qtablewidgetitem9->setText(QApplication::translate("QtWidgetsApplication1Class", "\346\226\260\345\273\272\350\241\214", nullptr));
        QTableWidgetItem *___qtablewidgetitem10 = chartTableWidget->verticalHeaderItem(2);
        ___qtablewidgetitem10->setText(QApplication::translate("QtWidgetsApplication1Class", "\346\226\260\345\273\272\350\241\214", nullptr));
        QTableWidgetItem *___qtablewidgetitem11 = chartTableWidget->verticalHeaderItem(3);
        ___qtablewidgetitem11->setText(QApplication::translate("QtWidgetsApplication1Class", "\346\226\260\345\273\272\350\241\214", nullptr));
        QTableWidgetItem *___qtablewidgetitem12 = chartTableWidget->verticalHeaderItem(4);
        ___qtablewidgetitem12->setText(QApplication::translate("QtWidgetsApplication1Class", "\346\226\260\345\273\272\350\241\214", nullptr));
        QTableWidgetItem *___qtablewidgetitem13 = chartTableWidget->verticalHeaderItem(5);
        ___qtablewidgetitem13->setText(QApplication::translate("QtWidgetsApplication1Class", "\346\226\260\345\273\272\350\241\214", nullptr));
        QTableWidgetItem *___qtablewidgetitem14 = chartTableWidget->verticalHeaderItem(6);
        ___qtablewidgetitem14->setText(QApplication::translate("QtWidgetsApplication1Class", "\346\226\260\345\273\272\350\241\214", nullptr));
        QTableWidgetItem *___qtablewidgetitem15 = chartTableWidget->verticalHeaderItem(7);
        ___qtablewidgetitem15->setText(QApplication::translate("QtWidgetsApplication1Class", "\346\226\260\345\273\272\350\241\214", nullptr));
        QTableWidgetItem *___qtablewidgetitem16 = chartTableWidget->verticalHeaderItem(8);
        ___qtablewidgetitem16->setText(QApplication::translate("QtWidgetsApplication1Class", "\346\226\260\345\273\272\350\241\214", nullptr));
        QTableWidgetItem *___qtablewidgetitem17 = chartTableWidget->verticalHeaderItem(9);
        ___qtablewidgetitem17->setText(QApplication::translate("QtWidgetsApplication1Class", "\346\226\260\345\273\272\350\241\214", nullptr));
        QTableWidgetItem *___qtablewidgetitem18 = chartTableWidget->verticalHeaderItem(10);
        ___qtablewidgetitem18->setText(QApplication::translate("QtWidgetsApplication1Class", "\346\226\260\345\273\272\350\241\214", nullptr));
        QTableWidgetItem *___qtablewidgetitem19 = chartTableWidget->verticalHeaderItem(11);
        ___qtablewidgetitem19->setText(QApplication::translate("QtWidgetsApplication1Class", "\346\226\260\345\273\272\350\241\214", nullptr));
        QTableWidgetItem *___qtablewidgetitem20 = chartTableWidget->verticalHeaderItem(12);
        ___qtablewidgetitem20->setText(QApplication::translate("QtWidgetsApplication1Class", "\346\226\260\345\273\272\350\241\214", nullptr));
        QTableWidgetItem *___qtablewidgetitem21 = chartTableWidget->verticalHeaderItem(13);
        ___qtablewidgetitem21->setText(QApplication::translate("QtWidgetsApplication1Class", "\346\226\260\345\273\272\350\241\214", nullptr));
        QTableWidgetItem *___qtablewidgetitem22 = chartTableWidget->verticalHeaderItem(14);
        ___qtablewidgetitem22->setText(QApplication::translate("QtWidgetsApplication1Class", "\346\226\260\345\273\272\350\241\214", nullptr));

        const bool __sortingEnabled = chartTableWidget->isSortingEnabled();
        chartTableWidget->setSortingEnabled(false);
        chartTableWidget->setSortingEnabled(__sortingEnabled);

        menumyGanttChart_1_0->setTitle(QApplication::translate("QtWidgetsApplication1Class", "myGanttChart 1.0", nullptr));
    } // retranslateUi

};

namespace Ui {
    class QtWidgetsApplication1Class: public Ui_QtWidgetsApplication1Class {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QTWIDGETSAPPLICATION1_H
