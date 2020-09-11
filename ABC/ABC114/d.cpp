#include <iostream>
#include <cstdio>
#include <map>
#include <vector>
using namespace std;

long long comb(int n, int r) {
  vector<vector<long long> > v(n + 1,vector<long long>(n + 1, 0));
  for (int i = 0; i < v.size(); i++) {
    v[i][0] = 1;
    v[i][i] = 1;
  }
  for (int j = 1; j < v.size(); j++) {
    for (int k = 1; k < j; k++) {
      v[j][k] = (v[j - 1][k - 1] + v[j - 1][k]);
    }
  }
  return v[n][r];
}

int main(){
    long long n;
    cin >> n;
    map<long long, long long> T;
    for(long long j = 1; j <= n; j++){
        long long num = j;
        for(long long i = 2; i * i <= num; i++){
            if(num % i != 0) continue;

            while(num % i == 0){
                if(T.find(i) == T.end()){
                    T[i] = 1;
                    num /= i;
                }
                else{
                    T[i]++;
                    num /= i;
                }
            }
        }
        if(num != 1 and T.find(num) == T.end()) T[num] = 1;
        else if(num != 1 and T.find(num) != T.end()) T[num]++;
    }

    long long cnt_2 = 0, cnt_4 = 0, cnt_14 = 0, cnt_24 = 0, cnt_74 = 0;
    map<long long, long long>::iterator it;
    for(it = T.begin(); it != T.end(); it++){
        if(it->second >= 2) cnt_2++;
        if(it->second >= 4) cnt_4++;
        if(it->second >=14) cnt_14++;
        if(it->second >= 24) cnt_24++;
        if(it->second >= 74) cnt_74++;
    }

    /*
    printf("cnt_2 %lld cnt_4 %lld cnt_14 %lld cnt_24 %lld\n", cnt_2, cnt_4, cnt_14, cnt_24);

    for(it = T.begin(); it != T.end(); it++){
        cout << it->first << " " << it->second << endl;
    }
    */

    long long ans = 0;

    if(cnt_2 > 2 and cnt_4 >= 2) ans += comb(cnt_2 - 2, 1) * comb(cnt_4, 2);
    if(cnt_2 > 1 and cnt_24 >= 1) ans += comb(cnt_2 - 1, 1) * comb(cnt_24, 1);
    if(cnt_4 > 1 and cnt_14 >= 1) ans += comb(cnt_4 - 1, 1) * comb(cnt_14, 1); 
    
    ans += cnt_74;
    cout << ans << endl;
    return 0;
}