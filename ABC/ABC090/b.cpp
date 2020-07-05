#include <iostream>
#include <cstdio>
#include <algorithm>
using namespace std;

int main(){
    long long a, b;
    cin >> a >> b;

    long long count = 0;
    for(long long i = a; i <= b; i++){
        string s = to_string(i);
        string s_r = s;
        reverse(s.begin(), s.end());

        if(s_r == s){
            count++;
        }
    }

    cout << count << endl;
    return 0;
}