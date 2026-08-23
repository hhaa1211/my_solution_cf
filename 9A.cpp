#include <iostream>

using namespace std;

int gcd(int x, int y){
    while (y){
        int tmp = x%y;
        x = y;
        y = tmp;
    }
    return x;
}

int main(){
    ios_base::sync_with_stdio(false); cin.tie(nullptr);
    int y, w;
    cin >> y >> w;
    int tu = 6-max(y, w)+1;
    int mau = 6;
    cout << tu/gcd(tu, mau) << '/' << mau/gcd(tu, mau);
}