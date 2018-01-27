#ifndef CLOCKWINDOW_H
#define CLOCKWINDOW_H

#include <QLCDNumber>

namespace Ui {
class ClockWindow;
}

class ClockWindow : public QLCDNumber {
  Q_OBJECT

public:
  ClockWindow(QWidget *parent = 0);
  ~ClockWindow();

private slots:
  void showTime();
};

#endif // CLOCKWINDOW_H
