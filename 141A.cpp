#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false); cin.tie(nullptr);
    string s1, s2, s3;
    cin >> s1 >> s2 >> s3;
    string s12 = s1+s2;
    sort(s12.begin(), s12.end());
    sort(s3.begin(), s3.end());
    if (s12==s3){
        cout << "YES";
    } else{
        cout << "NO";
    }
}