#include <iostream>
#include <cstdio>
using namespace std;

int main(){
    string s;
    cin >> s;

    long long count = 0;

    for(long long i = 0; i < s.size(); i++){
        if(i == 0 || i == s.size()-1){
            count += s.size()-1; 
            continue;
        }

        if(s[i] == 'U'){
            count += (s.size()-i-1) + 2*(i);
        }
        else{
            count += (i) + 2*(s.size()-i-1);
        }
    }

    printf("%lld\n", count);

    return 0;
}