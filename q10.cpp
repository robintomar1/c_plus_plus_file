#include<iostream>
#include<iomanip>
using namespace std;
class Student
{
	int roll,age;
	string name;
	float marks;
	public:
	Student()
	{
		roll = age = 0;
		marks = 0.0f;
		name = " ";
	}
	void set(int rn,int ag,string nm,float mk)
	{
		roll = rn;
		age =ag;
		name = nm;
		marks = mk;
	}
	void put()
	{
		cout<<"ROLL No: "<<left<<setw(20)<<roll<<endl;
		cout<<"NAME   : "<<left<<setw(20)<<name<<endl;
		cout<<"AGE    : "<<left<<setw(20)<<age<<endl;
		cout<<"MARKS  : "<<left<<setw(20)<<marks<<endl;
	}
};
int main()
{
	int i,n,r,a;
	string nm;
	float mk;
	cout<<"Ente the no. of student details wanna enter: ";
	cin>>n;
	const int num =n;
	Student s[num];
	for(i=0;i<n;i++)
	{
		cout<<"Enter the Roll no : ";
		cin>>r;
		cout<<"Enter the name: ";
		cin>>nm;
		cout<<"Enter the age: ";
		cin>>a;
		cout<<"Enter the marks: ";
		cin>>mk;
		s[i].set(r,a,nm,mk);
	}
	for(i=0;i<n;i++)
	{
		s[i].put();
		cout<<endl;
	}
}
