#include<iostream>
using namespace std;
class Integer
{
	int i;
	public:
	Integer()
	{
		i=0;
	}
	Integer(int n)
	{
		i=n;
	}
	Integer(char *ch)
	{
		i = atoi(ch);
	}
	void show()
	{
		cout<<"i = "<<i<<endl;
	}
};
int main()
{
	Integer i1;
	Integer i2(10);
	char ch[10];
	cout<<"Enter the no: ";
	fgets(ch,9,stdin);
	Integer i3(ch);
	i1.show();
	i2.show();
	i3.show();
	return 0;
}
