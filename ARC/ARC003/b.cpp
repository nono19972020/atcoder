#include <iostream>
#include <cstdio> 
#include <set>
#include <algorithm>
using namespace std;

int main(){
    int n;
    cin >> n;
    set<string> T;

    for(int i = 0; i < n; i++){
        string s;
        cin >> s;
        reverse(s.begin(), s.end());
        T.insert(s);
    }

    set<string>::iterator it;
    for(it = T.begin(); it != T.end(); it++){
        string s = *it;
        reverse(s.begin(), s.end());
        cout << s << endl;
    }

    return 0;

}