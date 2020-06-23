#include <iostream>
#include <cstdio>
#include <vector>
#include <algorithm>
using namespace std;

matrix[n][n]だとnが大きすぎるとメモリオーバーしてエラーになるので、
2次元ベクトルを使いに必要なところをpushしていく

vector<vector<long long> > v(n+1);
    

    for(long long i = 0; i < m; i++){
        long long a, b;
        cin >> a >> b;
        v[a].push_back(b);
        v[b].push_back(a);

    }

string sで空白ごと標準入力を受け取る方法
getline(cin, s);

ユークリッドの互除法 
long long gcd(long long a, long long b){
  if(b== 0){
    return a;
  }
  return gcd(b, a%b);
}

gcd(a, b) = gcd(a-b, b)
/* 累積和
隣接するk個の和の最大値を求めるときなど
int n;
int a[n];

for(int i = 0; i < n; i++){
    a[i] = i;
}

 //aのi番目までの総和を求める
vector<long> S(N + 1, 0);
for(int i = 0; i < N; i++){
    S[i + 1] = S[i] + a[i];
}
//leftからright番目の和は
S[right] - S[left]
*/

//最大公約数
int gcd(int a, int b)
{
   if (a%b == 0)
   {
       return(b);
   }
   else
   {
       return(gcd(b, a%b));
   }
}

//最小公倍数
int lcm(int a, int b)
{
   return a * b / gcd(a, b);
}



#include <functional>
#include <iostream>

void recursive_comb(int *indexes, int s, int rest, std::function<void(int *)> f) {
  if (rest == 0) {
    f(indexes);
  } else {
    if (s < 0) return;
    recursive_comb(indexes, s - 1, rest, f);
    indexes[rest - 1] = s;
    recursive_comb(indexes, s - 1, rest - 1, f);
  }
}

// nCkの組み合わせに対して処理を実行する
void foreach_comb(int n, int k, std::function<void(int *)> f) {
  int indexes[k];
  recursive_comb(indexes, n - 1, k, f);
}

int main() {
  foreach_comb(5, 3, [](int *indexes) {
    std::cout << indexes[0] << ',' << indexes[1] << ',' << indexes[2] << std::endl;
  });
}

//文字の数字をint型の数字に変換する
int ctoi(const char c){
  switch(c){
    case '0': return 0;
    case '1': return 1;
    case '2': return 2;
    case '3': return 3;
    case '4': return 4;
    case '5': return 5;
    case '6': return 6;
    case '7': return 7;
    case '8': return 8;
    case '9': return 9;
    default : return -1;
  }
}

/*
//bit全探索
bit < (1 << n)が2のn乗

for(int bit = 0; bit < (1 << n); bit++){
  if(bit & (1 << j)){
    
  }
}
*/
区間分割の方法

int count = 0;

    while(1){
       if(*max_element(h.begin(), h.end()) == 0){
           break;
       }

       int i = 0;
       while(i < n){
           if(h[i] == 0){
               i++;
           }
           else{
               count++;
               while(i < n and h[i] != 0){
                   h[i]--;
                   i++;
               }
           }
       } 
    }

bool is_prime(const unsigned n){
    switch(n){
        case 0: // fall-through
        case 1: return false;
        case 2: // fall-through
        case 3: return true;
    } // n > 3 が保証された

    if(n % 2 == 0 || n % 3 == 0) return false;
    // n は 2 と 3 のいずれの倍数でもないことが保証された
    // これより n は (6の倍数)-1 か (6の倍数)+1 である

    // 6の倍数前後の数を使って試し割りをする
    for(unsigned i = 5; i * i <= n; i += 6) {
        if(n % i     == 0) return false; // (6の倍数)-1
        if(n % (i+2) == 0) return false; // (6の倍数)+1
    }

    return true;
}
/*素因数分解の素因数の数を調べる　書き換えれば素因数分解できる*/
 for(long long i = 2; i*i <= g+1; i++){
        if(num % i != 0){
            continue;
        }

        bool first = true;
        while(num % i == 0){
            if(first == true){
                count++;
            }
            first = false;
            num /= i;
        }
    }
    if(num != 1){
        count++;
    }
    /*mapにいれることで高速アクセス可能*/
    map<long long, long long> T;
    long long num;
    for(long long i = 2; i*i <= num+1; i++){
        if(num % i != 0){
            continue;
        }
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
    if(num != 1){
        T[num] = 1;
    }

vector<pair<long long, long long> > prime_factorize(long long n) {
    vector<pair<long long, long long> > res;
    for (long long p = 2; p * p <= n; ++p) {
        if (n % p != 0) continue;
        int num = 0;
        while (n % p == 0) { ++num; n /= p; }
        res.push_back(make_pair(p, num));
    }
    if (n != 1) res.push_back(make_pair(n, 1));
    return res;
}

/*ワーシャルフロイド*/
void warshall_floyd(long long n){
    for(long long k = 0;k < n;k++){ /*経由する頂点*/
        for(long long i = 0;i < n;i++){ /*始点*/
            for(long long j = 0;j < n;j++){ /*終点*/
                d[i][j]=min(d[i][j],d[i][k]+d[k][j]); /*距離*/
            }
        }
    }
}
/*尺取法*/
    long long count = 0;
    long long right = 0;
    long long sum = 0;
    for(long long left = 0; left < n; left++){
        while(right < n and sum < k){
            sum += a[right];
            right++;
        }
        if(sum < k){
            break;
        }

        count += n-right+1;

        if(right == left){
            right++;
        }
        else{
            sum -= a[left];
        }

    }

/*いもす法*/

for (int i = 0; i < T; i++) table[i] = 0;
for (int i = 0; i < C; i++) {
  table[S[i]]++;  // 入店処理: カウントを 1 増やす
  table[E[i]]--;  // 出店処理: カウントを 1 減らす
}
// シミュレート
for (int i = 0; i < T; i++) {
  if (0 < i) table[i] += table[i - 1];
}
// 最大値を調べる
M = 0;
for (int i = 0; i < T; i++) {
  if (M < table[i]) M = table[i];
}
/*累乗計算の高速化
繰り返し二乗法
*/
long long mod = 1e9+7;

long long modpow(long long x, long long n) {
    x = x%mod;
    if(n == 0){
        return 1;
    }
    else if(n%2 == 1){
        return(x*modpow(x, n-1))%mod;
    }
    else{
        return modpow((x*x)%mod, n/2)%mod;
    }
}
/*コンビネーションの高速化
フェルマーの小定理と逆元の利用*/
long long comb(long long n, long long k){
    long long x = 1;

    for(long long i = n-k+1; i <= n; i++){
        x = x*i;
        x = x%mod;
    }
    long long y = 1;
    for(long long i = 1; i <= k; i++){
        y = y*i;
        y = y%mod;
    }

    y = modpow(y, mod-2);

    return x*y%mod;
}

/*約数を求める*/
vector<long long> divisor(long long n) {
    vector<long long> ret;
    for (long long i = 1; i * i <= n; i++) {
        if (n % i == 0) {
            ret.push_back(i);
            if (i * i != n) ret.push_back(n / i);
        }
    }
    sort(ret.begin(), ret.end());
    return ret;
}