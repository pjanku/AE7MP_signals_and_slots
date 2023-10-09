#include <QCoreApplication>
#include <iostream>
#include "teacher.h"
#include "student.h"


void swithOnTheLights(){
    std::cout << "SYSTEM: lights ON" << std::endl;
}


int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    Teacher bestTeacherEver;
    Student s1("John");
    Student s2("Tayo");
    Student s3("Sara");

    QObject::connect(&bestTeacherEver, &Teacher::techerIncome, swithOnTheLights);
    QObject::connect(&bestTeacherEver, &Teacher::techerIncome, &s1, &Student::techerNoticed);
    QObject::connect(&bestTeacherEver, &Teacher::techerIncome, &s2, &Student::techerNoticed);
    QObject::connect(&bestTeacherEver, &Teacher::techerIncome, &s3, &Student::techerNoticed);

    QObject::connect(&s1, &Student::riseHand, &bestTeacherEver, &Teacher::noticeStudent);
    QObject::connect(&s2, &Student::riseHand, &bestTeacherEver, &Teacher::noticeStudent);
    QObject::connect(&s3, &Student::riseHand, &bestTeacherEver, &Teacher::noticeStudent);


    bestTeacherEver.goToTheClass();
    s1.riseMyHand();


    int secondNumber = 124;
    QString str = QString("Hello world %3 %2 %1")
                      .arg(10)
                      .arg("words")
                      .arg(secondNumber);

    std::cout << str.toStdString() << std::endl;

    return a.exec();
}
