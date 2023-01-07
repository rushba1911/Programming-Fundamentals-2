#include<iostream>
#include<conio.h>
using namespace std;

void header();
int menu();
float calculateaggregate(float matricmarks, float intermarks, float ecatmarks);
void printstudentdata(string name, float matric, float inter, float ecat, float aggregate);

main()
{
	while(true)
	{

	system("cls");

	string firststdname, secondstdname;
	float firststdmatric, firststdinter, firststdecat;
	float secondstdmatric, secondstdinter, secondstdecat;
	float aggregate1, aggregate2;
	
	header();
	int option = menu();
	

	if (option==1)
	{
	 cout<<"Enter first student name: "<<endl;
	 cin>>firststdname;
	 cout<<"Enter matric marks: "<<endl;
	 cin>>firststdmatric;
	 cout<<"Enter inter marks: "<<endl;
	 cin>>firststdinter;
	 cout<<"Enter ecat marks: "<<endl;
	 cin>>firststdecat;
	}	

	if (option==2)
	{
	 cout<<"Enter second student name: "<<endl;
	 cin>>secondstdname;
	 cout<<"Enter matric marks: "<<endl;
	 cin>>secondstdmatric;
	 cout<<"Enter inter marks: "<<endl;
	 cin>>secondstdinter;
	 cout<<"Enter ecat marks: "<<endl;
	 cin>>secondstdecat;
	}

	if (option==3)
	{
	 aggregate1 = calculateaggregate(firststdmatric, firststdinter, firststdecat);
	 aggregate2 = calculateaggregate(secondstdmatric, secondstdinter, secondstdecat);
	 cout<<"First student's aggregate is: "<<aggregate1<<endl;
	 cout<<"Second student's aggregate is: "<<aggregate2<<endl;
	}

	if (option==4)
	{
	 cout<<"Following student's exist in the system:- "<<endl;
	 cout<<"Name"<<"\t"<<"Matric"<<"\t"<<"Inter"<<"\t"<<"Ecat"<<"\t"<<"Merit"<<endl;
	 printstudentdata(firststdname, firststdmatric, firststdinter, firststdecat, aggregate1);
	 printstudentdata(secondstdname, secondstdmatric, secondstdinter, secondstdecat, aggregate2);
        }

	if (option==5)
	{
	 return 0;
	}
	 
 	cout<<"Press any key to continue";
	getch ();
	system("cls");
        }
}

void header()
{
	cout<<"*******************************************************************"<<endl;
	cout<<"*                University Admission Management System           *"<<endl;
	cout<<"*******************************************************************"<<endl;
}

int menu()
{
	int option;
	cout<<"Select one of the following options:- "<<endl;
	cout<<"1. Add first student record "<<endl;
	cout<<"2. Add second student record "<<endl;
	cout<<"3. Calculate aggregate "<<endl;
	cout<<"4. Print both student's records "<<endl;
	cout<<"5. Exit "<<endl;
	cout<<"Your option: "<<endl;
	cin>>option;
	return option;
}

float calculateaggregate(float matricmarks, float intermarks, float ecatmarks)
{
	float aggregate;
	aggregate=(0.25*(matricmarks/1050))+(0.45*(intermarks/550))+(0.3*(ecatmarks/400));
	return aggregate;
}

void printstudentdata(string name, float matric, float inter, float ecat, float aggregate)
{
	cout<<name<<"\t"<<matric<<"\t"<<inter<<"\t"<<ecat<<"\t"<<aggregate<<endl;
}