#include <QApplication>
#include <QtGui>
#include <QLabel>


int main(int argc, char *argv[])

{

    QApplication app(argc , argv);

    QLabel *label = new QLabel("hello word");
    label->show()

    return app.exec();
}
