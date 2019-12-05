
#include<iostream>
#include<stdexcept>
#include<cstring>
using namespace std;

int main()
{
int i,n; 
char car;
char city[20];

cout<<"\n Enter city of person:";
cin>>city;
 try
{
 if(strcmp(city, "Pune")&& strcmp(city, "Banglore")&& strcmp(city,"Chennai")&& strcmp(city, "Mumbai"))
 throw runtime_error("\n Person is not staying in Pune/Mumbai/Banglore/Chennai");
}
 catch(const exception& e)
{
  cout<<"Caught exception:"<<e.what()<<'\n';
}

cout<<"\n Whether person holds car or not? (y/n):";
cin>>car;
 try
{
 if(car=='n')
 throw runtime_error("\n Person should hold car");
}
 catch(const exception& e)
{
  cout<<"Caught exception:"<<e.what()<<'\n';
}

cout<<"\n Information of person Meets The Criteria:";
cout<<"\n Location:"<<city;
cout<<"\n Holding car or not?:"<<car;

return 0;
}
