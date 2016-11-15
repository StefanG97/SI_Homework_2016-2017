#include<iostream>
using namespace std;
int main(){
    int money, temp = 0;
    cin>>money;
    if(money / 50 != 0){
        cout<<money<< " = " << money / 50 << "*50";
        money%=50;
    }
    if(money / 20 != 0){
        cout<<" + "<<money / 20 << "*20";
        money%=20;
    }
    if(money / 10 != 0){
        cout<<" + "<<money / 10<< "*10";
        money%=10;
    }
    if(money / 5 != 0){
        cout<<" + "<<money / 5<< "*5";
        money%=5;
    }
    if(money / 2 != 0){
        cout<<" + "<<money / 2 << "*2";
        money%=2;
    }
    if(money != 0)
        cout<<" + "<<money << "*1" << "\n";
    return 0;
}
