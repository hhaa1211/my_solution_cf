#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false); cin.tie(nullptr);
    int n; cin >> n;
    cin.ignore();
    while (n--){
        string s; 
        getline(cin, s);
        swap(s[0], s[4]);
        cout << s << endl;
    }
}