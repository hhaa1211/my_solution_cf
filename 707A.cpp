#include <iostream>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
    int n, m; cin >> n >> m;
    char a[n][m]; 
    for (int i=0; i<n; i++){
        for (int j=0; j<m; j++){
            cin >> a[i][j];
        }
    } 
    int arr[3] = {};
    for (int i=0; i<n; i++){
        for (int j=0; j<m; j++){
            if (a[i][j]=='C'){
                arr[0]++;
            } else if (a[i][j]=='M'){
                arr[1]++;
            } else if (a[i][j]=='Y'){
                arr[2]++;
            }
        }
    }
    bool flag = true;
    for (int i=0; i<3; i++){
        if (arr[i]){
            flag = false;
            break;
        }
    }
    if (!flag){
        cout << "#Color";
    } else{
        cout << "#Black&White";
    }
}