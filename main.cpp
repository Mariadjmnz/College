/*
* Name: Maria Jimenez
* Course: CS 250
* Description:
* Program assignment #02
*/

#include <iostream>
#include <iomanip>
using namespace std;

class Person
{
    string name;

public:
    void person_info()
    {
        cout<< "Enter Person name: ";
        cin>>name;
    }
};

class Student: private Person
{
   string courses[10];
   int taking = 0;

   public:
       void student_info()
       {
           person_info();
           cout<< "How many courses is the student taking? ";
           cin>> taking;

           do
           {
               if(taking >= 10)
               {
                   cout<<"ERROR, STUDENT CAN NOT HAVE MORE THAN 10 COURSES." << endl <<
                        "How many courses is the student taking? ";
                        cin>> taking;
               }

           }while(taking >= 10);

           cout << "Insert the name of the student courses: ";
                for (int i=0; i<taking; i++)
                    cin >> courses[i];
       }

       void student_display()
       {
           cout<< " \n The student is taking "<< taking << " courses : " << endl;
                 for ( int i=0; i< taking;i++)
                 cout << courses[i] << ", ";
       }
};

class Professor: private Person
{
    string office;

public:
    void professor_info()
    {
        person_info();

        cout << "Insert the professor's office: ";
        cin >>office;
    }
};

int main()
{


    string option1 = "Student";
    string option2 = "Professor";
    int opt;

    cout << "Choose between (1)"<<option1<< " or (2)"<<option2<< endl;
    cin >> opt;
    if (opt == 1)
    {
        Student student_info;
        student_info.student_info();
        student_info.student_display();
    }
    else {
        Professor professor_info;
        professor_info.professor_info();
    }


    return 0;
}
