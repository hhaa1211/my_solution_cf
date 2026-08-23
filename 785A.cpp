#include <iostream>
#include <map>
#include <string>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false); cin.tie(nullptr);
    int n; cin >> n;
    int res = 0;
    map<string, int> m = {{"Tetrahedron", 4}, {"Cube", 6}, {"Octahedron", 8}, {"Dodecahedron", 12}, {"Icosahedron", 20}};
    while (n--){
        string s; cin >> s;
        res += m[s];
    }
    cout << res;
}