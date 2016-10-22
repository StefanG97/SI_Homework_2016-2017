#include<iostream>
using namespace std;
bool DateValidator(int dd, int mm, int yyyy){
	if(dd > 0 && dd < 28 && mm == 2)
		return true;
	else if(dd == 29 && mm == 2 && (yyyy % 4 == 0 || yyyy % 100 == 0 || yyyy % 400 == 0))
		return true;
	else if(dd > 0 && dd < 31 && (mm == 4 || mm == 6 || mm == 9 || mm == 11) && yyyy > 0)
		return true;
	else if(dd > 0 && dd <= 31 && (mm == 1 || mm == 3 || mm == 5 || mm == 7 || mm == 8 || mm == 10 || mm == 12) && yyyy > 0)
		return true;
	else
		return false;
}

int main(){
	int day, month, year;
	cin>>day>>month>>year;
	cout<<DateValidator(day, month, year)<<endl;
	return 0;
}
