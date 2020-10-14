#include <vector>
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

    y = modpow(y, mod-2);//フェルマーの小定理と逆元を使うことで、計算できない割り算を掛け算にして計算可能にする
    //yで割りたい時はy^(mod-2)を掛ければ良い
    return x*y%mod;//計算可能
}
/*modを使わないコンビネーション　遅いかも*/
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


//nCk の全列挙
template <typename Iterator>
inline bool next_combination(const Iterator first, Iterator k, const Iterator last)
{
   /* Credits: Thomas Draper */
   if ((first == last) || (first == k) || (last == k))
      return false;
   Iterator itr1 = first;
   Iterator itr2 = last;
   ++itr1;
   if (last == itr1)
      return false;
   itr1 = last;
   --itr1;
   itr1 = k;
   --itr2;
   while (first != itr1)
   {
      if (*--itr1 < *itr2)
      {
         Iterator j = k;
         while (!(*itr1 < *j)) ++j;
         iter_swap(itr1,j);
         ++itr1;
         ++j;
         itr2 = k;
         rotate(itr1,j,last);
         while (last != j)
         {
            ++j;
            ++itr2;
         }
         rotate(k,itr2,last);
         return true;
      }
   }
   rotate(first,k,last);
   return false;
}

int main(){
    
    long long  N, K;
    cin >> N >> K;
    vector<long long> v(N);
   
    for(long long i = 0; i < N; i++) v[i] = i+1;
    do{
        
        for(long long i = 0; i < K; i++){
          cout << v[i] << " ";
        }
        cout << endl;

    }while(next_combination(v.begin(),v.begin() + K,  v.end()));
}