#include<iostream>
using namespace std;
bool isPowerofTwo(unsigned int x){
	int flag = 0;
	for(int i = 1; i <= x; i *= 2)
		if(x == i)
			flag = 1;
	if(flag == 1)
		return true;
	else
		return false;	
}

int main(){
	unsigned int number;
	cin>>number;
	cout<<isPowerofTwo(number)<<endl;
	return 0;
}
