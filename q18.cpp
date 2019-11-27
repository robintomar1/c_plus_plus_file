#include<iostream>
#include<fstream>
#include<iomanip>
using namespace std;
ofstream fout;
class Employee
{
	string name;
	int eid;
	float salary;
	public:
	void get()
	{
		cout<<"Enter the name:   ";
		cin>>name;
		cout<<"Enter the Id  :   ";
		cin>>eid;
		cout<<"Enter the salary: ";
		cin>>salary;
		fout<<setw(10)<<eid<<setw(20)<<name<<"		" <<setw(10)<<salary<<endl;
	}
};
int main()
{
	Employee e;
	int ch=1;
	fout.open("database.txt");
	fout<<"Employee Id	   Employee Name	Employee Salary"<<endl;
	while(ch==1)
	{
		e.get();
		cout<<"Want to enter more(1-yes ,0-no): ";
		cin>>ch;
	}
	fout.close();
	return 0;
}
