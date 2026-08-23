#include <iostream>
#include <cctype>

using namespace std; 

int main(){
    ios_base::sync_with_stdio(false); cin.tie(nullptr);
    int t; cin >> t;
    while (t--){
        char c; cin >> c;
        c = tolower(c);
        switch (c){
            case 'c': case 'o': case 'd': case 'e': case 'f': case 'r': case 's':
                cout << "YES\n";
                break;
            default:
                cout << "NO\n";
        }
    }
}