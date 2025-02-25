#include<iostream>
#include<conio.h> 
using namespace std;
int main()
{   float p,c,m,tot,avg1;
    char name[25];
    
    cout<<"enter ur name\n";
    cin>>name;

    cout<<"enter p, c and m marks \n";
    cin>>p;
    cin>>c;
    cin>>m;
    avg1 = (p+c+m)/3;
    cout<<"avg marks are:"<<avg1;

    if (avg1<45 )
     {
       cout<<"\nYou are not passed the grouping.";
       
     }
    else
    {cout<<"\nCongrats you passed the grouping.";
    } 
    
    getch();
    
}