#include<iostream>
using namespace std;
class Matrix
{
	int **p;
	int n,m;
	public:
	Matrix(int r,int c)
	{
		n=r;
		m=c;
		p = new int*[n];
		for(int i=0;i<n;i++)
			p[i] = new int[m];
	}
	void setmat()
	{
		cout<<"Enter te elements for the matrix: ";
		for(int i=0;i<n;i++)
			for(int j=0;j<m;j++)
				cin>>p[i][j];
	}
	void showmat()
	{
		cout<<"\nMatrix is:\n";
		for(int i=0;i<n;i++)
		{
			cout<<endl<<"\v";
			for(int j=0;j<m;j++)
				cout<<p[i][j]<<"\t";
		}
	}
};
int main()
{
	Matrix m(3,3);
	m.setmat();
	m.showmat();
	return 0;
}
