 #include<iostream>
#include<conio.h>
using namespace std;



int main()
{
 enum{x,y,z,a=20,b=30,c,d};

 cout<<x<<"\n"<<y<<"\n"<<z<<"\n"<<a<<"\n"<<b<<"\n"<<c<<"\n"<<d<<"\n";
    
getch();
}
// see output 
// we are getting x,y,z as 1,2,3 and a,b as we assinged 20,30 
//but c,d are printed as 31,32.I.e. they are continuing their previous variable!! 