#include <iostream>

using namespace std;

int  main(){
    ios_base::sync_with_stdio(false); cin.tie(nullptr);
    int n; cin >> n;
    while (n--){
        int t; cin >> t;
        string s; cin >> s;
        int a[26] = {0};
        for (char i : s){
            a[i-'A']++;
        }
        int khac = 0;
        for (int i : a){
            if (i!=0){
                khac++;
            }
        }
        int res = t+khac;
        cout << res << endl;
    }
}
