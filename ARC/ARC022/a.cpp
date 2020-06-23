#include <iostream>
#include <cstdio>
using namespace std;

int main(){
    string s;
    cin >> s;
    string t;

    for(long long i = 0; i < s.size(); i++){
        if(s[i] == 'i' || s[i] == 'I' || s[i] == 'c' || s[i] == 'C' || s[i] == 't' || s[i] == 'T'){
            t.push_back(s[i]);
        }
    }
   

    for(long long i = 0; i < t.size(); i++){
        for(long long j = i+1; j < t.size(); j++){
            for(long long k = j+1; k < t.size(); k++){
                if((t[i] == 'i' || t[i] == 'I') and (t[j] == 'c' || t[j] == 'C') and (t[k] == 't' || t[k] == 'T')){
                    printf("YES\n");
                    return 0;
                }
            }
        }
    }

    printf("NO\n");
   
    return 0;
}