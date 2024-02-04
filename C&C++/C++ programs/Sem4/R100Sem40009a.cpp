// Eligibility
#include <iostream>
using namespace std;
#define ART_FEES 30000
#define ENGINEER_FEES 55000
#define MEDICAL_FEES 100000
#define MIN_AGE 18
#define MAX_AGE 25
#define ART_MARKS_10 60
#define MECH_MARKS_10 70
#define IT_MARKS_10 80
#define CSE_MARKS_10 82
#define MED_MARKS_10 90
#define ART_MARKS_12 65
#define MECH_MARKS_12 70
#define IT_MARKS_12 70
#define CSE_MARKS_12 70
#define MED_MARKS_12 90

class Student
{
protected:
    char name[30];
    int age;
    float marksIn10th, marksIn12th;

public:
    void input()
    {
        cout << "Enter your name: " << endl;
        cin >> name;
        cout << "Enter your age: " << endl;
        cin >> age;
        cout << "Enter your marks in 10th: " << endl;
        cin >> marksIn10th;
        cout << "Enter your marks in 12th: " << endl;
        cin >> marksIn12th;
    }
};
class Art : public Student
{
    char ableToPayFees;
public:
    void check()
    {
        if(age >= MIN_AGE && age <= MAX_AGE && marksIn10th >= ART_MARKS_10 && marksin12th >= ART_MARKS_12)
        {
            cout << "The Fees to choose Art is: " << ART_FEES << endl;
            cout << "Can you this fees(y/n):";
            cin >> ableToPayFees;
            if(ableToPayFees == 'y')
                cout << "You are eligible to choose Art"<< endl;
            else 
                cout << "You are not eligible to choose Art" << endl;
        }

    }
};
class Engineering : public Student
{
    char ableToPayFees;
    public:
        void ableToPayFees()
        {
            cout << "The fees is " << ENGINEER_FEES << endl;
            cout << "Will you be able to pay this fees(y/n): ";
            cin >> ableToPayFees;
        }
};
class Medical : public Student
{
char ableToPayFees;
public:
    void check()
    {
        if(age >= MIN_AGE && age <= MAX_AGE && marksIn10th >= MED_MARKS_10 && marksin12th >= MED_MARKS_12)
        {
            cout << "The Fees to choose Medical is: " << MED_FEES << endl;
            cout << "Can you this fees(y/n):";
            cin >> ableToPayFees;
            if(ableToPayFees == 'y')
                cout << "You are eligible to choose Medical"<< endl;
            else 
                cout << "You are not eligible to choose Medical" << endl;
        }

    }
};
class Mechanical : public Engineering
{
protected:
    void check()
    {
        if(age >= MIN_AGE && age <= MAX_AGE && marksIn10th >= MECH_MARKS_10 && marksin12th >= MECH_MARKS_12)
        {
            ableToPayFees();
            if(ableToPayFees == 'y')
                cout << "You are eligible to choose Mechanical"<< endl;
            else 
                cout << "You are not eligible to choose Mechanical" << endl;
        }
    }
};
class IT : public Engineering
{
public:
    void check()
    {
        if(age >= MIN_AGE && age <= MAX_AGE && marksIn10th >= IT_MARKS_10 && marksin12th >= IT_MARKS_12)
        {
            ableToPayFees();
            if(ableToPayFees == 'y')
                cout << "You are eligible to choose IT"<< endl;
            else 
                cout << "You are not eligible to choose IT" << endl;
        }

    }
};
class CSE : public Engineering
{
public:
    void check()
    {
        if(age >= MIN_AGE && age <= MAX_AGE && marksIn10th >= CSE_MARKS_10 && marksin12th >= CSE_MARKS_12)
        {
            ableToPayFees();
            if(ableToPayFees == 'y')
                cout << "You are eligible to choose CSE"<< endl;
            else 
                cout << "You are not eligible to choose CSE" << endl;
        }

    }
};
int main()
{
    int choice;
    while(1)
    {
        cout << "*****************" << endl;
        cout << "1. Art" << endl;
        cout << "2. Engineering" << endl;
        cout << "3. Medical" << endl; 
        cout << "Enter your option:";
        cin >> choice;
        switch(choice)
        {
            case 1: 
                Art artObj;
                artObj.input();
                artObj.check();
                break;
            case 2:
                cout << "1. Mechanical" << endl;
                cout << "2. IT" << endl;
                cout << "1. CSE" << endl;
                cout << "Enter your choice:";
                cin >> choice;
                switch(choice)
                {
                    case 1:
                        Mechanical mechObj;
                        mechObj.input();
                        mechObj.check();
                        break;
                    case 2:
                        IT itObj;
                        itObj.input();
                        itObj.check();
                        break;
                    case 3:
                        CSE cseObj;
                        cseObj.input();
                        cseObj.check();
                        break;
                    default:
                        cout << "Enter valid choice" << endl;
                }
                break;
            case 3: 
                Medical medObj;
                medObj.input();
                medObj.check();
                break;
            default:
                cout << "Enter Valid choice" << endl;              
        }

    }
    return 0;
}