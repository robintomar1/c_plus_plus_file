#include<iostream>
using namespace std;
class Rational
{
	int n,d;
	public:
	void set(int a,int b)
	{
		n=a;
		d=b;
	}
	void put() const
	{
		cout<<"Sum:";
		cout<<n<<"/"<<d;
	}
	friend Rational operator+(Rational ,Rational);
};
Rational operator+(Rational u1,Rational u2)
{
	Rational r;
	r.n=u1.n*u2.d+u2.n*u1.d;
	r.d=u1.d*u2.d;
	return r;
}
int main()
{
	int a,b;
	Rational r1,r2,r3;
	cout<<"Enter the 1st rationals numerator and denominator: ";
	cin>>a>>b;
	r1.set(a,b);
	cout<<"Enter the 2nd rationals numerator and denominator: ";
	cin>>a>>b;
	r2.set(a,b);
	r3 = r1 + r2;
	r3.put();
	return 0;
}
