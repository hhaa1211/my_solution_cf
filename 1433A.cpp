#include <iostream>
#include <string>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false); cin.tie(nullptr);
    int t; cin >> t;
    int a[4] = {1, 2, 3, 4};
    while (t--){
        string s; cin >> s;
        int n = s.length()%4;
        int res = (s[0]-'0'-1)*(1+2+3+4);
        if (n==0){
            res += 10;
        } else{
            res += n*(n+1)/2;
        }
        cout << res << endl;
    }
}