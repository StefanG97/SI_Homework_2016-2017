#include<iostream>
using namespace std;
int main(){
	long long int age, days, hours, minutes, seconds;
	cin>>age;
	days = age * 365 + age / 4;
	hours = days * 24 + (age % 4) * 6;
	minutes = hours * 60;
	seconds = minutes * 60;
	cout<<age<<" years are:"<<endl<<days<<" days, or"<<endl<<hours<<" hours, or"<<endl<<minutes<<" minutes, or"<<endl<<seconds<<" seconds."<<endl;	
	return 0;
}
