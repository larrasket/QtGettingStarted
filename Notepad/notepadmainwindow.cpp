#include "notepadmainwindow.h"

#include "./ui_notepadmainwindow.h"

NotepadMainWindow::NotepadMainWindow(QWidget *parent)
        : QMainWindow(parent), ui(new Ui::NotepadMainWindow) {
    ui->setupUi(this);
    defaultSize = 13;
    filePath = nullptr;
    auto qFont = ui->textEdit->font();
    qFont.setPointSize(defaultSize);
    ui->textEdit->setFont(qFont);
    ui->spinBox->setValue(defaultSize);
    setCentralWidget(ui->verticalLayoutWidget);
}

NotepadMainWindow::~NotepadMainWindow() {
    delete ui;
}


void NotepadMainWindow::on_spinBox_valueChanged(int arg1) {
    auto qFont = ui->textEdit->font();
    qFont.setPointSize(arg1);
    ui->textEdit->setFont(qFont);
}

void NotepadMainWindow::on_saveButton_clicked() {

    if (filePath == nullptr) {
        auto k = QFileDialog::getSaveFileName(this, "Entre file name to be saved", QDir::currentPath(),
                                              "files TXT (*.txt)") + ".txt";
        setFilePath(k);
    }
    QFile file(getFilePath());
    if (!file.open(QIODevice::WriteOnly | QFile::Text)) {
        QMessageBox::warning(this, "Warning", "Couldn't open file : " + file.errorString());
        return;
    }
    setWindowTitle(getFilePath());
    QTextStream out(&file);
    out << ui->textEdit->toPlainText();
    file.close();
}

void NotepadMainWindow::on_OpenButton_clicked() {
    setFilePath(QFileDialog::getOpenFileName(this, "Entre file name to be opened", QDir::currentPath(),
                                             "files TXT (*.txt)"));
    QFile file(filePath);
    if (!file.open(QIODevice::ReadOnly | QFile::Text)) {
        QMessageBox::warning(this, "Warning", "Couldn't open file : " + file.errorString());
        return;
    }
    QString gottenText = ((QTextStream) (&file)).readAll();
    ui->textEdit->setText(gottenText);
    file.close();
}

const QString &NotepadMainWindow::getFilePath() const {
    return filePath;
}

void NotepadMainWindow::setFilePath(const QString &filePath) {
    NotepadMainWindow::filePath = filePath;
    this->setWindowTitle(filePath);
}

void NotepadMainWindow::on_saveAndQuite_clicked() {
    on_saveButton_clicked();
    QApplication::quit();
}


