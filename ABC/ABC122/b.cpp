#include <iostream>
#include <cstdio>

using namespace std;

int main(){
    string s;
    cin >> s;

    long long n;
    long long i = 0;
    n = s.size();
    long long maxv = 0;
    while(i < n){
        if(s[i] == 'A' || s[i] == 'T' || s[i] == 'C' || s[i] == 'G'){
            long long length  = 0;
            while(i < n and(s[i] == 'A' || s[i] == 'T' || s[i] == 'C' || s[i] == 'G')){
                i++;
                length++;
            }
            maxv = max(maxv, length);
           
        }
        i++;
    }

    cout << maxv << endl;
    return 0;
}