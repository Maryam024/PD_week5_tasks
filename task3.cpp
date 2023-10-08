#include<iostream>
using namespace std;

void taxAmount(string type,float price);
main()
{
 string type;
 float price;
 cout<<"Enter the vehicle type code(M, E, S, V, T): ";
 cin>> type;
 cout<<"Enter the price of the vehicle: $";
 cin>> price;
 
 taxAmount(type,price);
}
void taxAmount(string type,float price)
{
 float tax1,tax2,tax3,tax4,tax5;
float r1,r2,r3,r4,r5;
 tax1=price*0.06;
 tax2=price*0.08;
 tax3=price*0.1;
 tax4=price*0.12;
 tax5=price*0.15;

 r1=price+tax1;
 r2=price+tax2;
 r3=price+tax3;
 r4=price+tax4;
 r5=price+tax5;

 if (type=="M")
{
 
 cout<<"The final price of a vehicle of type "<<type<<" after adding the tax is $"<<r1; 
}
 if (type=="E")
{
 cout<<"The final price of a vehicle of type "<<type<<" after adding the tax is $"<<r2;
}
 if (type=="S")
{
 cout<<"The final price of a vehicle of type "<<type<<" after adding the tax is $"<<r3;
}
 if (type=="V")
{
 cout<<"The final price of a vehicle of type "<<type<<" after adding the tax is $"<<r4;
}
 if (type=="T")
{
 cout<<"The final price of a vehicle of type "<<type<<" after adding the tax is $"<<r5;
}
}