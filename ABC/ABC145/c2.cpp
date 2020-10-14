#include <iostream>
#include <cstdio>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

int main(){
    long long n;
    cin >> n;

    vector<pair<long double, long double> > v(n);
    for(long long i = 0; i < n; i++) cin >> v[i].first >> v[i].second;

    sort(v.begin(), v.end());
    long double cnt = 0;
    do{
        long double sum = 0;
        for(long long i = 0; i < n; i++){
            if(i+1 < n) sum += sqrt((v[i].first - v[i+1].first) * (v[i].first - v[i+1].first) + (v[i].second - v[i+1].second) * (v[i].second - v[i+1].second));
        }
        //printf("sum %.10Lf\n", sum);
        cnt += sum;
    }while(next_permutation(v.begin(), v.end()));

    long double ans;
    long double mod = 1;
    for(long long i = 1; i <= n; i++) mod *= i;
    
    ans = cnt / mod;
    //printf("mod %Lf\n", mod);
    printf("%.10Lf\n", ans);
    return 0;
}