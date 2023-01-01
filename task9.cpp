#include<iostream>
using namespace std;
void check(int x,int y);

main()
{
int x,y;
cout<<"Enter first number ";
cin>>x;
cout<<"Enter second nummber ";
cin>>y;
check(x,y);
}

void check(int x,int y)

{
	if(x==y)
	{
	cout<<"True";
	}
	if(x!=y)
	{
	cout<<"False";
	}
}

