#include<iostream>
#include<math.h>
using namespace std;
int find(int &next)
{
	int prev;
	prev = sqrt(next);
	next *= next;
	return prev;
}
int main()
{
	int num,next,prev;
	cout<<"Enter the number:  ";
	cin>>num;
	next = num;
	prev = find (next);
	cout<<num<< "Previous power is "<<prev<<" and next power is "<<next<<endl;
	return 0;
}

