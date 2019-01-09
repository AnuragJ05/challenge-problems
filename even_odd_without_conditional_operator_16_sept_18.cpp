#include<iostream>
#include<stdio.h>
using namespace std;
 
main()
{
	int n;
	cout<<"\nENTER THE NO. ";
	cin>>n;
    while(n>1)
    {
    	n=n-2;
   }
   if(n==0) cout<<"\nGIVEN NO. IS EVEN ";
   else cout<<"\nGIVEN NO. IS ODD ";
}
