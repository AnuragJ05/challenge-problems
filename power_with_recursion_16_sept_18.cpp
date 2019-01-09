#include<iostream>
#include<stdio.h>
using namespace std;
 void power(int n,int *temp)
 {
 	*temp*=n;
 	if(*temp==n)
 	{
	 power(n,temp);
 }
 	
 }
main()
{
	int n,temp=1;
	cout<<"\nENTER THE NO. ";
	cin>>n;
    power(n,&temp);
    cout<<"\nPOWER : "<<temp;
}
