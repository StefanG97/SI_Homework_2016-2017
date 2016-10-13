#include <iostream>
#include<math.h>
#include<algorithm>
using namespace std;
bool case1 (int p){
	if(p % 4 == 0 || p % 7 == 0)
		return true;
	else
		return false;
} 

bool case2 (int a, int b, int c){
	double d = pow(b , 2) - (4*a*c);
	if(d < 0)
		return true;
	else if (d >= 0)
		return false;
}

bool case3(int a, int b){
	double distance = pow((0 - a), 2) + pow((1 - b), 2);
	if(distance < 25)
		return true;
	else if(distance >= 25)
		return false;
}

bool case4(int a, int b, int c, int d, int f){
	double distance = pow((a - c), 2) + pow((b - d), 2);
	if(distance < pow(f, 2))
		return false;
	else if(distance >= pow(f, 2))
		return true;
}

bool case5(int a, int b){
	double distance = pow(a , 2) + pow(b , 2);
	if(a <= 0 && b <= 0 && distance <= 25)
		return true;
	else
		return false;
}

bool case6(int a, int b){
	double distance = pow(a, 2) + pow(b, 2);
	if(distance >= 25 && distance <= 100)
		return true;
	else
		return false;
}

bool case7(int x){
	if(x >= 0 && x <= 1)
		return true;
	else
		return false;
}
bool case8(int x, int a, int b, int c){
	int temp_max = max(a,b);
	temp_max = max(temp_max, c);
	if(x == temp_max)
		return true;
	else
		return false;	
}

bool case9(int x, int a, int b, int c){
	int temp_max = max(a,b);
	temp_max = max(temp_max, c);
	if(x == temp_max)
		return false;
	else
		return true;	
}

bool case10(bool x, bool y){
	if(x == true || y == true)
		return true;
	else
		return false;
}

bool case11(bool x, bool y){
	if(x == true && y == true)
		return true;
	else
		return false;
}

bool case12(double a, double b, double c){
	if(a < 0 && b < 0 && c < 0)
		return true;
	else
		return false;
}

bool case13(int a){
int flag = 0, b[3], temp;
	for(int i = 0; i < 3; i++){
			temp = a % 10;
			b[i] = temp;
			a/=10;
		}
		for(int i = 0;i < 3;i++)
				if(b[i] == 7)
					flag = 1;
		if(flag == 1)
			return true;
		else
			return false;
}

bool case14(int a){
	int flag = 0, b[3], temp;
	for(int i = 0; i < 3; i++){
			temp = a % 10;
			b[i] = temp;
			a/=10;
		}
		for(int i = 0;i < 3;i++)
			for(int j = 1; j<3 ; j++)
				if(b[i] == b[j])
					flag = 1;
		if(flag == 1)
			return false;
		else
			return true;
}

bool case15(int a){
int flag = 0, b[3], temp;
	for(int i = 0; i < 3; i++){
			temp = a % 10;
			b[i] = temp;
			a/=10;
		}
		for(int i = 0;i < 3;i++)
			for(int j = 1; j<3 ; j++)
				if(b[i] == b[j])
					flag = 1;
		if(flag == 1)
			return true;
		else
			return false;
}

bool case16(int a){
	int b, c, d;
	b = a%10;
	a/=10;
	c = a%10;
	a/=10;
	d = a%10;
	if(d > c && d > b && c > b)
		return true;
	else if(d < c && d < b && c < b)
		return true;
	else 
		return false;
}

bool case17(int x, int y){
	int a, b, c, d;
	a = x%10;
	x/=10;
	b = x%10;
	c = y%10;
	y/=10;
	d = y%10;
	if(b == c && a == d)
		return true;
	else 
		return false;
}

bool case18(int x){
	int flag = 0;
	for(int i = 2; i<sqrt(x); i++)
		if(x % i == 0){
			flag = 1;
			break;
		}
	if(flag == 1)
		return false;
	else
		return true;
}
int main(){
	bool answer;
	char choice;
	cin>>choice;
	switch(choice){
		case 'a' :{
			int p;
			cin>>p;
			cout<<case1(p)<<endl;
			break;
		}
		case 'b' :{
			int a, b, c;
			cin>>a>>b>>c;
			cout<<case2(a, b, c)<<endl;
			break;
		}
		case 'c' :{
			int a, b;
			cin>>a>>b;
			cout<<case3(a, b)<<endl;
			break;
		}
		case 'd' :{
			int a, b, c, d, f;
			cin>>a>>b>>c>>d>>f;
			cout<<case4(a, b, c, d, f)<<endl;
			break;
		}
		case 'e' :{
			int a, b;
			cin>>a>>b;
			cout<<case5(a, b)<<endl;
			break;
		}
		case 'f' :{
			int a, b;
			cin>>a>>b;
			cout<<case6(a, b)<<endl;
			break;
		}
		case 'g' :{
			int x;
			cin>>x;
			cout<<case7(x)<<endl;
			break;
		}
		case 'h' :{
			int x, a, b, c;
			cin>>x>>a>>b>>c;
			cout<<case8(x, a, b, c)<<endl;
			break;
		}
		case 'i' :{
			int x, a, b, c;
			cin>>x>>a>>b>>c;
			cout<<case9(x, a, b, c)<<endl;			
			break;
		}
		case 'j' :{
			bool x, y;
			cin>>x>>y;
			cout<<case10(x, y)<<endl;
			break;
		}
		case 'k' :{
			bool x, y;
			cin>>x>>y;
			cout<<case11(x, y)<<endl;
			break;
		}
		case 'l' :{
			double a, b, c;
			cin>>a>>b>>c;
			cout<<case12(a, b, c)<<endl;
			break;
		}
		case 'm' :{
			int m;
			cin>>m;
			if(m < 100 || m > 999)
				cout<<"Invalid input!"<<endl;
			else
				cout<<case13(m)<<endl;
			break;
		}
		case 'n' :{
			int m;
			cin>>m;
			if(m < 100 || m > 999)
				cout<<"Invalid input!"<<endl;
			else
				cout<<case14(m)<<endl;
			break;
		}
		case 'o' :{
			int m;
			cin>>m;
			if(m < 100 || m > 999)
				cout<<"Invalid input!"<<endl;
			else
				cout<<case15(m)<<endl;
			break;
		}
		case 'p' :{
			int x;
			cin>>x;
			if(x < 100 || x > 999)
				cout<<"Invalid input!"<<endl;
			else
				cout<<case16(x)<<endl;
			break;
		}
		case 'r':{
			int x, y;
			cin>>x>>y;
			if(x < 100 || x > 999 || y < 100 || x > 999)
				cout<<"Invalid input!"<<endl;
			else
				cout<<case17(x, y)<<endl;
			break;
		}
		case 's':{
			int x;
			cin>>x;
			if(x >= 23)
				cout<<"Invalid input!"<<endl;
			else{
				cout<<case18(x)<<endl;
			}
			break;
		}
	}
	return 0;
}

