#include <iostream>

using namespace std;

bool solve(bool a[], int n){
    for (int i=0; i<n; i++){
        if (a[i]==true){
            continue;
        }
        a[i] = true;
        bool flag = false;
        for (int j=i+1; j<n; j++){
            if (a[j]==false && (i+j)%4==3){
                flag = true;
                a[j] = true;
                break;
            }
        }
        if (!flag){
            return true;
        }
    }
    return false;
}

int main(){
    ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
    int t; cin >> t;
    while (t--){
        int n; cin >> n;
        bool a[n];
        for (int i=0; i<n; i++){
            a[i] = false;
        }
        if (solve(a, n)){
            cout << "Alice\n";
        } else{
            cout << "Bob\n";
        }
    }
}