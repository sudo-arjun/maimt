/*
8.	An educational institution wishes to maintain a database of its employees. The database is divided into a number of classes Specify all the classes and define functions to create the database and retrieve individual information as and when required.
Class Staff having instance variables – code and name. It has three child classes – teacher, typist, and officer. 
The teacher class has instance variables- subject and publication. 
The typist class has an instance variable- speed. The officer class has an instance variable- grade. The typist class has two child classes- regular and casual. 
The regular class have instance variable- salary and casual class have instance variable- daily wages. Design main() method for implementation.
*/

#include <iostream>
#include <string.h>
using namespace std;

class Staff
{
        int code;
        char name[30];
    public:
        void insert_db(int id, char *n)
        {
            strcpy(name,n);
            code = id;
        }
        void retrieve_db()
        {
            cout << "Code: " << code << endl;
            cout << "Name: " << name << endl;
        }
};
class Teacher : public Staff
{
    char subject[30], publication[40];
    public:
        void insert_db(int id, char *n, char *s, char *p)
        {
            Staff::insert_db(id,n);
            strcpy(subject,s);
            strcpy(publication,p);
        }
        void retrieve_db()
        {
            Staff::retrieve_db();
            cout << "Subject: " << subject << endl;
            cout << "Publication: " << publication << endl;
        }
};
class Typist : public Staff
{
    int speed;
    public:
        void insert_db(int id, char *n, int s)
        {
            Staff::insert_db(id,n);
            speed = s;
        }
        void retrieve_db()
        {
            Staff::retrieve_db();
            cout << "Speed: " << speed << "wpm" << endl;
        }
};
class Officer : public Staff
{
    char grade;
    public:
         void insert_db(int id, char *n, char g)
        {
            Staff::insert_db(id,n);
            grade = g;    
        }
        void retrieve_db()
        {
            Staff::retrieve_db();
            cout << "Grade: " << grade << endl;
        }
};
class casual : public Typist
{
    float daily_wages;
    public:
         void insert_db(int id, char *n, int speed, float dw)
        {
            Typist::insert_db(id,n,speed);
            daily_wages = dw;    
        }
        void retrieve_db()
        {
            Typist::retrieve_db();
            cout << "daily Wages: " << daily_wages << endl;
        }
};
class regular : public Typist
{
    float salary;
    public:
         void insert_db(int id, char *n, int speed, float sal)
        {
            Typist::insert_db(id,n,speed);
            salary = sal;
        }
        void retrieve_db()
        {
            Typist::retrieve_db();
            cout << "Salary: " << salary << endl;
        }
};

int main()
{
    //Way 1 : Declare all the class objects and then use accordingly
    Teacher teachObj;
    Officer officerObj;
    casual casualTypistObj;
    regular regularTypistObj;
    int choice;
    while(1)
    {
        cout << "**********************************"<< endl;
        cout << "Choose your Occupation:" << endl;
        cout << "1. Teacher" << endl;
        cout << "2. Oficer" << endl;
        cout << "3. Typist" << endl;
        cout << "4. To Exit the Program" << endl;
        cout << "Enter your Choice:";
        cin >> choice;

        switch(choice)
        {
            case 1 : 
                teachObj.insert_db(1,"Arjun","Computer","Tata Mc graw hill");
                teachObj.retrieve_db();
                break;
            case 2 :
                officerObj.insert_db(2,"Arjun2",'A');
                officerObj.retrieve_db();
                break;
            case 3 :
                cout << "Choose the type of typist:" << endl;
                cout << "1. Regular" << endl;
                cout << "2. Casual";
                cin >> choice;
                if(choice == 1)
                {
                    regularTypistObj.insert_db(3, "Arjun3", 60, 15000);
                    regularTypistObj.retrieve_db();
                }
                else if(choice == 2)
                {
                    casualTypistObj.insert_db(4, "Arjun4", 40, 5000);
                    casualTypistObj.retrieve_db();
                }
                else
                {
                    cout << "Enter Valid Choice";
                }
                break;
            case 4 : 
                return 0;
            default :
                cout << "Enter Valid Choice" << endl;
        }
    }
    return 0;
}