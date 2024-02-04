#include<iostream>
#include<stdlib.h>
#include<string.h>
using namespace std;
class student //parent class
{
	protected:
		char stream[20];
		float percentage;
	public:
		void input()
		{
			cout<<"enter student's stream=";
			cin>>stream;
			cout<<"enter student percentage in 12 th class=";
			cin>>percentage;
		}
		void display()
		{
			cout<<"stream=%s"<<stream<<endl;
			cout<<"percentage=%d"<<percentage<<endl;
		}
};
class arts:public student
{
	protected:
	   float semester_fees;
	    char branch[20];
	public:
		void input()
		{
			cout<<"enter fees=";
			cin>>semester_fees;
			cout<<"enter branch in which you want to take admission(b.a/bsc)=";
			cin>>branch;
		}
		void admission()
		{
			if(strcmp(branch,"b.a")||strcmp(branch,"B.A"))
			{
			if(strcmp(branch,"b.a")&&semester_fees==10000&&percentage>60||strcmp(branch,"B.A")&&semester_fees==10000&&percentage>60)
			{
				cout<<"Student is successfully admitted in the college in B.A\n";
			}
			else{
				cout<<"above conditions are not satisfied so student doesn't admitted in The college\n";
			}
		   }
		   else
		   {
		   	if(strcmp(branch,"bsc")&&semester_fees==10000&&percentage>60||strcmp(branch,"BSC")&&semester_fees==10000&&percentage>60)
			{
				cout<<"Student is successfully admitted in the college in BSC branch\n";
			}
			else{
				cout<<"above conditions are not satisfied so student doesn't admitted in The college\n";
			}
		   }
		}
};
class engineering:public student
{
   	protected:
	   float semester_fees;
	    char branch[20];
	public:
		void input()
		{
			cout<<"enter fees=";
			cin>>semester_fees;
			cout<<"enter branch in which you want to take admission(Mechanical/IT/CSE)=";
			cin>>branch;
		}	
		void admission()
		{
			if(strcmp(branch,"Mechanical")||strcmp(branch,"mechanical"))
			{
			if(strcmp(branch,"Mechanical")&&semester_fees==50000&&percentage>70||strcmp(branch,"mechanical")&&semester_fees==50000&&percentage>70)
			{
				cout<<"Student is successfully admitted in the college in Mechanical\n";
			}
			else{
				cout<<"above conditions are not satisfied so student doesn't admitted in The college\n";
			}
		   }
		   else if(strcmp(branch,"IT")||strcmp(branch,"it"))
		   {
		   	if(strcmp(branch,"IT")&&semester_fees==50000&&percentage>70||strcmp(branch,"it")&&semester_fees==50000&&percentage>70)
			{
				cout<<"Student is successfully admitted in the college in IT\n";
			}
			else{
				cout<<"above conditions are not satisfied so student doesn't admitted in The college\n";
			}
		   }
		   else
		   {
		   	if(strcmp(branch,"CSE")&&semester_fees==50000&&percentage>70||strcmp(branch,"cse")&&semester_fees==50000&&percentage>70)
			{
				cout<<"Student is successfully admitted in the college in CSE branch\n";
			}
			else{
				cout<<"above conditions are not satisfied so student doesn't admitted in The college\n";
			}
		   }
}
};
class medical:public student
{
	protected:
	   float semester_fees;
	    char branch[20];
	public:
		void input()
		{
			cout<<"enter fees=";
			cin>>semester_fees;
			cout<<"enter branch in which you want to take admission(MBBS/B.Pharmacy)=";
			cin>>branch;
		}
		void admission()
		{
			if(strcmp(branch,"MBBS")||strcmp(branch,"mbbs"))
			{
			if(strcmp(branch,"MBBS")&&semester_fees==10000&&percentage>60||strcmp(branch,"mbbs")&&semester_fees==10000&&percentage>60)
			{
				cout<<"Student is successfully admitted in the college in MBBS\n";
			}
			else{
				cout<<"above conditions are not satisfied so student doesn't admitted in The college\n";
			}
		   }
		   else
		   {
		   	if(strcmp(branch,"B.Pharmacy")&&semester_fees==10000&&percentage>60||strcmp(branch,"b.pharmacy")&&semester_fees==10000&&percentage>60)
			{
				cout<<"Student is successfully admitted in the college in B Pharmacy\n";
			}
			else{
				cout<<"above conditions are not satisfied so student doesn't admitted in The college\n";
			}
		   }
		}
};
int main()
{
	int choice;
	while(1)
	{
		cout<<"1.Arts\n";
		cout<<"2.engineering\n";
		cout<<"3.medical\n";
		cout<<"4.Exit\n";
		cin>>choice;
		switch(choice)
		{
			case 1:
				arts a1;
				a1.student::input();
				a1.input();
				a1.admission();
				break;
			case 2:
				engineering e1;
				e1.student::input();
				e1.input();
				e1.admission();
				break;
			case 3:
				medical m1;
				m1.student::input();
				m1.input();
				m1.admission();
				break;
			case 4:
				exit(0);
		}
	}
	return 0;
 }


