// Program to save data and get data from file
#include <iostream>
using namespace std;

class Person
{
    char gender, name[30];
    short age;

public:
    void input()
    {
        cout << "Enter your name: ";
        cin >> name;
        while (1)
        {
            cout << "Enter your gender(m-male/f-female/t-trans):";
            cin >> gender;
            if (gender == 'm' || gender == 'f' || gender == 't')
                break;
            else
                cout << "Only choose from m/f/t";
        }
        cout << "Enter your age:";
        cin >> age;
    }
    void print()
    {
        cout << "Name: " << name << endl;
        cout << "Gender: " << gender << endl;
        cout << "age: " << age << endl;
    }
};
class Student : public Person
{
    int rollNo;

public:
    void input()
    {
        cout << "Enter your roll no: ";
        cin >> rollNo;
        Person::input();
    }
    void print()
    {
        cout << "Roll No: " << rollNo << endl;;
        Person ::print();
    }
};
class Undergrad : public Student
{
    char course[20];
    short duration;

public:
    void input()
    {
        Student ::input();
        cout << "Enter your course name: ";
        cin >> course;
        cout << "Enter the duration of the course: ";
        cin >> duration;
    }
    void print()
    {
        Student ::print();
        cout << "Course: " << course << endl;
        cout << "Duration: " << duration << endl;
    }
};
class Masters : public Student
{
    char specialisation[30];

public:
    void input()
    {
        Student::input();
        cout << "Enter your specialisation topic: ";
        cin >> specialisation;
    }
    void print()
    {
        Student::print();
        cout << "Specialisation: " << specialisation << endl;
    }
};
class Phd : public Student
{
    char researchTopic[30];

public:
    void input()
    {
        Student::input();
        cout << "Enter your Research topic: ";
        cin >> researchTopic;
    }
    void print()
    {
        Student::print();
        cout << "Research Topic: " << researchTopic << endl;
    }
};

class Employee : public Person
{
    int empId;
    char highestQualification[30];

public:
    void input()
    {
        Person::input();
        cout << "Enter your employee id: ";
        cin >> empId;
        cout << "Enter your Highest Qualification: ";
        cin >> highestQualification;
    }
    void print()
    {
        cout << "Emp ID: " << empId << endl;
        Person::print();
        cout << "Highest Qualification: " << highestQualification << endl;
    }
};
class Staff : public Employee
{
    char occupation[30];

public:
    void input()
    {
        Employee::input();
        cout << "Enter your Occupation: ";
        cin >> occupation;
    }
    void print()
    {
        Employee::print();
        cout << "Occupation: " << occupation << endl;
    }
};
class Professional : public Staff
{
    float salary;

public:
    void input()
    {
        Staff::input();
        cout << "Enter your Salary: ";
        cin >> salary;
    }
    void print()
    {
        Staff::print();
        cout << "Salary: " << salary << endl;
    }
};
class Hourly : public Staff
{
    float perHour;

public:
    void input()
    {
        Staff::input();
        cout << "Enter your wages per hour: ";
        cin >> perHour;
    }
    void print()
    {
        Staff::print();
        cout << "Wages per hour: " << perHour << endl;
    }
};
class Faculty : public Employee
{
    char subject[30];

public:
    void input()
    {
        Employee::input();
        cout << "Enter your teaching subject: ";
        cin >> subject;
    }
    void print()
    {
        Employee::print();
        cout << "Subject: " << subject << endl;
    }
};
class Teaching : public Faculty
{
    float salary;

public:
    void input()
    {
        Faculty::input();
        cout << "Enter your salary: ";
        cin >> salary;
    }
    void print()
    {
        Faculty::print();
        cout << "Salary: " << salary << endl;
    }
};
class TenureTrack : public Faculty
{
    int tenure, lastYearEvalScore;

public:
    void input()
    {
        Faculty::input();
        cout << "Enter your tenure period: ";
        cin >> tenure;
        cout << "Enter your last year Evaluation Score: ";
        cin >> lastYearEvalScore;
    }
    void print()
    {
        Faculty::print();
        cout << "Tenure: " << tenure << endl;
        cout << "Last year score: " << lastYearEvalScore << endl;
    }
};

int main()
{
    short choice;
    while (1)
    {
        cout << "------------------" << endl;
        cout << "1. Student" << endl;
        cout << "2. Employee" << endl;
        cin >> choice;
        if (choice == 1)
        {
            cout << "**********Student*********" << endl;
            cout << "1. Undergrad" << endl;
            cout << "2. Master " << endl;
            cout << "3. PhD" << endl;
            cin >> choice;
            switch (choice)
            {
            case 1:
                cout << "++++++UnderGrad+++++" << endl;
                Undergrad obj1;
                obj1.input();
                obj1.print();
                break;
            case 2:
                cout << "++++++Master+++++" << endl;
                Masters obj2;
                obj2.input();
                obj2.print();
                break;
            case 3:
                cout << "++++++PhD+++++" << endl;
                Phd obj3;
                obj3.input();
                obj3.print();
                break;
            default:
                cout << "Enter valid choice!" << endl;
            }
        }
        else if (choice == 2)
        {
            cout << "**********Employee*********" << endl;
            cout << "1. Staff" << endl;
            cout << "2. Faculty" << endl;
            cout << "Enter your choice: " << endl;
            cin >> choice;

            if (choice == 1)
            {
                cout << "**********Staff*********" << endl;
                cout << "1. Professional" << endl;
                cout << "2. Hourly" << endl;
                cout << "Enter your choice: ";
                cin >> choice;
                switch (choice)
                {
                case 1:
                    cout << "++++++Professional+++++" << endl;
                    Professional obj1;
                    obj1.input();
                    obj1.print();
                    break;
                case 2:
                    cout << "++++++Hourly+++++" << endl;
                    Hourly obj2;
                    obj2.input();
                    obj2.print();
                    break;
                default:
                    cout << "Enter valid choice!" << endl;
                }
            }
            else if (choice == 2)
            {
                cout << "**********Faculty*********" << endl;
                cout << "1. Teaching" << endl;
                cout << "2. Tenure Track" << endl;
                cout << "Enter your choice: ";
                cin >> choice;
                switch(choice)
                {
                    case 1: 
                        cout << "++++++Teaching+++++" << endl;
                        Teaching obj1;
                        obj1.input();
                        obj1.print();
                        break;
                    case 2: 
                        cout << "++++++Tenure Track+++++" << endl;
                        TenureTrack obj2;
                        obj2.input();
                        obj2.print();
                        break;             
                    default:
                        cout << "Enter valid choice!" << endl;
                }
            }
            else
                cout << "Enter Valid choice!" << endl;
        }
        else
            cout << "Enter Valid choice" << endl;
    }

    return 0;
}