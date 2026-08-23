#include <iostream>

using namespace std;

bool isprime(int x){
    if (x<2){
        return false;
    } 
    for (int i=2; i<x; i++){
        if (x%i==0){
            return false;
        }
    }
    return true;
}

int main(){
    ios_base::sync_with_stdio(false); cin.tie(nullptr);
    int n, m; cin >> n >> m;
    int flag = 1;
    for (int i=n+1; i<=m; i++){
        if (isprime(i)){
            if (i==m){
                cout << "YES";
            } else{
                cout << "NO";
            }
            flag = 0;
            break;
        }
    }
    if (flag) {
        cout << "NO";
    }
}