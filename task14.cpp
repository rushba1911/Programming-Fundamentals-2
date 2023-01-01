#include<iostream>
using namespace std;
main()
{
int holidays;
int workingdays;
int timeforgames;
int differencefromnorm;
cout<<"Enter holidays: ";
cin>>holidays;

workingdays=365-holidays;
timeforgames=(workingdays*63)+(holidays*127);
differencefromnorm=30000-timeforgames;

if(holidays<=20)
{
cout<<"Tom sleeps well"<<endl;
cout<<""<<differencefromnorm<<" minutes per day"<<endl;
}

if(holidays>20)
{
cout<<"Tom will run away"<<endl;
cout<<""<<differencefromnorm<<" minutes less for play"<<endl;
}

}