#include <iostream>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
    int t; cin >> t;
    while (t--){
        char a[3][3];
        int k = -1;
        for (int i=0; i<3; i++){
            for (int j=0; j<3; j++){
                cin >> a[i][j];
                if (a[i][j]=='?'){
                    k = i;
                }
            }
        }
        int b[3] = {};
        for (int i=0; i<3; i++){
            if (a[k][i]!='?'){
                b[a[k][i]-'A']++;
            }
        }
        for (int i=0; i<3; i++){
            if (b[i]==0){
                cout << (char)(i+'A') << '\n';
                break;
            }
        }
    }
}