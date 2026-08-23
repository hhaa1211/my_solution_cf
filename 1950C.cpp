#include <iostream>
#include <string>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr); 
    int t; cin >> t;
    while (t--){
        string s; cin >> s;
        int h = stoi(s.substr(0, 2));
        string m = s.substr(3, 5), ma = (h>=12) ? "PM" : "AM";
        if (h==0){
            h = 12;
        } else if (h>12){
            h -= 12;
        }
        if (h<10){
            cout << '0';
        }
        cout << h << ':' << m << ' ' << ma << '\n';
    }
}