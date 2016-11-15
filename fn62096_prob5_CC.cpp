#include<iostream>
#include<cmath>
using namespace std;
int main(){
    double x = 0, y = 0, tx, ty, dif_x, dif_y, new_tx, new_ty, r1 = 1, r2 = 3, r3 = 8, points = 0;
    cin>>tx>>ty>>dif_x>>dif_y;
    new_tx = tx + dif_x;
    new_ty = ty + dif_y;
    if((pow((new_tx - x), 2) + pow((new_ty - y), 2)) < pow(r1, 2))
        points+=60;
    else if((pow((new_tx - x), 2) + pow((new_ty - y), 2)) > pow(r1, 2) && (pow((new_tx - x), 2) + pow((new_ty - y), 2)) < pow(r2, 2))
        points+=20;
    else if((pow((new_tx - x), 2) + pow((new_ty - y), 2)) > pow(r2, 2) && (pow((new_tx - x), 2) + pow((new_ty - y), 2)) < pow(r3, 2))
        points+=10;
    cout<<points<<endl;
    return 0;
}

// pow((tx - x), 2) + pow((ty - y), 2) >= pow(R, 2) - Формула дали точка принадлежи на кръг, взета от форум на math10.com
