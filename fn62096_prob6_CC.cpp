#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int x1, y1, x2, y2, x3, y3, x4, y4, h1, h2, w1, w2, h3, w3, ans;
    cin>>x1>>y1>>h1>>w1>>x3>>y3>>h2>>w2;
    y2 = y1 + h1;
    x2 = x1 + w1;
    y4 = y3 + h2;
    x4 = x3 + w2;
    h3 = (abs(x1 - x2) + abs(x3 - x4) - abs(min(x1, x3) - max(x2, x4)));
    w3 = (abs(y1 - y2) + abs(y3 - y4) - abs(min(y1, y3) - max(y2, y4)));
    ans = h3 * w3;
    if(ans < 0)
        cout<<"0"<<"\n";
    else
        cout<<ans<<endl;
    return 0;
}
