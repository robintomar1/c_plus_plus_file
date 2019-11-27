#include<iostream>
using namespace std;
class Matrix
{
	int arr[3][3];
	public:
	void set()
	{
		for(int i=0;i<3;i++)
			for(int j=0;j<3;j++)
				cin>>arr[i][j];
	}
	void show()
	{
		for(int i=0;i<3;i++)
		{
			cout<<endl;
			for(int j=0;j<3;j++)
				cout<<arr[i][j]<<" ";
		}
	}
	Matrix operator*(Matrix m)
	{
		Matrix r;
		for(int i=0;i<3;i++)    
		{    
			for(int j=0;j<3;j++)    
			{    
				r.arr[i][j]=0;    
				for(int k=0;k<3;k++)    
				{    
					r.arr[i][j]+=arr[i][k]*m.arr[k][j];    
				}
			}
		}
		return r;
	}
};
int main()
{
	Matrix m1,m2,m3;
	cout<<"Enter the matrix 1:\n";
	m1.set();
	cout<<"\nEnter the mateix 2:\n";
	m2.set();
	m3 = m1 * m2;
	m3.show();
	return 0;
}
