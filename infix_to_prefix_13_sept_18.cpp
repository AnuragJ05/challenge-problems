#include<iostream>
#include<string.h>
#include<stack>
using namespace std;
stack <char>s;
int weight(char ch)
{
	if(ch=='(' || ch==')') return 0;
	else if(ch=='+' || ch=='-') return 1;
	else if(ch=='*' || ch=='/' ) return 2;
	else if(ch=='^') return 3;
	return -1;
}
int main()
{
	string infix,prefix,temp;
	int length;
	char ans;
	do
	{
	prefix="";
	cout<<"\nENTER THE FUNCTION :\n";
	cin>>infix;
	infix="("+infix+")";
	length=infix.length();
	for(int j=length-1;j>=0;j--)
	{
		if(infix[j]=='^')
		{
			if(weight(infix[j])<weight(s.top())) 
			{
				prefix+=s.top();
			s.pop();
			s.push(infix[j]);
			}
		else
		{	s.push(infix[j]);
		}
		}
	else if(infix[j]==')')
	{
		s.push(infix[j]);
	}
	else if(infix[j]=='(')
	{
		while(s.top()!=')')
		{
			prefix+=s.top();
			s.pop();
		}
		s.pop();
	}
	else if(weight(infix[j])>0)
	{
		if(weight(infix[j])>weight(s.top())) s.push(infix[j]);
		else
		{
			prefix+=s.top();
			s.pop();
			s.push(infix[j]);
		}
		
	}
	else prefix+=infix[j];
   }
   temp="";
   for(int i=0;i<length;i++) 
   {
   	temp+=prefix[length-1-i];
   }
cout<<"\nPREFIX EXP OF "<<infix<<" IS : "<<temp;
cout<<"\nDO YOU WANT TO PERFORM MORE :";
cin>>ans;
cout<<endl;
}while(ans=='y' || ans=='Y');
return 0;
}

