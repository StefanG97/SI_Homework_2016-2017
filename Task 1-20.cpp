#include<iostream>
using namespace std;
int main(){
	int x, k;
	cin>>x>>k;
	int a[k];
	for(int i = 0; i < k; i++){
		a[i] = x%10;
		x/=10;
	}
	cout<<a[k-1]<<endl;
	return 0;
}
