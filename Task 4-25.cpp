#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
void toKSystem(int n, int k){
vector<int> temp;
while(n!=0){
	temp.push_back(n%k);
	n/=k;
}
reverse(temp.begin(), temp.end());
for(int i = 0; i < temp.size(); i++)
	if(temp[i]>=10)
		cout<<char(temp[i]+55);
	else
		cout<<temp[i];
}

int main(){
	int n, k;
	cin>>n>>k;
	toKSystem(n, k);
	return 0;
}
