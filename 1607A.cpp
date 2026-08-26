#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr); 
    int t; cin >> t;
    while (t--){
        string s; cin >> s;
        string t; cin >> t;
        int a[26];
        for (int i=1; i<=s.size(); i++){
            a[s[i-1]-'a'] = i;
        }
        int sum = 0;
        for (int i=0; i<t.size()-1; i++){
            sum += abs(a[t[i+1]-'a']-a[t[i]-'a']);
        }
        cout << sum << '\n';
    }
}