#include "QtWidgetsApplication1.h"
#include <QtWidgets/QApplication>
#include "progressdlg.h"
class event{};
int main(int argc, char *argv[])
{


    ProgressDlg timeBar;
    QApplication a(argc, argv);
    QtWidgetsApplication1 w;
    timeBar.show();
    w.show();
    return a.exec();
}
