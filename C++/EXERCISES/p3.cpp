#include<iostream>
#include<conio.h>
using namespace std;

// <To describe scope resolution operator>
int a=25;

int main()
{
  cout<<"\nlocal a="<<a<<"global a="<<a;

  int a=23;
    
 
    
  cout<<"\nlocal a="<<a<<"global a="<<a;
 
    
  getch();
    
}