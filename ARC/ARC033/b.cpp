#include <iostream>
#include <cstdio>
#include <set>
#include <algorithm>
using namespace std;

int main(){
    long long na, nb;
    cin >> na >> nb;

    set<long long> result;
    set<long long> sa;
    set<long long> sb;
    set<long long> share;

    for(long long i = 0; i < na; i++){
        long long a;
        cin >> a;
        sa.insert(a);
        share.insert(a);
    }
    for(long long i = 0; i < nb; i++){
        long long b;
        cin >> b;
        sb.insert(b);
        share.insert(b);
    }
    set_intersection(sa.begin(), sa.end(), sb.begin(), sb.end(), inserter(result, result.end()));

    double ans = (double)result.size()/(double)share.size();

    printf("%.10f\n", ans);

    return 0;

}