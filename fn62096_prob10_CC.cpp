#include<iostream>
#include<iomanip>
using namespace std;
int main(){
    double a1, b1, c1, a2, b2, c2, x, y;
    cin>>a1>>b1>>c1>>a2>>b2>>c2;
    float k = a1 * b2, l = a2 * b1, m = c1 * b2, n = c2 * b1, p = a1 * c2, q = a2 * c1;
    if(k - l != 0){
        x = (m - n) / (k - l);
        y = (p - q) / (k - l);
        cout<<setprecision(6)<<x<<" "<<y<<endl;
    }
    if(k - l == 0){
        if(m - n != 0 || p - q != 0)
            cout<<"No solution"<<endl;
        else if(m - n == 0 || p - q == 0)
            cout<<"Many solutions"<<endl;
    }
    return 0;
}

//Формулите за взети от Математически справочник на Боряна Милкоева.
