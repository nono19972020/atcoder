#include <iostream>
#include <cstdio>
#include <string>
#include <vector>
using namespace std;

long long find_all(string str, string subStr){
    long long cnt = 0;
    long long subStrSize = subStr.size();
    long long pos = str.find(subStr);

    while(pos != string::npos){
        cnt++;
        pos = str.find(subStr, pos + 1);
    }

    return cnt;
}

int main(){
    long long n;
    cin >> n;
    string t;
    cin >> t;

    long long s_size = 3 * 1e10;

    long long frequency;
    if(n % 3 == 0) frequency = n / 3;
    else frequency = n / 3 + 1;

    string t2;
    for(long long i = 0; i < frequency; i++) t2 += "110";

    //cout << "t2 " << t2 << endl;
    string t3 = t2 + t2;
    //cout << "t3 "  << t3 << endl;
    long long cnt2 = find_all(t2, t);
    long long cnt3 = find_all(t3, t);
    long long cnt4 = cnt3 - 2 * cnt2;

    long long t2_size = t2.size();

    long long ans = 0;
    long long r;
    if(s_size % t2_size == 0){
        //printf("cnt2 %lld\n", cnt2);
        //printf("cnt4 %lld\n", cnt4);
        r = s_size / t2_size;
        //printf("r %lld\n", r);
        ans = cnt2 * r  + cnt4 * (r - 1); 
    }
    else{
        r = s_size / t2_size;
        long long amari = s_size % t2_size;
        string t4 = t2 + t2.substr(0, amari);
        long long cnt5 = find_all(t4, t);
        ans = cnt2 * r + cnt4 * (r - 1) + cnt5 - cnt2;
    }

    cout << ans << endl;
    return 0;
    
}