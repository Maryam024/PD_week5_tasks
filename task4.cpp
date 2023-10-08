#include<iostream>
using namespace std;
void projectTimeCalculation(float h,float d,float w);
main()
{
 float h,d,w;
 cout<<"Enter the needed hours: ";
 cin>>h;
 cout<<"Enter the days that the firm has: ";
 cin>>d;
 cout<<"Enter the number of all workers: ";
 cin>>w;

projectTimeCalculation(h,d,w);

}
void projectTimeCalculation(float h,float d,float w)
{
 float r1,r2,r3,r4,r5;
 r1=d/10;
 r2=d-r1;
 r3=w*10;
 r4=r3*r2;
 r5=r4-h;

if (r5>0)
{
 cout<<"Yes!"<<r5<<" hours left.";
}
else
{
 cout<<"Not enough time! "<<-1*r5<<" hours needed.";
}

}