#include "mainwindow.h"
#include <QFile>
#include <QApplication>
#include <QString>
#include <QDebug>
#include <QTextStream>

void Write(QString Filename)
{
    QFile mFile(Filename);
    if (!mFile.open(QFile::WriteOnly | QFile::Text))
    {
        qDebug() << "dosya yazilamadi";
        return;
    }


    QTextStream out (&mFile);
    out << "Hello";
    mFile.flush();
    mFile.close();

}

void Read(QString Filename)
{
    QFile mFile(Filename);
    if (!mFile.open(QFile::ReadOnly | QFile::Text))
    {
        qDebug() << "dosya okunamadı";
        return;
    }


    QTextStream in (&mFile);
    QString mText = in.readAll();
    qDebug() << mText;
    mFile.flush();
    mFile.close();



}


int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;

    QString mFilename = "C:/Users/OTTONOM/Desktop/qt examples/data.txt";
    Write(mFilename);
    Read(mFilename);


    w.show();
    return a.exec();
}
