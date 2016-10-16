#include<iostream>
using namespace std;
int main(){
	int x, k, br = 0, ans = 0;
	cin>>x>>k;
	while(br != k){
		ans = x % 10;
		x/=10;
		br++;
	}
	cout<<ans;
	return 0;
}
