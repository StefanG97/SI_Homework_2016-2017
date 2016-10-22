#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
void replaceNumbers(int x){
	vector <int> temp;
	while(x != 0){
		if(x % 10 == 5){
			temp.push_back(8);
			x/=10;
		}
		else{
			temp.push_back(x%10);
			x/=10;
		}
	}
	reverse(temp.begin(), temp.end());
	for(int i = 0; i< temp.size(); i++)
		cout<<temp[i];
	}

int main(){
	int number;
	cin>>number;
	replaceNumbers(number);
	return 0;
}
