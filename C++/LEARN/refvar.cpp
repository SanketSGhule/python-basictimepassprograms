 #include<iostream>
#include<conio.h>
using namespace std;



int main()
{
  int total = 100;
  int &sum = total;  
  total = total + 10;
  cout<<total<<"\n"<<sum;
  getch();
}



