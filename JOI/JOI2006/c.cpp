#include <iostream>
#include <cstdio>
#include <set>
using namespace std;

int main(){
    long long n;
    cin >> n;

    set<pair<long long, long long> > T;
    for(long long i = 0; i < n; i++){
        long long x, y;
        cin >> x >> y;
        T.insert(make_pair(x, y));
    }

    long long maxv = 0;
    for(set<pair<long long, long long> >::iterator it1 = T.begin(); it1 != T.end(); it1++){
        for(set<pair<long long, long long> >::iterator it2 = it1; it2 != T.end(); it2++){
            long long x1 = it2->first - it2->second + it1->second;
            long long y1 = it2->second + it2->first - it1->first;

            long long x2 = it1->first - it2->second + it1->second;
            long long y2 = it1->second + it2->first - it1->first;

            if(T.find(make_pair(x1, y1)) != T.end() and T.find(make_pair(x2, y2)) != T.end()) maxv = max(maxv, (it1->first - it2->first) * (it1->first - it2->first) + (it1->second - it2->second) * (it1->second - it2->second)); 
        }
    }

    cout << maxv << endl;
    return 0;
}