#include "notepadmainwindow.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    NotepadMainWindow w;
    w.show();
    return QApplication::exec();
}
