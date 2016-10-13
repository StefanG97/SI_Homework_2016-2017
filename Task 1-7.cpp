#include<iostream>
#include<math.h>
using namespace std;
double area1(double side, double height){
	return (side*height) / 2;
}
double area2(double side_a, double side_b, double side_c){
	double area = 0;
	double half_perimeter = (side_a + side_b + side_c) / 2;
	area = sqrt(half_perimeter*(half_perimeter - side_a) * (half_perimeter - side_b) * (half_perimeter - side_c));
	return area;
}
int main(){
	long double side_a, side_b, side_c, height;
	char choice;
	cin>>choice;
	switch(choice){
		case 'a' : {
			cin>>side_a>>height;
			cout<<"The area of the triangle by a side and height is "<< area1(side_a, height)<<"."<<endl;
			break;
		}
		case 'b' : {
			cin>>side_a>>side_b>>side_c;
			if(side_a + side_b > side_c && side_b + side_c > side_a && side_a + side_c > side_b){
				cout<<"The area of the triangle by three sides is "<<area2(side_a, side_b, side_c)<<"."<<endl;
			}
			else 
				cout<<"The triangle does not exist!"<<endl;
			break;
		}
	} 
	system("PAUSE");
	return 0;
}
