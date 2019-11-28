#include<iostream>
#include<iomanip>
using namespace std;
void justify(float f)
{
	cout<<setw(10)<<f;
}
void precise(float f)
{
	cout<<setw(10)<<setprecision(2)<<f;
}
void unused(float f)
{
	cout<<setfill('*');
	cout<<setw(10)<<f;
}
void zeros(float f)
{
	cout<<f<<setfill('0')<<setw(10);
}
void positive(float f)
{
	if(f>0)
		cout<<setw(10)<<"+"<<f;
	else if(f<0)
		cout<<setw(10)<<"-"<<f;
	else
		cout<<setw(10)<<f;
}

int main()
{
	int ch;
	float f;
	do
	{

		cout<<"\n1)Right justify\n2)two digit precision\n3)Filling unused space with *\n4)Trailing zeros are shown\n5)Show sign for positive values\n6)Exit\n>";
		cin>>ch;
		if(ch ==6)
			return 0;
		cout<<"Enter the float value to display: ";
		cin>>f;
		switch(ch)
		{
			case 1:{
				       justify(f);
				       break;
			       }
			case 2:{
				       precise(f);
				       break;
			       }
			case 3:{
				       unused(f);
				       break;
			       }
			case 4:{
				       zeros(f);
				       break;
			       }
			case 5:{
				       positive(f);
				       break;
			       }
			default:{
					cout<<"Wrong choice!!!!";
					break;
				}
		}
	}while(ch<=5);
}
