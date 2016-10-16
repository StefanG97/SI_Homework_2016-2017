#include<iostream>
using namespace std;
int main(){
	int x, y;
	cin>>x>>y;
	if (x > 0 && y > 0)
		cout<<"1"<<endl;
	else if (x > 0 && y < 0)
		cout<<"4"<<endl;
	else if (x < 0 && y > 0)
		cout<<"2"<<endl;
	else if (x < 0 && y < 0)
		cout<<"3"<<endl;
	else if(x == 0 && y > 0)
		cout<<"On y between 1 and 2"<<endl;
	else if(x == 0 && y < 0)
		cout<<"On y between 3 and 4"<<endl;
	else if(y == 0 && x > 0)
		cout<<"On x between 1 and 4"<<endl;
	else if(y == 0 && x < 0)
		cout<<"On x between 2 and 3"<<endl;
	else if(x == 0 && y == 0)
		cout<<"In the center"<<endl;
	return 0;
}
