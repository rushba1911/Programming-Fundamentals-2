#include<iostream>
using namespace std;
main()
{
int num1, num2, num3;
float redrose=2.00;
float whiterose=4.10;
float tulips=2.50;
float finalprice;
float priceafterdiscount;
cout<<"Enter number of Red Roses ";
cin>>num1;
cout<<"Enter number of White Roses ";
cin>>num2;
cout<<"Enter number of Tulips ";
cin>>num3;
finalprice=(redrose*num1)+(whiterose*num2)+(tulips*num3);
cout<<"Final amount is: "<<finalprice<<endl;
if(finalprice>200)
{
cout<<"You got discount!!!"<<endl;
priceafterdiscount=finalprice-(finalprice*20)/100;
cout<<"Final amount after discount is: "<<priceafterdiscount<<endl;
}
}
