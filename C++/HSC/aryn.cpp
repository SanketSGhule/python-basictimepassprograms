#include<iostream>
#include<conio.h>
using namespace std;
int main()
{ 
  
  float V_cyl, V_sph, x, r_sph, r_cyl, h;
  cout<<"Enter Radius Of SPHERE : ";
  cin>>r_sph;
  cout<<"Enter Radius Of CYLINDER : ";
  cin>>r_cyl;

  x = ((4)*r_sph*r_sph*r_sph)/(r_cyl*r_cyl*3);


  cout<<"\n\tLEVEL OF WATER IS RAISED BY\n"<<x<<endl;

 getch;
}