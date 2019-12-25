#include<iostream.h>
#include<conio.h>
void main()
{
clrscr();
int n,a=0;
cout<<"enter an integer:";
cin>>n;
while(n>0)
{
 n=n/10;
 a++;
 }
cout<<"\n number of digits in a given number is:"<<a;
getch();
}
