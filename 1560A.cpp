#include <iostream>

using namespace std;

int a[1001];

void init(){
    int j = 1, i = 1;
    while (j<=1000){
        if (i%3!=0 && i%10!=3){
            a[j] = i;
            j++;
        }
        i++;
    }
}

int main(){
    ios_base::sync_with_stdio(false); cin.tie(nullptr);
    init();
    int n; cin >> n;
    while (n--){
        int n; cin >> n;
        cout << a[n] << endl;
    }
}