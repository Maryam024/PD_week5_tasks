#include<bits/stdc++.h>
using namespace std;

void pyramidVolume(float h,float w,float l,string unit);
main()
{
 float h,w,l;
 cout<<"Enter the length of the pyramid (in meters): ";
 cin>>l;
 cout<<"Enter the width of the pyramid (in meters): ";
 cin>>w;
 cout<<"Enter the height of the pyramid (in meters): ";
 cin>>h;
 string unit;
 cout<<"Enter the desired output unit (millimeters, centimeters, meters, kilometers): ";
 cin>>unit,

 pyramidVolume(h,w,l,unit);

} 
void pyramidVolume(float h,float w,float l,string unit)
{
 float volume;
 float cubic,square;
 volume=(l*w*h)/3;
 cubic=pow(1000,3);
 square=pow(100,3);
 if(unit=="meters")
{
  cout<<"The volume of the pyramid is: "<<volume<<" cubic meters";
}
 if(unit=="kilometers")
{
  cout<<"The volume of the pyramid is: "<<volume/cubic<<" cubic kilometers";
}
 if(unit=="centimeters")
{
  cout<<"The volume of the pyramid is: "<<volume*square<<" cubic centimeters";
}
 if(unit=="millimeters")
{
 cout<<"The volume of the pyramid is: "<<volume*cubic<<" cubic milllimeters";
}
}