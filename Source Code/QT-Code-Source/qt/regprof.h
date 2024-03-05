#ifndef REGPROF_H
#define REGPROF_H

#include <QDialog>

namespace Ui {
class regprof;
}

class regprof : public QDialog
{
    Q_OBJECT

public:
    explicit regprof(QWidget *parent = nullptr);
    ~regprof();

private slots:
    void on_regprof_2_clicked();

private:
    Ui::regprof *ui;
};

#endif // REGPROF_H
