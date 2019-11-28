#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int num;
	float sroot;
	cout<<"Enter the number: ";
	cin>>num;
	try
	{
		if(num<0)
			throw num;
		sroot = sqrt(num);
		cout<<"Square root is: "<<sroot<<endl;
	}
	catch(int num)
	{
		num = -num;
		sroot = sqrt(num);
		cout<<"Square root is: "<<sroot<<"i"<<endl;
	}
	return 0;
}
