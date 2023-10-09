#include "teacher.h"
#include <iostream>

Teacher::Teacher(QObject *parent)
    : QObject{parent}
{

}

void Teacher::goToTheClass()
{
    emit techerIncome();
}

void Teacher::noticeStudent(QString studentName)
{
    std::cout << "Teacher noticed the student " << studentName.toStdString() << std::endl;
}
