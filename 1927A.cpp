#include <iostream>
#include <string>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
    int t; cin >> t;
    while (t--){
        int n; cin >> n;
        string s; cin >> s;
        int i = 0, j = n-1;
        while (i<n && s[i]=='W') i++;
        while (j>-1 && s[j]=='W') j--;
        cout << j-i+1 << '\n';
    }
}