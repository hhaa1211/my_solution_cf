#include <iostream>
#include <set>
#include <string>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false); cin.tie(nullptr);
    string s; 
    getline(cin, s);
    set<char> st;
    for (int i=1; i<s.length()-1; i+=3){
        st.insert(s[i]);
    }
    cout << st.size();
}