#include <iostream>
#include <string>
#include <cctype>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false); cin.tie(nullptr);
    int n; cin >> n;
    string s; cin >> s;
    int a[26] = {0};
    for (char i : s){
        a[tolower(i)-'a'] = 1;
    }
    for (int i : a){
        if (i==0){
            cout << "NO";
            return 0;
        }
    }
    cout << "YES";
}