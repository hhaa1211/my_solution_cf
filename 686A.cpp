#include <iostream>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
    long long n, x; cin >> n >> x;
    int ans2 = 0;
    while (n--){
        char o; int i;
        cin >> o >> i;
        if (o=='+'){
            x +=  i;
        } else{
            if (x-i<0){
                ans2++;
            } else{
                x -= i;
            }
        }
    }
    cout << x << ' ' << ans2;
}