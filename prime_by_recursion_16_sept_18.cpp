#include<iostream>
#include<stdio.h>
using namespace std;
 void power(int n,int *temp,int i)
 {
 		if(i<=n/2)
 		{
 			if(n%i==0) *temp=1;
			else 	power(n,temp,++i);
 }
}
main()
{
	int n,temp=0,i=2;
	cout<<"\nENTER THE NO. ";
	cin>>n;
    power(n,&temp,i);
    if(temp==1) cout<<"\nNO. IS NOT PRIME";
    else cout<<"\nNO. IS PRIME";
}
