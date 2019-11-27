#include<iostream>
using namespace std;
class Vehicles
{
	float mileage;
	float price;
	public:
	void setv(float ml,float pr)
	{
		mileage = ml;
		price = pr;
	}
};
class Cars:public Vehicles
{
	float stowncost;
	int warr;
	int seatcap;
	char fuel;
	public:
	void setc(float scost,int wa,int seat,char ft)
	{
		stowncost = scost;
		warr = wa;
		seatcap = seat;
		fuel = ft;
	}
};
class Bike:public Vehicles
{
	 int nocy;
	 int nogrs;
	 string cooltype;
	 string wheeltype;
	 int fluesize;
	public:
	 void setb(int cy,int gr,string ctype,string wheel,int fuel)
	 {
		 nocy = cy;
		 nogrs = gr;
		 cooltype = ctype;
		 wheeltype = wheel;
		 fuelsize = fuel;
	 }
};

