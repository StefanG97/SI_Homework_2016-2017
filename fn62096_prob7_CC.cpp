#include<iostream>
#include<cmath>
using namespace std;
int main(){
    double tx, ty, r1 = 1, r2 = 3, r3 = 6;
    cin>>tx>>ty;
    if((pow(tx, 2) + pow(ty, 2)) >= pow(r3, 2))
        cout<<"Neutral"<<endl;
    else if((pow((tx), 2) + pow((ty - 3), 2)) == pow(r1, 2))
        cout<<"Neutral"<<endl;
    else if((pow((tx), 2) + pow((ty + 3), 2)) == pow(r1, 2))
        cout<<"Neutral"<<endl;
    else if(tx > 0 && (pow((tx), 2) + pow((ty - 3), 2)) == pow(r2, 2))
        cout<<"Neutral"<<endl;
    else if(tx < 0 && (pow((tx), 2) + pow((ty + 3), 2)) == pow(r2, 2))
        cout<<"Neutral"<<endl;
    else if((pow((tx), 2) + pow((ty - 3), 2)) < pow(r1, 2))
        cout<<"Evil"<<endl;
    else if((pow((tx), 2) + pow((ty + 3), 2)) < pow(r1, 2))
        cout<<"Good"<<endl;
    else if((pow(tx, 2) + pow((ty - 3),2))> pow(r1, 2) && (pow(tx, 2) + pow((ty - 3),2))< pow(r2, 2))
        cout<<"Good"<<endl;
    else if((pow(tx, 2) + pow((ty + 3),2))> pow(r1, 2) && (pow(tx, 2) + pow((ty + 3),2))< pow(r2, 2))
        cout<<"Evil"<<endl;
    else if(tx > 0 && (pow(tx, 2) + pow((ty + 3), 2)) > pow(r1, 2) && (pow(tx, 2) + pow((tx - 3), 2)) > pow(r2, 2) && (pow(tx, 2) + pow(ty, 2)) < pow(r3, 2))
        cout<<"Evil"<<endl;
    else if(tx < 0 && (pow(tx, 2) + pow((ty - 3), 2)) > pow(r1, 2) && (pow(tx, 2) + pow((tx + 3), 2)) > pow(r2, 2) && (pow(tx, 2) + pow(ty, 2)) < pow(r3, 2))
        cout<<"Good"<<endl;
    return 0;
}


// pow((tx - x), 2) + pow((ty - y), 2) >= pow(R, 2) - Формула дали точка принадлежи на кръг, взета от форум на math10.com
