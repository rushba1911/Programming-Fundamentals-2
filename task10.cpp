#include<iostream>
using namespace std;
void reverse(string value);

main()
{
string value;
cout<<"Enter input true or false ";
cin>>value;
reverse(value);
}

void reverse(string value)
{
if (value=="true")
{
cout<<"False";
}
if (value=="false")
{
cout<<"True";
}
}

