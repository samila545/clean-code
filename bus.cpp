#include<iostream>
using namespace std;
	struct passenger
	{
		char name[50];
		int age;
		char departure[50];
		char destination[50];
		int phone;
	} ;
int main()
{

	passenger p;
	cout<<"enter details,"<<endl;
	cout<<"enter full name:";
	cin>>p.name;
	cout<<"age:";
	cin>>p.age;
	cout<<"enter departure:";
	cin>>p.departure;		
	cout<<"enter destination:";
	cin>>p.destination;
	cout<<"enter phone number:";
	cin>>p.phone;
	cout<<"\n Displaying passengers detail,"<<endl;
	cout<<"name:"<<p.name<<endl;
	cout<<"age:"<<p.age<<endl;	
	cout<<"departure city:"<<p.departure<<endl;
	cout<<"destination:"<<p.destination<<endl;
	cout<<"phone number:"<<"+251"<<p.phone<<endl;
	return 0;
}