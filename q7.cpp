#include<iostream>
using namespace std;
class Number2;
class Number1
{
	int num;
	public:
	void setnum(int i)
	{
		num = i;
	}
	int getnum()
	{return num;}
	friend void largest(Number1 , Number2);
};
class Number2
{
	int num;
	public:
	void setnum(int i)
	{
		num = i;
	}
	int getnum()
	{return num;}
	friend void largest(Number1 , Number2);
};
void largest(Number1 n1,Number2 n2)
{
	if(n1.num>n2.num)
		cout<<"Number 1 is largest"<<n1.num<<endl;
	else if(n2.num>n1.num)
		cout<<"Number 2 is largest:"<<n2.num<<endl;
	else
		cout<<"Numbers are equal";
}
int main()
{
	 Number1 n1;
	 Number2 n2;
	 n1.setnum(2);
	 n2.setnum(4);
	 largest(n1,n2);
	 return 0;
}
