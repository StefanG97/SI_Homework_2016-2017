#include<iostream>
#include<math.h>
#include<iomanip>
#define pi 3.14159265
using namespace std;
double circleSurface(double x){
	return pi * pow(x, 2);
}
int main(){
	double Radius;
	cin>>Radius;
	cout<<setprecision(100)<<circleSurface(Radius)<<endl;
	return 0;
}
