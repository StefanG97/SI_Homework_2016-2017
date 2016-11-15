#include<iostream>
#include<cmath>
using namespace std;
int main(){
int row_att, row_king, col_att, col_king;
char figure, column_att, column_king;
cin>>figure>>column_att>>row_att>>column_king>>row_king;
col_att = int(column_att) - 96;
col_king = int(column_king) - 96;
switch(figure){
    case 'R':{
        if(column_att == column_king || row_att == row_king)
            cout<<"Yes";
        else
            cout<<"No";
        break;
    }
    case 'B' :{
        if(abs(col_king - col_att) == abs(row_king - row_att))
            cout<<"Yes";
        else
            cout<<"No";
        break;
    }
     case 'Q' :{
        if(abs(col_king - col_att) == abs(row_king - row_att) || column_att == column_king || row_att == row_king)
            cout<<"Yes";
        else
            cout<<"No";
        break;
    }
    case 'N' :{
        if((abs(col_king - col_att) == 2 && abs(row_king - row_att) == 1) || (abs(col_king - col_att) == 1 && abs(row_king - row_att) == 2))
            cout<<"Yes";
        else
            cout<<"No";
        break;
    }

}
return 0;
}

