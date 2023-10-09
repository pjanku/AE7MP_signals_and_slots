#ifndef STUDENT_H
#define STUDENT_H

#include <QObject>

class Student : public QObject
{
    Q_OBJECT
public:
    explicit Student(QString name, QObject *parent = nullptr);
    void riseMyHand();

public slots:
    void techerNoticed();
signals:
    void riseHand(QString name);
protected:
    QString name;
};

#endif // STUDENT_H
