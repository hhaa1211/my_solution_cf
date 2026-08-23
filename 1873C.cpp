#include <iostream>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false); cin.tie(nullptr);
    int n; cin >> n;
    int arr_p[10][10] = {
        {1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
        {1, 2, 2, 2, 2, 2, 2, 2, 2, 1},
        {1, 2, 3, 3, 3, 3, 3, 3, 2, 1},
        {1, 2, 3, 4, 4, 4, 4, 3, 2, 1},
        {1, 2, 3, 4, 5, 5, 4, 3, 2, 1},
        {1, 2, 3, 4, 5, 5, 4, 3, 2, 1},
        {1, 2, 3, 4, 4, 4, 4, 3, 2, 1},
        {1, 2, 3, 3, 3, 3, 3, 3, 2, 1},
        {1, 2, 2, 2, 2, 2, 2, 2, 2, 1},
        {1, 1, 1, 1, 1, 1, 1, 1, 1, 1}
    };
    for (int i=0; i<n; i++){
        int res = 0;
        for (int j=0; j<10; j++){
            string s; cin >> s;
            for (int k=0; k<10; k++){
                if (s[k]=='X'){
                    res += arr_p[j][k];
                }
            }
        }
        cout << res << endl;
    }
}