#include<iostream>
#include<algorithm>
using namespace std;
string Hex_num;
int flag = 0, i = 0, j = 1;;
int toHex (unsigned long long n){
    if(n % 16 != 0){
        int temp = 0;
        temp = n % 16;
        if(temp >=10)
            Hex_num += char(temp + 55);
        else
            Hex_num += char(temp+48);
        n/=16;
        return toHex(n);
    }
    else
        return 0;
}
int check(int counter){
    if(counter != 0){
        if(Hex_num[i] == Hex_num[j])
            flag++;
        i++;
        j++;
        counter--;
        check(counter);
    }
    else
        return 0;
}

int main(){
    unsigned long long num;
    cin>>num;
    toHex(num);
    int counter = Hex_num.length();
    reverse(Hex_num.begin(), Hex_num.end());
    cout<<Hex_num<<endl;
    check(counter);
    if(counter == 1 || flag == counter - 1)
        cout<<"Yes";
    else
        cout<<"No";
    return 0;
}
