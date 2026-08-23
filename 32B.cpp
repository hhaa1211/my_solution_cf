#include <iostream>
#include <string>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false); cin.tie(nullptr);
    string s; cin >> s;
    string res = "";
    for (int i=0; i<s.length();){
        if (s[i]=='.'){
            res += '0';
            i++;
        } else if (s[i]=='-'){
            if (s[i+1]=='.'){
                res += '1';
            } else{
                res += '2';
            }
            i += 2;
        }
    }
    cout << res;
}