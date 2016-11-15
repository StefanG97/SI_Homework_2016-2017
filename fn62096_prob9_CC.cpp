#include<iostream>
using namespace std;
int oper = 0, a, b;
int overload(){
    if(oper > 15){
        oper-=16;
        overload();
    }
    else
        return 0;
}
int a_overload(){
    if(a > 15){
        a-=16;
        a_overload();
    }
    else
        return 0;
}
int b_overload(){
    if(b > 15){
        b-=16;
        b_overload();
    }
    else
        return 0;
}
int main(){
    char operation;
    cin>>a>>operation>>b;
    switch(operation){
        case '+' : {
            a_overload();
            b_overload();
            oper = a + b;
            if(oper > 15){
                oper-=16;
                cout<<oper;
            }
            else
                cout<<oper;
            break;
        }
        case '-' : {
            a_overload();
            b_overload();
            oper = a - b;
            if(oper < 0){
                oper+=16;
                cout<<oper;
            }
            else
                cout<<oper;
            break;
        }
        case '*' : {
            a_overload();
            b_overload();
            oper = a * b;
            overload();
            cout<<oper;
            break;
        }
        case '/' : {
            if(b == 0)
                cout<<"Division by zero!";
            else{
                a_overload();
                b_overload();
                oper = a / b;
                cout<<oper;
            }
            break;
        }
        case '%' : {
            if(b == 0)
                cout<<"Division by zero!";
            else{
                a_overload();
                b_overload();
                oper = a % b;
                cout<<oper;
            }
            break;
        }
    }

    return 0;
}
