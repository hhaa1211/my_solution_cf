#include <iostream>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false); cin.tie(nullptr);
    int n; cin >> n;
    int a[n];
    for (int &i : a) cin >> i;
    int i = 0, j = n-1, se = 0, di = 0;
    bool turn = true;
    while (i <= j){
        if (a[i]>a[j]){
            if (turn) {
                se += a[i];
            } else{
                di += a[i];
            }
            i++;   
        } else {
            if (turn){
                se += a[j];
            } 
            else{
                di += a[j];
            } 
            j--;   
        }
        turn = !turn;
    }
    cout << se << " " << di;
}