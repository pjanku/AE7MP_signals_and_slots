#ifndef TEACHER_H
#define TEACHER_H

#include <QObject>

class Teacher : public QObject
{
    Q_OBJECT
public:
    explicit Teacher(QObject *parent = nullptr);
    void goToTheClass();

public slots:
    void noticeStudent(QString studentName);

signals:
    void techerIncome();
};

#endif // TEACHER_H
