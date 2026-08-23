#include <iostream>
#include <string>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
    int t; cin >> t;
    while (t--){
        int n; cin >> n;
        string s; cin >> s;
        int x = 0, y = 0;
        bool flag = false;
        for (int i=0; i<n; i++){
            switch(s[i]){
                case 'L':
                    y--; break;
                case 'R':
                    y++; break;
                case 'U':
                    x++; break;
                case 'D':
                    x--; break;
            }
            if (x==1 && y==1){
                flag = true;
                break;
            }
        }
        if (flag){
            cout << "YES\n";
        } else{
            cout << "NO\n";
        }
    }
}