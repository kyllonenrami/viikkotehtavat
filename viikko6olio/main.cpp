#include "student.h"
#include <vector>
#include <algorithm>

int main ()
{
    int selection =0;
    vector<Student>studentList;
    string name;
    int ika;

    do
    {
        cout<<endl;
        cout<<"Select"<<endl;
        cout<<"Add students = 0"<<endl;
        cout<<"Print all students = 1"<<endl;
        cout<<"Sort and print students according to Name = 2"<<endl;
        cout<<"Sort and print students according to Age = 3"<<endl;
        cout<<"Find and print student = 4"<<endl;
        cin>>selection;

        switch(selection)
        {
        case 0:
        {
            string nimi;
            cout<<"Student name ?"<<endl;
            // Kysy käyttäjältä uuden opiskelijan nimi ja ikä
            cin>>name;
            cout<<"Student age ?"<<endl;
            cin>>ika;
            // Lisää uusi student StudentList vektoriin.
            Student newStudent(name, ika);
            studentList.emplace_back(newStudent);
            break;
        }
        case 1:
            // Tulosta StudentList vektorin kaikkien opiskelijoiden nimet.
            for(auto& student:studentList)
            {
                student.printStudentInfo();
            }
            break;

        case 2:
            sort(studentList.begin(),studentList.end(), [](Student& a, Student& b){
                return a.getName() < b.getName();
            });

            for(auto& student:studentList)
            {
                student.printStudentInfo();
            }
            // Järjestä StudentList vektorin Student oliot nimen mukaan
            // algoritmikirjaston sort funktion avulla
            // ja tulosta printStudentInfo() funktion avulla järjestetyt
            // opiskelijat
            break;

        case 3:
            sort(studentList.begin(),studentList.end(), [](Student& a, Student& b){
                return a.getAge() < b.getAge();
            });

            for(auto& student:studentList)
            {
                student.printStudentInfo();
            }
            // Järjestä StudentList vektorin Student oliot iän mukaan
            // algoritmikirjaston sort funktion avulla
            // ja tulosta printStudentInfo() funktion avulla järjestetyt opiskelijat

            break;
        case 4:
        {
            string nimi;
            cout<<"Student to be found name = ?"<<endl;
            cin>>nimi;

            auto it = find_if(studentList.begin(),studentList.end(),[&nimi](Student& student){
                return student.getName() == nimi;
            });

            if (it != studentList.end())
            {
                cout<<"Student found:"<<endl<<"Name: "<<it->getName()<<endl<<"Age: "<<it->getAge()<<endl;
            }
            else
            {
                cout<<"Student not found"<<endl;
            }
            // Kysy käyttäjältä opiskelijan nimi
            // Etsi studentListan opiskelijoista algoritmikirjaston
            // find_if funktion avulla löytyykö käyttäjän antamaa nimeä
            // listalta. Jos löytyy, niin tulosta opiskelijan tiedot.
            break;
        }

        default:
            cout<< "Wrong selection, stopping..."<<endl;
            break;
        }
    }while(selection < 5);

    return 0;
}
