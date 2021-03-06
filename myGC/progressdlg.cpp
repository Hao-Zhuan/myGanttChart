#include "progressdlg.h"
#include <QFont>
#include <QLabel>
#include <QLineEdit>
#include <QComboBox>
#include <QProgressBar>
#include <QPushButton>
#include <QGridLayout>
#include <QProgressDialog>

ProgressDlg::ProgressDlg(QWidget* parent)
    : QDialog(parent)
{
    QFont font("ZYSong18030", 12);
    setFont(font);
    setWindowTitle(tr("Progress"));

    FileNum = new QLabel;
    FileNum->setText(tr("File Number: "));
    FileNumLineEdit = new QLineEdit;
    FileNumLineEdit->setText(tr("100000"));

    ProgressType = new QLabel;
    ProgressType->setText(tr("Dispaly Type: "));
    comboBox = new QComboBox;
    comboBox->addItem(tr("progressBar"));
    comboBox->addItem(tr("progressDialog"));

    progressBar = new QProgressBar;

    starBtn = new QPushButton;
    starBtn->setText(tr("Start"));

    mainLayout = new QGridLayout(this);
    mainLayout->addWidget(FileNum, 0, 0);
    mainLayout->addWidget(FileNumLineEdit, 0, 1);
    mainLayout->addWidget(ProgressType, 1, 0);
    mainLayout->addWidget(comboBox, 1, 1);
    mainLayout->addWidget(progressBar, 2, 0, 1, 2);
    mainLayout->addWidget(starBtn, 3, 1);
    mainLayout->setMargin(15);
    mainLayout->setSpacing(10);

    connect(starBtn, SIGNAL(clicked()), this, SLOT(startProgress()));
}

ProgressDlg::~ProgressDlg()
{
    if (FileNum) delete FileNum;
    if (FileNumLineEdit) delete FileNumLineEdit;
    if (ProgressType) delete ProgressType;
    if (comboBox) delete comboBox;
    if (progressBar) delete progressBar;
    if (starBtn) delete starBtn;
    if (mainLayout) delete mainLayout;
}

void ProgressDlg::startProgress()
{
    bool ok = false;
    int num = FileNumLineEdit->text().toInt(&ok);

    if (!ok)
        return;

    if (comboBox->currentIndex() == 0)
    {
        progressBar->setRange(0, num);
        for (int i = 1; i < num + 1; ++i)
        {
            progressBar->setValue(i);
        }
    }
    else if (comboBox->currentIndex() == 1)
    {
        QProgressDialog* progressDialog = new QProgressDialog(this);
        QFont font("ZYSong18030", 12);
        progressDialog->setFont(font);
        progressDialog->setWindowModality(Qt::WindowModal);
        progressDialog->setMinimumDuration(5);
        progressDialog->setWindowTitle(tr("Please Wait"));
        progressDialog->setLabelText(tr("Copying..."));
        progressDialog->setCancelButtonText(tr("Cancel"));
        progressDialog->setRange(0, num);
        for (int i = 0; i < num + 1; ++i)
        {
            progressDialog->setValue(i);
            if (progressDialog->wasCanceled())
            {
                delete progressDialog;
                return;
            }
        }

        delete progressDialog;
    }
}