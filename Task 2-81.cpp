#include<iostream>
using namespace std;
void isPerfect(unsigned long long int x){
	unsigned long long int sum = 0, j;
	for(unsigned long long int i = 1; i <= x; i++){
		j = 1;
		while(j <= (i/2) ){
			if(i % j == 0)
				sum += j;
			j++;
		}
		if(sum == i)
			cout<<i<<" ";
		sum = 0;
	}	
}
int main(){
    unsigned long long int range;
    cin>>range;
    isPerfect(range);
    return 0;
}

