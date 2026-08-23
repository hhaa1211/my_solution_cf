#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
    string s; cin >> s;
    int sum = 0;
    char j = 'a';
    for (int i=0; i<s.size(); i++){
        sum += min(abs(s[i]-j), 26-abs(s[i]-j));
        j = s[i];
    }
    cout << sum;
}