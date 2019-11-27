#include<iostream>
#include<fstream>
using namespace std;
int main()
{
	string line;
	int len;
	ofstream fout;
	fout.open("source.txt");
	cout<<"Enter data fr source file (0 to terminate) : \n";
	while(fout)
	{
		getline(cin,line);
		if(line == "0")
			break;
		fout<<line<<endl;
	}
	fout.close();
	fout.open("destination.txt");
	ifstream fin;
	fin.open("source.txt");
	while(fout && fin)
	{
		getline(fin,line);
		fout<<line<<endl;
	}
	fin.close();
	fout.close();
}

