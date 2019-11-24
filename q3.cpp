#include <iostream>
#include <vector>
using namespace std;

class CarbonFootPrint //abstract class 
	{
		public:
	   		virtual  void getCarbonFootPrint()=0; //a pure virtual function
	   		//A virtual function is “made pure” by the “pseudo initializer” = 0;
		   	//virtual ~CarbonFootPrint();//virtual destructor
		   	//it is iportant for an abstract class to have a virtual destructor
	};



class Building : public CarbonFootPrint
	{
		public:
    			Building(double e, int m); //constructor
    			Building()=default;
			~Building()=default; //destructor set to default
			void setElectric();
		    	virtual void getCarbonFootPrint() override;

		private:
 			double electric{0};
    			int months{12};
	};

	
	Building::Building(double e, int m): electric{e},months{m} {}//constructor

	void Building::setElectric()
		{
			cout << "Enter your monthly electric in KWH: " << endl;
			cin >> electric;
		}

	void Building::getCarbonFootPrint()
		{
	 		cout << "The carbon footprint for this house is " << endl;
  	 	  	cout<<(electric * months)<<endl;
		}


class Car : public CarbonFootPrint
	{
		public:
			Car(double =0, double=0); //constructor
			~Car()=default; //destructor
		 	void setYearlyMiles();
		 	void setAverageMPG();
		 	virtual void getCarbonFootPrint()override;

		 private:
		 	double yearlyMiles{0}, averageMPG{0};
		 	int co2 = 9;
	 };

	//class implementation
	Car::Car(double ym, double mpg):yearlyMiles{ym},averageMPG{mpg}{}

	void Car::setYearlyMiles()
		{
		 	cout << "Enter in your yearly miles: " << endl;
		 	cin >> yearlyMiles;
		}

	void Car::setAverageMPG()
		{
		 	cout << "Enter in your average miles per gallon: " << endl;
		 	cin >> averageMPG;
		}

	void Car::getCarbonFootPrint()
		{
		 	cout << "The carbon footprint for this car is " << endl;
		 	cout<<((yearlyMiles * averageMPG) * co2)<<endl;
		}

class Bicycle : public CarbonFootPrint
	{
		public:
			Bicycle(double, int); //constructor
			Bicycle()=default;
			~Bicycle()=default; //destructor
			void setMiles(); 
		 	virtual void getCarbonFootPrint();

		private:
			int calories{34};
			double miles{0};
	};

	//class implementation
	Bicycle::Bicycle(double m, int c):miles{m},calories{c}{}

	void Bicycle::setMiles()
		{
			cout << "Enter in number of miles: " << endl; 
			cin >> miles;
		}

	void Bicycle::getCarbonFootPrint()
		{
		 	cout << "The carbon footprint for this bicycle is " << endl;
		 	cout<<miles * calories<<endl;
		 }
		 
int count=0;
int main()
{
    CarbonFootPrint* list[20];
    int answer, i;

    cout << "Welcome to the Carbon Footprint Calculator!\n" << endl;

    do
    {
        cout << "Main Menu\n" << endl;
        cout << "1: Set house info.\n" << endl;
        cout << "2: Set car info.\n" << endl;
        cout << "3: Set bicycle info.\n" << endl;
        cout << "4: Get carbon footprint for all items set.\n" << endl;
        cin >> answer;

        switch (answer)
        {
            case 1:
            {
                cout << "\n" << endl;
                Building *anotherBuilding;
                anotherBuilding = new Building;
                anotherBuilding->setElectric();
                cout << "\n" << endl;
		list[count]=anotherBuilding;
		count++;
                break;
            }

            case 2:
            {
                cout << "\n" << endl;
                Car *anotherCar;
                anotherCar = new Car;
                anotherCar->setYearlyMiles();
                anotherCar->setAverageMPG();
                cout << "\n" << endl;
		list[count]=anotherCar;
		count++;
                break;
            }

            case 3:
            {
                cout << "\n" << endl;
                Bicycle *anotherbike;
                anotherbike = new Bicycle;
                anotherbike->setMiles();
                cout << "\n" << endl;
		list[count]=anotherbike;
		count++;
                break;
            }

            case 4:
            {
		for(int i=0;i<count;i++)
		{
			list[i]->getCarbonFootPrint();
		}
                //have it iterate through the vector and print out each carbon footprint.
                break;
            }

            default:
            {
                cout << answer << " is not a valid option" << endl;

                break;
            }
        }
    }
    while (answer != 4);
    return 0;
}

