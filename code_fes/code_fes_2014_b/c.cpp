#include <iostream>
#include <cstdio>
#include <vector>
using namespace std;

int main(){
    string s1, s2, s3;
    cin >> s1 >> s2 >> s3;

    vector<long long> cnt_s1(26, 0);
    vector<long long> cnt_s2(26, 0);
    vector<long long> cnt_s3(26, 0);

    long long n = s1.size()/2;

    for(long long i = 0; i < s1.size(); i++){
        cnt_s1[s1[i]-'A']++;
        cnt_s2[s2[i]-'A']++;
        cnt_s3[s3[i]-'A']++;
    }

    long long minv = 0;
    long long maxv = 0;
    for(long long i = 0; i < 26; i++){
        minv += max(0ll, cnt_s3[i]-cnt_s2[i]);
        maxv += min(cnt_s1[i], cnt_s3[i]);
    }

    if(minv <= n and n <= maxv) printf("YES\n");
    else printf("NO\n");
    return 0;
}