#include <iostream>
#include <cstdio>
#include <vector>
using namespace std;

int main(){
    string s;
    cin >> s;


    long long i = 0;

    vector<long long> ans(s.size(), 0);

    while(i < s.size()){
        long long start_r = i;
        long long count_even = 0, count_odd = 0;
        while(i < s.size() and s[i] == 'R'){
            if(i % 2 == 0){
                count_even++;
            }
            else{
                count_odd++;
            }
            i++;
        }
        long long end_r = i-1;
        long long start_l = i;

        while(i < s.size() and s[i] == 'L'){
            if(i % 2 == 0){
                count_even++;
            }
            else{
                count_odd++;
            }
            i++;
        }
        long long end_l = i-1;

        if(end_r % 2 == 0){
            ans[end_r] = count_even;
            ans[start_l] = count_odd;
        }
        else{
            ans[end_r] = count_odd;
            ans[start_l] = count_even;
        }

    }

    for(long long j = 0; j < ans.size(); j++){
        printf("%lld ", ans[j]);
    }

    printf("\n");

    return 0;

}