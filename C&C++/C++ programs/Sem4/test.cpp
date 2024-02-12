/*
ClassG -> Sales, Technical, HR, Operation
Technical -> Developer, Tester

logic: a candidate will choose a team and will check for its elgibility
*/
#include <iostream>
#include <string.h>
using namespace std;

char* strlwr(char *s)
{
   for(int i=0; i<strlen(s); i++)
   s[i] = tolower(s[i]);
   return s;
}
class ClassG
{
protected:
    int noOfVacancy;

public:
    ClassG(int n)
    {
        noOfVacancy = n;
    }
};
class Sales : ClassG
{
    int language_level;
    float class12thMarks;
    char graduation[20];

public:
    Sales(int n) : ClassG(n) {}
    void read()
    {
        cout << "Enter your language_level(1-10): ";
        cin >> language_level;
        cout << "Enter your class 12th marks: ";
        cin >> class12thMarks;
        cout << "Enter your graduation degree(eg. BBA)";
        cin >> graduation;
    }
    int elgibleOrNot()
    {
        if (noOfVacancy > 0)
        {
            if (language_level >= 6 && class12thMarks >= 70 && (strcmp(strlwr(graduation), "bba") == 0 || strcmp(strlwr(graduation), "mba")))
            {
                cout << "You are eligible to apply for this team" << endl;
                return 1;
            }

            else
                cout << "You are not eligible for this team" << endl;
        }
        else
            cout << "Sorry, currently no vacancy" << endl;
            
            return 0;
    }
};
class Technical : ClassG
{
protected:
    char skills[100];

public:
    Technical(int n) : ClassG(n) {}
    void read()
    {
        cout << "Enter your skills(seperated by comma, no whitespace): ";
        cin >> skills;
        strcpy(skills,strlwr(skills));
    }
    int elgibleOrNot()
    {
        if (noOfVacancy > 0)
        {
            if (strstr(skills, "html") != NULL || strstr(skills, "css") != NULL || strstr(skills, "c") != NULL || strstr(skills, "javascript") != NULL)
            {
                cout << "You are eligible to apply for Technical team" << endl;
                return 1;
            }
            else
                cout << "You are not eligible for this team" << endl;
        }
        else
            cout << "Sorry, currently no vacancy" << endl;
        return 0;
    }
};
class HR : ClassG
{
    int language_level, experience;
    float class12thMarks;
    char graduation[20];

public:
    HR(int n) : ClassG(n) {}
    void read()
    {
        cout << "Enter your language_level(1-10): ";
        cin >> language_level;
        cout << "Enter your class 12th marks: ";
        cin >> class12thMarks;
        cout << "Enter your graduation degree(eg. BBA)";
        cin >> graduation;
        cout << "Enter your no. of years experience:";
        cin >> experience;
    }
    int elgibleOrNot()
    {
        if (noOfVacancy > 0)
        {
            if (language_level > 6 && class12thMarks >= 75 && (strcmp(strlwr(graduation), "bca") == 0 || strcmp(strlwr(graduation), "bba")) && experience >= 5)
            {
                cout << "You are eligible to apply for this team" << endl;
                return 1;
            }
            else
                cout << "You are not eligible for this team" << endl;
        }
        else
            cout << "Sorry, currently no vacancy" << endl;
        return 0;
    }
};
class Operation : ClassG
{
protected:
    char skills[100];
    int communicationLevel;

public:
    Operation(int n) : ClassG(n) {}
    void read()
    {
        cout << "Enter your skills(seperated by comma, no whitespace): ";
        cin >> skills;
        cout << "What is your communication level(1-10):";
        cin >> communicationLevel;
        strcpy(skills,strlwr(skills));
    }
    int elgibleOrNot()
    {
        if (noOfVacancy > 0)
        {
            if (strstr(skills, "git") != NULL || strstr(skills, "devops") != NULL || strstr(skills, "python") != NULL || strstr(skills, "sql") != NULL && communicationLevel > 6)
            {
                cout << "You are eligible to apply for this team" << endl;
                return 1;
            }
            else
                cout << "You are not eligible for this team" << endl;
        }
        else
            cout << "Sorry, currently no vacancy" << endl;
        return 0;
    }
};
class Developer : public Technical
{
public:
    Developer(int n) : Technical(n){}
    void elgibleOrNot()
    {
        if (Technical::elgibleOrNot() == 1)
        {
            if(strstr(skills, "c") != NULL && strstr(skills, "javascript") != NULL && strstr(skills,"git"))
            cout << "You are elgible for developer technical team" << endl;
            else 
            cout << "But not for developer role" << endl;
        }
        else 
        cout << "Your are not elgible for developer team" << endl;
    }
};
class Tester : public Technical
{
    public:
    Tester(int n) : Technical(n){}
    void elgibleOrNot()
    {
        if (Technical::elgibleOrNot() == 1)
        {
            if(strstr(skills, "python") != NULL || strstr(skills, "javascript") != NULL)
            cout << "You are elgible for developer technical team" << endl;
            else 
            cout << "But not for developer role" << endl;
        }
        else 
        cout << "Your are not elgible for developer team" << endl;
    }
};

int main()
{
    Sales sObj(5);
    Technical tObj(4);
    Developer dObj(2);
    Tester testerObj(2);
    Operation oObj(3);
    HR hObj(5);
    int choice;
    while(1)
    {
        cout << "1. Sales\n2. Technical\n3. HR\n4. Operation" << endl;
        cout << "Enter your choice: ";
        cin >> choice;
        switch(choice)
        {
            case 1: 
                sObj.read();
                sObj.elgibleOrNot();
                break;
            case 2:
                cout << "1. For Technical general team" << endl;
                cout << "2. For Technical developer team" << endl;
                cout << "3. For Technical tester team" << endl;
                cout << "Enter your choice: ";
                cin >> choice;
                switch(choice)
                {
                    case 1:
                        tObj.read();
                        tObj.elgibleOrNot();
                        break;
                    case 2:
                        dObj.read();
                        dObj.elgibleOrNot();
                        break;
                    case 3:
                        testerObj.read();
                        testerObj.elgibleOrNot();
                        break;
                    default:
                        cout << "enter valid choice" << endl;
                }
                break;
            case 3:
                hObj.read();
                hObj.elgibleOrNot();
                break;
            case 4:
                oObj.read();
                oObj.elgibleOrNot();
                break;
            default:
                cout << "enter valid choice" << endl;
        }
    }
    return 0;
}