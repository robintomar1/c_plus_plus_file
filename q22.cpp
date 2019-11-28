#include<iostream>
using namespace std;
void sort(int *arr,int n)
{
	int i,j,swap,temp;
	for(i=0;i<n;i++)
	{
		swap =0;
		for(j=0;j<n-i-1;j++)
		{
			if(arr[j]>arr[j+1])
			{
				temp=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=temp;
				swap++;
			}
		}
		if(swap == 0)
			break;
	}
}
int main()
{
	int arr[10],i,n;
	cout<<"Enter the no. of elements: ";
	cin>>n;
	cout<<"Enter the arr element: ";
	for(i=0;i<n;i++)
		cin>>arr[i];
	sort(arr,n);
	cout<<"Array after sort is: ";
	for(i=0;i<n;i++)
		cout<<arr[i]<<" ";
}

