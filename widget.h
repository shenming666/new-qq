#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include<login.h>
namespace Ui {
class Widget;
}

class Widget : public QWidget
{
    Q_OBJECT

public:
    explicit Widget(QWidget *parent = 0);
    ~Widget();

private:
    Ui::Widget *ui;
    login s;
};

#endif // WIDGET_H
