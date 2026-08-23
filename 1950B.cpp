#include <iostream>

using namespace std;

void solve(int n){
    for (int i=0; i<n; i++){
        if (i%2){
            for (int j=0; j<n; j++){
                if (j%2){
                    cout << "##";
                } else{
                    cout << "..";
                }
            }
            cout << '\n';
            for (int j=0; j<n; j++){
                if (j%2){
                    cout << "##";
                } else{
                    cout << "..";
                }
            }
            cout << '\n';
        } else{
            for (int j=0; j<n; j++){
                if (j%2){
                    cout << "..";
                } else{
                    cout << "##";
                }
            }
            cout << '\n';
            for (int j=0; j<n; j++){
                if (j%2){
                    cout << "..";
                } else{
                    cout << "##";
                }
            }
            cout << '\n';
        }
    }
}

int main(){
    ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
    int t; cin >> t;
    while (t--){
        int n; cin >> n;
        solve(n);
    }
}