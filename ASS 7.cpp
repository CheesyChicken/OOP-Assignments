#include<iostream>
#include<list>
using namespace std;
void display(list<int> &l)
{
list<int>::iterator itr;
for(itr=l.begin();itr!=l.end();++itr)
{
cout<<*itr<<"\t";
}
cout<<endl;
}
int main()
{
	list <int> l1;
	list<int> l2(5);
	int no,value;

	cout<<"Enter the no of elements in list 1: ";
	cin>>no;
	cout<<"Enter the values"<<endl;
	int i;
    for(i=0;i<no;i++){
        cin>>value;
        l1.push_back(value);
    }
    display(l1);

    list<int>::iterator itr2;
    i=1;
	for(itr2=l2.begin();itr2!=l2.end();++itr2)
	{
		*itr2=i*2;
		i++;
	}
cout<<"List 1 element are:"<<endl;
display(l1);
cout<<"List 2 element are:"<<endl;
display(l2);
list<int>listA,listB;
listA=l1;
listB=l2;
l1.merge(l2);
cout<<"Merge unsorted list:"<<endl;
display(l1);
listA.sort();
listB.sort();
listA.merge(listB);
cout<<"Merge sorted list:"<<endl;
display(listA);
cout<<"Reverse list:"<<endl;
listA.reverse();
display(listA);
return 0;
}
