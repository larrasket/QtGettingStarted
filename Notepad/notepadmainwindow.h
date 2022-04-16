#ifndef NOTEPADMAINWINDOW_H
#define NOTEPADMAINWINDOW_H

#include <QMainWindow>
#include <QFileDialog>
#include <QMessageBox>

QT_BEGIN_NAMESPACE
namespace Ui { class NotepadMainWindow; }
QT_END_NAMESPACE

class NotepadMainWindow : public QMainWindow {
Q_OBJECT

public:
    NotepadMainWindow(QWidget *parent = nullptr);

    ~NotepadMainWindow();

    const QString &getFilePath() const;

    void setFilePath(const QString &filePath);

    int defaultSize;

private slots:

    void on_spinBox_valueChanged(int arg1);

    void on_saveAndQuite_clicked();

    void on_saveButton_clicked();

    void on_OpenButton_clicked();

private:

    void setWindowName();

    QString filePath;

private:
    Ui::NotepadMainWindow *ui;
};

#endif // NOTEPADMAINWINDOW_H
