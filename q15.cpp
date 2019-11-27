#include<iostream>
using namespace std;
class Employee
{
	int eid;
	string name;
	float salary;
	public:
	Employee(int eid,string name,float salary)
	{
		this->eid = eid;
		this->name = name;
		this->salary = salary;
	}
	int greater(Employee);
};
int Employee::greater(Employee e)
{
	if(this->salary>e.salary)
		return 1;
	else
		return 2;
}
int main()
{
	Employee e1(1,"yash",50000.0f);
	Employee e2(2,"Abhishek",60000.0f);
	if(1==e1.greater(e2))
		cout<<"Employee 1 has greater salary"<<endl;
	else if(2 == e1.greater(e2))
		cout<<"Employee 2 has greater salary"<<endl;
	return 0;
}

