#include<iostream>
using namespace std;
class Point
{
	int x,y;
	public:
	Point()
	{
		x=0;
		y=0;
	}
	Point(int a,int b)
	{
		x=a;
		y=b;
	}
	int getx()
	{return x;}
	int gety()
	{return y;}
	friend istream & operator >>(istream &in,Point &p);
	friend ostream & operator <<(ostream &out,const Point &p);
};
istream & operator >>(istream &in,Point &p)
{
	cout<<"Enter X and Y coordinate: ";
	in >> p.x >> p.y ;
	return in;
}
ostream & operator <<(ostream &out,const Point &p)
{
	out<<"("<< p.x <<","<< p.y <<")"<<endl;
	return out;
}
class Polar
{
	int r,a;
	public:
	Polar()
	{
		r=0;
		a=0;
	}
	Polar(int ab,int bb)
	{
		r=ab;
		a=bb;
	}
	Polar(Point p)
	{
		r = p.getx();
		a = p.gety();
	}
	void show()
	{
		cout<<"("<<r<<","<<a<<")"<<endl;
	}
};
int main()
{
	Point p;
	cin >> p;
	cout << p;
	Polar p1(p);
	Polar p2;
	p1.show();
	p2.show();


}
