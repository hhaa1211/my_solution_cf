#include <iostream>
#include <set>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false); cin.tie(nullptr);
    int n; 
    cin >> n;
    set<int> s;
    for (int i=0; i<2; i++){
        int p; cin >> p;
        while (p--){
            int a; cin >> a;
            s.insert(a);
        }
    }
    if (s.size()==n){
        cout << "I become the guy.";
    } else{
        cout << "Oh, my keyboard!";
    }
}