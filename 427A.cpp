#include <iostream> 

using namespace std;

int main(){
    ios_base::sync_with_stdio(false); cin.tie(nullptr);
    int n; cin >> n;
    int pl = 0, crs = 0;
    while (n--){
        int a; cin >> a;
        if (a>0){
            pl += a;
        } else{
            if (pl==0){
                crs++;
            } else{
                pl--;
            }
        }
    }
    cout << crs;
}