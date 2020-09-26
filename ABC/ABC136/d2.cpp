#include <iostream>
#include <cstdio>
#include <vector>
using namespace std;

int main(){
    string s;
    cin >> s;

    long long n = s.size();
    long long i = 0;
    vector<long long> ans(n ,0);
    long long right = 0;
    long long left = 0;
    
    while(i < n){
        if(s[i] == 'R'){
            long long start = i;
            long long cnt_even = 0;
            long long cnt_odd = 0;
            right = i;
    
            while(i < n and s[i] == 'R'){
                if(i % 2 == 0) cnt_even++;
                else cnt_odd++;

                right = i;
                i++;
            }

            left = i;

            while(i < n and s[i] == 'L'){
                if(i % 2 == 0) cnt_even++;
                else cnt_odd++;
                i++;
            }
            
            if(left % 2 == 0){
                ans[left] = cnt_even;
                ans[right] = cnt_odd;
            }
            else{
                ans[left] = cnt_odd;
                ans[right] = cnt_even;
            }
            
        }
    }

    for(long long i = 0; i < n; i++){
        if(i == n-1) printf("%lld\n", ans[i]);
        else printf("%lld ", ans[i]);
    }
    return 0;
}