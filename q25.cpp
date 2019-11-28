#include<iostream>
using namespace std;
class Stack
{
	int stack[5];
	int top;
	public:
	Stack()
	{
		top = 0;
	}
	int push(int i)
	{
		if(top == 5)
			return 0;
		else
		{
			stack[top++]=i;
			return 1;
		}
	}
	int pop()
	{
		if(top<0)
			return -1;
		else
		{
			int t = stack[top];
			top=top-1;
			return t;
		}
	}
	void display()
	{
		int i;
		for(i=0;i<top;i++)
			cout<<" "<<stack[i];
	}
};
int main()
{
	Stack s;
	int num,r;
	cout<<"\nEnter the items to Push ";
	do
	{
		cout<<"> ";
		cin>>num;
		try
		{
			r=s.push(num);
			if(r==0)
				throw "Overflow\n";
			else
				cout<<" PUSHED";
		}
		catch(const char *excp)
		{
			cout<<excp<<endl;
		}
		cout<<"\nWanna push more element: ";
		cin>>r;
	}while(r==1);
	s.display();
	cout<<"\nWant to Pop items";
	cin>>r;
	while(r==1)
	{
		try
		{
			r=s.pop();
			if(r==-1)
				throw "Underflow\n";
			else
				cout<<r<<" POPED";
		}
		catch(const char *excp)
		{
			cout<<excp<<endl;
		}
		cout<<"\nWnna pop more: ";
		cin>>r;
	}
	s.display();
}
