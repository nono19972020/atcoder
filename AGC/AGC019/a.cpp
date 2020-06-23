#include <iostream>
#include <cstdio>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    long long q, h, s, d, n;
    cin >> q >> h >> s >> d >> n;

    
    vector<pair<double, double> > v;

    //printf("%lld\n",d/2);

    v.push_back(make_pair((double)4*q, 0.25));
    v.push_back(make_pair((double)2*h, 0.5));
    v.push_back(make_pair((double)s, 1));
    v.push_back(make_pair((double)d/2, 2));

    sort(v.begin(), v.end());

    if(n >= 2 and v[0].second != 2){
        long long ans = n*((long long)v[0].first);
        printf("%lld\n", ans);
    }
    if(n >= 2 and v[0].second == 2){
        if(n % 2 == 0){
            long long ans = d*(n/2);
            printf("%lld\n", ans);
        }
        else{
            long long ans = d*(n/2) + (long long)v[1].first;
            //printf("d/2 %lld\n", d*(n/2));
            //printf("v[1].second %f\n", v[1].second);
            //printf("%f\n", (long long)(1/v[1].second)*v[1].first);
            printf("%lld\n", ans);
        }
    }
    if(n == 1){
        if(v[0].second != 2){
            long long ans = n*((long long)v[0].first);
            printf("%lld\n", ans);
        }
        else{
            long long ans = n*((long long)v[1].first);
            printf("%lld\n", ans);
        }
    }

    return 0;

}