#pragma once
#include <QDialog>

class QLabel;
class QLineEdit;
class QComboBox;
class QProgressBar;
class QPushButton;
class QGridLayout;

class ProgressDlg : public QDialog
{
    Q_OBJECT

public:
    ProgressDlg(QWidget* parent = 0);
    ~ProgressDlg();

private slots:
    void startProgress();

private:
    QLabel* FileNum;
    QLineEdit* FileNumLineEdit;
    QLabel* ProgressType;
    QComboBox* comboBox;
    QProgressBar* progressBar;
    QPushButton* starBtn;
    QGridLayout* mainLayout;
};