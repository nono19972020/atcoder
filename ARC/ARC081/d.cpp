#include <iostream>
#include <cstdio>
using namespace std;

long long mod = 1e9+7;

int main(){
    long long n;
    cin >> n;
    string s1, s2;
    cin >> s1 >> s2;

    long long i = 0;
    long long ans = 1;
    while(i < n){
        if(i == 0){
            if(s1[i] == s2[i]){
                ans = ans*3;
                ans = ans%mod;
                i++;
            }
            else{
                ans = ans*6;
                ans = ans%mod;
                i = i + 2;
            }
        }
        else{
            if(s1[i] == s2[i]){
                if(s1[i-1] == s2[i-1]){
                    ans = ans*2;
                    ans = ans%mod;
            
                }
                i++;
            }
            else{
                if(s1[i-1] == s2[i-1]){
                    ans = ans*2;
                    ans = ans%mod;
                }
                else{
                    ans = ans*3;
                    ans = ans%mod;
                }
                i = i+2;
            }
        }
    }
    cout << ans << endl;
    return 0;
}