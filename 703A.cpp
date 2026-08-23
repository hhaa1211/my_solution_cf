#include <iostream>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false); cin.tie(nullptr);
    int n; cin >> n;
    int mi = 0, chri = 0;
    while (n--){
        int m, c; cin >> m >> c;
        if (m>c){
            mi++;
        } else if (c>m){
            chri++;
        }
    }
    if (mi>chri){
        cout << "Mishka";
    } else if (chri>mi){
        cout << "Chris";
    } else{
        cout << "Friendship is magic!^^";
    }
}