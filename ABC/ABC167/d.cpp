#include <iostream>
#include <cstdio>
#include <cstring>
#include <vector>
#include <queue>
#include <set>
#include <algorithm>
using namespace std;

long long vector_finder(std::vector<long long> vec, long long number) {
  std::vector<long long>::iterator itr = std::find(vec.begin(), vec.end(), number);
  size_t index = std::distance( vec.begin(), itr );
  if (index != vec.size()) { // 発見できたとき
    return index;
  }
  else { // 発見できなかったとき
    return -1;
  }
}

int main(){
    long long n, k;
    cin >> n >> k;

    long long a[n+1];

    for(long long i = 1; i <= n; i++){
        cin >> a[i];
    }

    /*if(k < n){
        long long mati = 1;
        for(long long i = 1; i <= k; i++){
            mati = a[mati];
        }
        printf("%lld", mati);

        return 0;
    }*/

    vector <long long> v;
    v.push_back(1);
    long long next = a[1];
    long long t = 0;
    long long index;
    long long j = 0;
    //printf("now 1\n");
    while(j < 1000000){
        if(vector_finder(v, next) == -1){
            v.push_back(next);
            //printf("now %lld\n", next);
            next = a[next];
            j++;
            
        }
        else{
            index = vector_finder(v, next);
            t = v.size() - index;
            //printf("next %lld\n", next);
            //printf("v size %lu\n", v.size());
            //printf("index %lld\n", index);
            break;
        }
    }

    if(t == 0){
        long long mati = 1;
        for(long long i = 1; i <= k; i++){
            mati = a[mati];
        }
        printf("%lld", mati);

        return 0;

    }

    //printf("t %lld\n", t);

    long long amari = (k - index) % t + index + 1;

    printf("%lld\n", a[amari]);    

    return 0;


    
}