#include<iostream>
using namespace std;
int main(){
    long long egn;
    int first, second, third, fourth, fifth, sixth, seventh, eighth, ninth, tenth, year, month, day, sum, t_month, t_year;
    string sex;
    cin>>egn;
    tenth = egn % 10;
    egn/=10;
    ninth = egn % 10;
    egn/=10;
    eighth = egn % 10;
    egn/=10;
    seventh = egn % 10;
    egn/=10;
    sixth = egn % 10;
    egn/=10;
    fifth = egn % 10;
    egn/=10;
    fourth= egn % 10;
    egn/=10;
    third = egn % 10;
    egn/=10;
    second = egn % 10;
    egn/=10;
    first = egn % 10;
    year = first*10 + second;
    month = third*10 + fourth;
    day = fifth*10 + sixth;
    t_year = 1900 + year;
    sum = first * 2 + second * 4 + third * 8 + fourth * 5 + fifth * 10 + sixth * 9 + seventh * 7 + eighth * 3 + ninth * 6;
    if(month > 12 && month <=32)
        t_month = month - 20;
    else if(month > 32 && month <= 52)
        t_month = month - 40;
    if(sum == 0 || (sum % 11) != tenth || (sum%11 == 10 && tenth != 0) || ((month == 2 || t_month == 2) && (t_year % 4) != 0 && day > 28) ||
    ((month == 4 || month == 6 || month == 9 || month == 11 || t_month == 4 || t_month == 6 || t_month == 9 || t_month == 11) && day > 30) ||
    (year > 16 && year < 100 && month > 12))
        cout<<"Bad input data!"<<"\n";
    else{
        if(month <= 12){
            if(year < 10)
                if(month < 10)
                    if(day < 10)
                        cout<<"0"<<day<<".0"<<month<<".190"<<year<<" ";
                    else
                        cout<<day<<".0"<<month<<".190"<<year<<" ";
                else
                    cout<<day<<"."<<month<<".190"<<year<<" ";
            else
                if(month < 10)
                    if(day < 10)
                        cout<<"0"<<day<<".0"<<month<<".19"<<year<<" ";
                    else
                        cout<<day<<".0"<<month<<".19"<<year<<" ";
                else
                    cout<<day<<"."<<month<<".19"<<year<<" ";
        }
        else if(month > 12 && month <=32){
            month-= 20;
            if(year < 10)
                if(month < 10)
                    if(day < 10)
                        cout<<"0"<<day<<".0"<<month<<".190"<<year<<" ";
                    else
                        cout<<day<<".0"<<month<<".190"<<year<<" ";
                else
                    cout<<day<<"."<<month<<".190"<<year<<" ";
            else
                if(month < 10)
                    if(day < 10)
                        cout<<"0"<<day<<".0"<<month<<".19"<<year<<" ";
                    else
                        cout<<day<<".0"<<month<<".19"<<year<<" ";
                else
                    cout<<day<<"."<<month<<".19"<<year<<" ";
        }
        else if (month > 32 && month <=52){
            month-=40;
            if(year < 10)
                if(month < 10)
                    if(day < 10)
                        cout<<"0"<<day<<".0"<<month<<".200"<<year<<" ";
                    else
                        cout<<day<<".0"<<month<<".200"<<year<<" ";
                else
                    cout<<day<<"."<<month<<".200"<<year<<" ";
            else
                if(month < 10)
                    if(day < 10)
                        cout<<"0"<<day<<".0"<<month<<".20"<<year<<" ";
                    else
                        cout<<day<<".0"<<month<<".20"<<year<<" ";
                else
                    cout<<day<<"."<<month<<".20"<<year<<" ";
        }
        if(ninth % 2 == 0)
            sex = "M";
        else
            sex = "F";
    }
    cout<<sex;
    return 0;
}
