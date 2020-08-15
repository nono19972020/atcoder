
//bit全探索
bit < (1 << n)が2のn乗

for(int bit = 0; bit < (1 << n); bit++){
  if(bit & (1 << mask)){
    bitをmaskに被せた時の処理を書く
  }

  //問題文の処理を書く
}


#include <iostream>
#include <cstdio>
#include <vector>
using namespace std;

int main(){
    long long n;
    cin >> n;

    long long f[n][5][2];
    long long p[n][11];

    for(long long i = 0; i < n; i++){
        for(long long j = 0; j < 5; j++){
            for(long long k = 0; k < 2; k++){
                cin >> f[i][j][k];
            }
        }
    }

    for(long long i = 0; i < n; i++){
        for(long long j = 0; j < 11; j++){
            cin >> p[i][j];
        }
    }

    vector<bool> open(10, false);
    vector<bool> close(10, false);
    long long maxv = -1e15;

    for(long long bit = 0; bit < (1 << 10); bit++){
      //bitを被せる数だけ被せる
        for(long long mask = 0; mask < 10; mask++){
          //bitを被せた時にそのものをmaskとしてどうするかを書く 店を開けるかどうかやスイッチをon/off
          //bitとmaskの数は同じ
            if(bit & (1 << mask)) open[mask] = true;
            else open[mask] = false;
        }
        //問題文の処理を書く
        if(open == close) continue;

        long long money = 0;
        for(long long i = 0; i < n; i++){
            long long cnt = 0;
            for(long long j = 0; j < 5; j++){
                for(long long k = 0; k < 2; k++){
                    if(f[i][j][k] == 1 and open[j + 5*k] == true) cnt++;
                }
            }
            money += p[i][cnt];
        }
        maxv = max(maxv, money);
    }
    cout << maxv << endl;
    return 0;
}