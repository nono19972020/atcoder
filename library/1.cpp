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

cin.ignore();//必要になる場合がある

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
//ユークリッドの互除法 
//gcd(a, b) = gcd(a-b, b)
long long gcd(long long a, long long b) {
   if (a%b == 0) return b;
   else return gcd(b, a%b);
}

//最小公倍数
long long lcm(long long a, long long b) {
   return a * b / gcd(a, b);
}


//区間分割の方法

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

/*約数の個数を求める　O(nlogn)*/
//1からnまでのそれぞれの数の約数の個数を求める
vector<long long> num_divisors_table(long long n){
    vector<long long> table(n+1, 0);

    for(long long i = 1; i <= n; i++){
        for(long long j = i; j <= n; j = j+ i){
            table[j] += 1;
        }
    }
    return table;
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