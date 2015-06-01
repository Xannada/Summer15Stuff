#ifndef BASEWINDOW_H
#define BASEWINDOW_H

#include <QMainWindow>
#include "piece.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private:
    Ui::MainWindow *ui;
};

#endif // BASEWINDOW_H
