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
	friend void swap(Number1 &, Number2 &);
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
	friend void swap(Number1 &, Number2 &);
};
void swap(Number1 &n1,Number2 &n2)
{
	int temp;
	temp = n1.num;
	n1.num = n2.num;
	n2.num = temp;
}
int main()
{
	Number1 n1;
	Number1 n2;
	n1.setnum(3);
	n2.setnum(5);
	cout<<"before swap\n";
	cout<<"N1: "<<n1.getnum();
	cout<<"\nN2: "<<n2.getnum();
	swap(n1,n2);
	cout<<"\nafter swap\n";
	cout<<"N1: "<<n1.getnum();
	cout<<"\nN2: "<<n2.getnum()<<endl;
}
