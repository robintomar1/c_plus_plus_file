#include<iostream>
using namespace std;
	template <class t>
int binarysearch(t arr[],int count,t num)
{
	int first = 0;
	int last = count-1;
	int middle = (first+last)/2;
	while (first <= last)
	{
		if(arr[middle] < num)
		{
			first = middle + 1;

		}
		else if(arr[middle] == num)
		{
			cout<<num<<" found in the array at the location "<<middle+1<<"\n"; 
			break; 
		} 
		else 
		{ 
			last = middle - 1; 
		} 
		middle = (first + last)/2; 
	} 
	if(first > last)
	{
		cout<<num<<" not found in the array";
	}
}
int main()
{
	int i,n,arri[10],numi;
	float arrf[10],numf;
	cout<<"Enter the number os element : ";
	cin>>n;
	cout<<"Enter the Integer Array elements(sorted): ";
	for(i=0;i<n;i++)
	{
		cin>>arri[i];
	}
	cout<<"Enter the Element want to search : ";
	cin>>numi;
	binarysearch(arri,n,numi);
	cout<<"Enter the Float Array elements(sorted): ";
	for(i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	cout<<"Enter the Element want to search : ";
	cin>>numf;
	binarysearch(arrf,n,numf);
	return 0;
}
