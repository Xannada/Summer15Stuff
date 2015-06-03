#ifndef BASEWINDOW_H
#define BASEWINDOW_H

#include <QMainWindow>
#include "board.h"


namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT
private:
    Ui::MainWindow *ui;
    Board theBoard;

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:
    void on_A1_clicked();
};

#endif // BASEWINDOW_H
