#include<iostream>
#include<math.h>
using namespace std;
int main(){
	long long int n, k = 0;
	cin>>n;
	for(int i = 1; i <= n; i++){
		k = (pow(i, 3) + 13) * i * n * pow(n , 3);
		if(k % 5 == 0 || k % 9 == 0)
			cout<<k<<" "; 
	}
	return 0;
}
