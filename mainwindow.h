#ifndef %ClassName:u%_H
#define %ClassName:u%_H

#include <QMainWindow>

namespace Ui {
class %ClassName%;
}

class %ClassName% : public QMainWindow
{
    Q_OBJECT

public:
    explicit %ClassName%(QWidget *parent = 0);
    ~%ClassName%();

private:
    Ui::%ClassName% *ui;
};

#endif // %ClassName:u%_H
