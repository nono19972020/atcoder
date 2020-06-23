#include <iostream>
#include <cstdio>
#include <vector>
#include <algorithm>
using namespace std;


long long n;

long long lis(long long *a){
    
    long long l[n];
    l[0] = a[0];
    long long length = 1;
    for(long long i = 1; i < n; i++){
        if(l[length-1] < a[i]){
            l[length] = a[i];
            length++;
        }
        else{
            *lower_bound(l, l+length, a[i]) = a[i];
        }
    }

    //printf("length %d\n", length);

    return length;
}

bool compair(pair<long, long> a, pair<long, long> b){
    if(a.first == b.first){
        return a.second > b.second;
    }
    else{
        return a.first < b.first;
    }
}

int main(){
    

    cin >> n;

    vector<pair<long long, long long> > v;

    for(long long i = 0; i < n; i++){
        long long w, h;
        cin >> w >> h;
        v.push_back(make_pair(w, h));
    }

    sort(v.begin(), v.end(), compair);//firstで昇順に並べる

    long long W[n], H[n];

    for(long long i = 0; i < n; i++){
        W[i] = v[i].first;
        H[i] = v[i].second;
    }
    //printf("n %d\n", n);

    long long length = min(lis(W), lis(H));     

    printf("%lld\n", length);

    return 0;

}