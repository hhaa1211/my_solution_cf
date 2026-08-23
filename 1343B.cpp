#include <iostream>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false); cin.tie(nullptr);
    int t; cin >> t;
    while (t--){
        int n; cin >> n;
        if ((n/2)%2==1){
            cout << "NO";
        } else{
            cout << "YES\n";
            int c = 2;
            int sum_c = 0;
            for (int i=0; i<n/2; i++){
                cout << c << ' ';
                sum_c += c;
                c += 2;
            }
            int l = 1;
            int sum_l = 0;
            for (int i=0; i<n/2-1; i++){
                cout << l << ' ';
                sum_l += l;
                l += 2;
            }
            cout << sum_c-sum_l;
        }
        cout << endl;
    }
}