#include<iostream>
using namespace std;

main()
{
string name;
int price;
float finalprice;

cout<<"Enter country name ";
cin>>name;
cout<<"Enter ticket price in dollars ";
cin>>price;

if (name=="pakistan")
{
finalprice=price-(price*5)/100;
cout<<"The final price is "<<finalprice;
}
if (name=="ireland")
{
finalprice=price-(price*10)/100;
cout<<"The final price is "<<finalprice;
}
if (name=="india")
{
finalprice=price-(price*20)/100;
cout<<"The final price is "<<finalprice;
}
if (name=="england")
{
finalprice=price-(price*30)/100;
cout<<"The final price is "<<finalprice;
}
if (name=="canada")
{
finalprice=price-(price*45)/100;
cout<<"The final price is "<<finalprice;
}
}

