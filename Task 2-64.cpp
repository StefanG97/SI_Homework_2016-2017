#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
void deleteNumber(int x, int k){
	vector <int> temp;
	int br = 0;
	while(x != 0){
		br++;
		if(br == k){
			x /= 10;
			temp.push_back(x % 10);
			x /= 10;
		}
		else{
			temp.push_back(x % 10);
			x /= 10;
		}
	}
	reverse(temp.begin(), temp.end());
	for(int i = 0; i < temp.size(); i++)
		cout<<temp[i];
}

int main(){
	int n, k;
	cin>>n>>k;
	deleteNumber(n, k);
	return 0;
}
