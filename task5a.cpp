#include<iostream>
using namespace std;
main()
{
int x=0;
string name;
int matricmarks;
int intermarks;
int ecatmarks;
cout<<"*************************************************************************************"<<endl;
cout<<"*                       University Management System                                *"<<endl;
cout<<"*************************************************************************************"<<endl;

cout<<"Select one of the following options "<<endl;
cout<<"1. Add new Student Record "<<endl;
cout<<"2. View all records "<<endl;
cout<<"3. Show records in descending order "<<endl;
cout<<"4. Exit "<<endl;
cout<<"Your option: ";
cin>>x;
	if(x==1)
	{
	cout<<"Enter Student name "<<endl;
	cin>>name;
	cout<<"Enter Obtained marks in Matric "<<endl;
	cin>>matricmarks;
	cout<<"Enter Obtained marks in first year "<<endl;
	cin>>intermarks;
	cout<<"Enter Ecat marks "<<endl;
	cin>>ecatmarks;
	}
}