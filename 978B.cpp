#include <iostream>
#include <string>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
    int n; cin >> n;
    string s; cin >> s;
    int ans = 0;
    for (int i=0; i<n; ){
        if (s[i]=='x'){
            int j = 1;
            while (i+j<n && s[i+j]=='x') j++;
            if (j>2){
                ans += j-2;
            }
            i += j;
        } else{
            i++;
        }
    }
    cout << ans;
}