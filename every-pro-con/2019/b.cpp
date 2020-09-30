#include <iostream>
#include <cstdio>
#include <vector>
using namespace std;

int main(){
    vector<long long> cnt(4, 0);
    for(long long i = 0; i < 3; i++){
        long long a, b;
        cin >> a >> b;
        cnt[a-1]++;
        cnt[b-1]++;
    }

    long long cnt_1 = 0;
    long long cnt_2 = 0;

    for(long long i = 0; i < 4; i++){
        if(cnt[i] == 1) cnt_1++;
        else if(cnt[i] == 2) cnt_2++;
    }

    if(cnt_1 == 2 and cnt_2 == 2) printf("YES\n");
    else printf("NO\n");

    return 0; 
}