#include<iostream>
using namespace std;
int main(){
    int a,a1=0,a2=0,a3=0,a4=0;
    cin>>a;
    if(a <= 0 || a >3000)
        cout<<"Invalid number!";
    else{
        a1=a% 10;
        a/=10;
        a2= a % 10;
        a/=10;
        a3= a % 10;
        a/=10;
        a4= a % 10;
        switch(a4){
            case 1 :
                cout<<"M";
                break;
            case 2 :
                cout<<"MM";
                break;
            case 3 :
                cout<<"MMM";
                break;
        }
        switch(a3){
            case 1 :
                cout<<"C";
                break;
            case 2 :
                cout<<"CC";
                break;
            case 3 :
                cout<<"CCC";
                break;
            case 4 :
                cout<<"CD";
                break;
            case 5 :
                cout<<"D";
                break;
            case 6 :
                cout<<"DC";
                break;
            case 7 :
                cout<<"DCC";
                break;
            case 8 :
                cout<<"DCCC";
                break;
            case 9 :
                cout<<"CM";
                break;
        }
        switch(a2){
            case 1 :
                cout<<"X";
                break;
            case 2 :
                cout<<"XX";
                break;
            case 3 :
                cout<<"XXX";
                break;
            case 4 :
                cout<<"XL";
                break;
            case 5 :
                cout<<"L";
                break;
            case 6 :
                cout<<"LX";
                break;
            case 7 :
                cout<<"LXX";
                break;
            case 8 :
                cout<<"LXXX";
                break;
            case 9 :
                cout<<"XC";
                break;
        }
        switch(a1){
            case 1 :
                cout<<"I";
                break;
            case 2 :
                cout<<"II";
                break;
            case 3 :
                cout<<"III";
                break;
            case 4 :
                cout<<"IV";
                break;
            case 5 :
                cout<<"V";
                break;
            case 6 :
                cout<<"VI";
                break;
            case 7 :
                cout<<"VII";
                break;
            case 8 :
                cout<<"VIII";
                break;
            case 9 :
                cout<<"IX";
                break;
        }
    }
    cout<<endl;
    return 0;
}
