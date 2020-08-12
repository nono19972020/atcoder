#include <iostream>
#include <cstdio>
#include <vector>
#include <algorithm>
using namespace std;

/*vector pairのソートの基準を自分でつくる場合
aが前の要素、bが後の要素
*/
bool compair(pair<long long, long long> a, pair<long long, long long> b){
    if(a.first != b.first){
        return a.first > b.first;
    }
    else{
        return a.second > b.second;
    }
}

int main(){
    long long n, m;
    cin >> n >> m;

    vector<pair<long long, long long> > job(n);

    for(long long i = 0; i < n; i++) cin >> job[i].first >> job[i].second;

    sort(job.begin(), job.end(), compair);

    for(long long i = 0; i < n; i++){
        printf("%lld %lld\n", job[i].first, job[i].second);
    }
    return 0;
}