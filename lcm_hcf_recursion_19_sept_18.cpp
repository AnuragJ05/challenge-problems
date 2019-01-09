#include<iostream>
using namespace std;
int hcf(int n, int m)
{
	if(n!=m)
	{
		if (n>m)   hcf(n=n-m,m);
		else hcf(n,m=m-n);
	}
	else return n;
}
main()
{
	int n,m,x,y,HCF,LCM;
	cout<<"\nENTER TWO NO. : ";
	cin>>n>>m;
	x=n; y=m;
	HCF=hcf(n,m);
	cout<<"\nHCF OF TWO GIVEN NO. ARE : "<<HCF;
	LCM=x*y/HCF;
	cout<<"\nLCM OF TWO GIVEN NO. ARE : "<<LCM;
}
