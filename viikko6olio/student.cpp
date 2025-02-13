#include "student.h"

Student::Student(string nimi , int luku) {
    Name = nimi;
    Age = luku;
}

void Student::setAge(int luku)
{
    Age = luku;
}

void Student::setName(string nimi)
{
    Name = nimi;
}

string Student::getName()
{
    return Name;
}

int Student::getAge()
{
    return Age;
}

void Student::printStudentInfo()
{
    cout<<"Students name is "<<Name<<endl;
    cout<<"Students age is "<<Age<<endl;
}
