#include "student.h"

#include <iostream>

Student::Student(QString name, QObject *parent)
    :name(name), QObject{parent}
{

}

void Student::riseMyHand()
{
    emit riseHand(name);
}

void Student::techerNoticed()
{
    std::cout << "Hello Mr teacher!" << std::endl;
}
