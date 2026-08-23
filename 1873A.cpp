#include <iostream>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false); cin.tie(nullptr);
    int n; cin >> n;
    while (n--){
        string s; cin >> s;
        int nu_f = 0;
        if (s[0]!='a') nu_f++;
        if (s[1]!='b') nu_f++;
        if (s[2]!='c') nu_f++;
        if (nu_f==3){
            cout << "NO \n";
        } else{
            cout << "YES \n";
        }
    }
}