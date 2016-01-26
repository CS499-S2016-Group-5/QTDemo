#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:
    void on_triangleButton_clicked();

    void on_circleButton_clicked();

    void on_clearButton_clicked();

    void on_squareButton_clicked();

    void on_squareButton_2_clicked();

    void on_triangleButton_2_clicked();

    void on_circleButton_2_clicked();

    void on_clearButton_2_clicked();

private:
    Ui::MainWindow *ui;
    QPixmap *m_pPixmap;
    void setDisplayPixmap(const char* q, int x, int y);
};

#endif // MAINWINDOW_H
