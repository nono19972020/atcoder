#include <iostream>
#include <cstdio>
#include <vector>
#include <set>
using namespace std;

/*cycle検知の問題
これはABC179 e
類似問題 ABC167 d
*/

long long f(long long x, long long m){
    return (x *x) % m;
}

int main(){
    long long n, x, m;
    cin >> n >> x >> m;

    //cycleのstartを検知
    set<long long> T;
    long long now = x;
    long long start;
    for(long long i = 0; i < m; i++){
        if(T.find(now) == T.end()) T.insert(now);
        else{
            start = now;
            break;
        }
        now = f(now, m);
    }

    //cycleが始まるdistを求める
    //cycleの要素をloopに格納
    bool find = false;
    vector<long long> loop;
    long long dist = 0;
    now = x;
    for(long long i = 0; i < m; i++){
        if(now == start and find == false){
            find = true;
            dist = i;
        }
        else if(now == start and find == true) break;

        if(find == true){
            loop.push_back(now);
        }
        
        now = f(now, m);
    }

    //1cycleの総和を求める
    long long fre = 0;
    for(long long i = 0; i < loop.size(); i++) fre += loop[i];

    long long ans = 0;
    if(n <= dist) {
        //試行回数nがdist以下なら普通に求める
        now = x;
        for(long long i = 0; i < n; i++){
            ans += now;
            now = f(now, m);
        }
    }
    else{
        //cycleを利用する

        //distまでの和を求める
        now = x;
        for(long long i = 0; i < dist; i++){
            ans += now;
            now = f(now, m);
        }

        //cycleの回数を求める
        long long r = (n-dist)/((long long)loop.size());
        //cycleでの余りを求める
        long long amari = (n-dist) % ((long long)loop.size());

        //ansに足す
        ans += fre * r;
        for(long long i = 0; i < amari; i++) ans += loop[i];
    }

    cout << ans << endl;
    return 0;
}