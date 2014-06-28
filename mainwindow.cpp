#include "%ClassName:l%.%CppHeaderSuffix%"
#include "ui_%ClassName:l%.%CppHeaderSuffix%"

%ClassName%::%ClassName%(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::%ClassName%)
{
    ui->setupUi(this);
}

%ClassName%::~%ClassName%()
{
    delete ui;
}
