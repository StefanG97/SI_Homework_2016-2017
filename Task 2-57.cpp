#include<iostream>
using namespace std;
bool sumDigits(int x){
	int sum = 0;
	while(x!=0){
		sum+= x%10;
		x/=10;
	}
	if(sum % 3 == 0)
		return true;
	else
		return false;
}
int main(){
	int number;
	cin>>number;
	cout<<sumDigits(number)<<endl;
	return 0;
}
