#include <iostream>
#include <string>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false); cin.tie(nullptr);
    int n; cin >> n;
    string ex = "codeforces";
    while (n--){
        string s; cin >> s;
        int res = 0;
        for (int i=0; i<10; i++){
            if (s[i]!=ex[i]){
                res++;
            }
        }
        cout << res << endl;
    }
}