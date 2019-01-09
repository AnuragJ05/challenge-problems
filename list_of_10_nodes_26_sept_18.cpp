#include<iostream>
using namespace std;
struct node
{
	int data;
	node *nextnode;
	
}*newnode,*start=NULL,*end=NULL,*temp;
class LinkedList
{ public:
	int n;
	LinkedList()
	{
		n=0;
	}
void getnode()
{
	newnode = new node;
	cout<<"enter element : ";
	cin>>newnode->data;
	newnode->nextnode=NULL;
}
void iemptylist()
{
	getnode();
	start=newnode;
	end=newnode;
}


void insertlist()
{
	getnode();
	end->nextnode=newnode;
	end=newnode;
	n++;
}
void traverse()
{
	temp=start;
		cout<<endl<<"LIST :\n";
		for(int i=0;i<n+1;i++)
		{
			cout<<temp->data<<endl;
			temp=temp->nextnode;
		 } 
}
};
main()
{
	LinkedList LL;
LL.iemptylist();  
for(int i=1;i<10;i++)
{
LL.insertlist();
}
LL.traverse();
}
