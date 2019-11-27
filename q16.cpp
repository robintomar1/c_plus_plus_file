#include<iostream>
#include<fstream>
#include<cstring>
using namespace std;
int main()
{
	string line;
	int len;
	ofstream fout;
	fout.open("file.txt");
	while(fout)
	{
		getline(cin,line);
		if(line == "0")
			break;
		fout<<line<<endl;
	}
	fout.close();
	ifstream fin;
	fin.open("file.txt");
	while(fin)
	{
		getline(fin,line);
		for(len=0;line[len]!='\0';len++);
		cout<<line<<" - "<<len<<endl;
	}
	fin.close();
	return 0;
}
