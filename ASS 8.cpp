#include<iostream>
#include<fstream>
using namespace std;
int main()
{
	fstream f;
	string ch;
	f.open("first.txt",ios::out);
	if(!f)
	{	cout<<"\n ERROR OPENING FILE";
		return 0;
	}
	cout<<"FILE NAME first.txt IS CREATED\n";
	f<<"SY BTECH Computer Division A, Batch A1-,VIIT Pune "<<endl;
	f.close();
	f.open("first.txt",ios::in);
	if(!f)
	{
		cout<<"\nERROR OPENING FILE";
		return 0;
	}
	while(f>>ch)	
	{
		cout<<ch<<" ";
	}
	f.close();	
	return 0;
}
