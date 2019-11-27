#include <iostream> 
#include<fstream>
using namespace std; 

int main(int argc, char** argv) 
{
	if(argc<4)
		return 0;
	ifstream fp1,fp2;
	ofstream fout;
	int x;
	string line;
	fp1.open(argv[1]);
	fp2.open(argv[2]);
	fout.open(argv[3]);
	if(!fp1 || !fp2 || !fout)
	{
		cout<<"File not open";
		return 0;
	}
	while(fp1>>x && getline(fp2,line))
	{
		fout<<line<<" - "<<x<<endl;
	}
	fp1.close();
	fp2.close();
	fout.close();
	return 0; 
}
