#include "%ClassName:l%.%CppHeaderSuffix%"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv, QApplication::GuiServer);
    %ClassName% w;
    w.showFullScreen();

    return a.exec();
}
