#include <iostream>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false); cin.tie(nullptr);
    int n; cin >> n;
    int a[n]; 
    for (int i=0; i<n; i++){
        cin >> a[i];
    }
    int id_min = 0;
    int id_max = 0;
    for (int i=0; i<n; i++){
        if (a[i]<=a[id_min]){
            id_min = i;
        }
        if (a[i]>a[id_max]){
            id_max = i;
        }
    }
    int res = id_max+n-id_min-1;
    if (id_max>id_min) res--;
    cout << res;
}