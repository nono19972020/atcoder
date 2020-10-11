#include <iostream>
#include <cstdio>
#include <vector>
#include <set>
using namespace std;

int main(){
    long long n;
    cin >> n;

    vector<long long> p(n);
    for(long long i = 0; i < n; i++) cin >> p[i];

    vector<bool> find(300000, false);
    vector<long long> ans(n);
    long long start = 0;
    for(long long i = 0; i < n; i++){
        if(start < p[i]){
            find[p[i]] = true;
            ans[i] = start;
        }
        else if(start == p[i]){
            find[start] = true;
            while(start < 300000 and find[start] == true){
                start++;
            }
            //printf("start %lld\n", start);
            ans[i] = start;
        }
        else{
            ans[i] = start;
        }
    }
    for(long long i = 0; i < n; i++){
        cout << ans[i] << endl;
    }
    return 0;
}