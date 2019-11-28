#include<iostream>
using namespace std;
	template <class t>
t* reverse (t arr[],int n)
{
	int j=0;
	const int size = n;
	t rev[size];
	for(int i = size-1;i>= 0;i--)
	{
		rev[j] = arr[i];
		j++;
	}
	for(int i=0;i<n;i++)
		arr[i] = rev[i];
	return arr;
}
int main()
{
	int i,arri[10],n,*pi;
	float arrf[10],*pf;
	cout<<"Enter the number of element: ";
	cin>>n;
	cout<<"Enter the Integer Arry Element: ";
	for(i=0;i<n;i++)
	{
		cin>>arri[i];
	}
	pi= reverse(arri,n);
	for(i=0;i<n;i++)
		cout<<pi[i]<<"  ";
	cout<<"\nEnter the Float Arry Element: ";
	for(i=0;i<n;i++)
	{
		cin>>arrf[i];
	}
	pf= reverse(arrf,n);
	for(i=0;i<n;i++)
		cout<<pf[i]<<"  ";
	cout<<endl;
	return 0;
}

