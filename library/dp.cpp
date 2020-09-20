//動的計画法

//ナップサック dp[][][]の項は、ひとつが変数の項で、ほかは制約項
#define n_max  100
#define w_max 10000
int n, w;
int value[n_max+1];
int weight[n_max+1];
int dp[n_max+1][w_max+1];

//dp[n][w]が求めるvalueの最大値

void knap(){
    for(int i = 1; i <= n; i++){
        dp[i][0] = 0;//初期化
    }
    //i番目までの荷物で重さjの価値を求める
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= w; j++){
            if(weight[i] <= j){
                dp[i][j] = max(dp[i-1][j], dp[i-1][j-weight[i]] + value[i]);
            }
            else{
                dp[i][j] = dp[i-1][j];
            }
        }
    }
}

//ナップザック 問題の設定は上と同じだが、 W <= 1e9となっていると上では解けない
//dp[i][j] i番目までの商品で価値j以上となるような最小の重さ　
#include <vector>
long long N, W;
vector<vector<long long> > dp(101, vector<long long>(100001));
vector<long long> w(101);
vector<long long> v(101);

void knap(){
    
    dp.assign(101, vector<long long>(100001, 1e12));//初期化
    dp[0][0] = 0;//商品なし価値0なら最小の重さは0

    for(long long i = 1; i <= N; i++){
        for(long long j = 0; j <= 100000; j++){
            if(v[i] <= j) dp[i][j] = min(dp[i-1][j], dp[i-1][j - v[i]] + w[i]);
            else dp[i][j] = dp[i-1][j];
        }
    }
}

knap();

//価値を最大化したいので、valueをmaxから走査して、初めて重さがW以下になるvalueがans
for(long long value = 100000; value >= 0; value--){
    if(W >= dp[N][value]){
        printf("%lld\n", value);
        return 0;
    }
}

//価値に制限があって重さを最小にするナップサック.価値を最大化する
void knap_value(){
    for(int i = 0; i <= n; i++){
        dp[i][0] = 1e9;
    }
    dp[0][0] = 0;

    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= value_max; j++){
            if(j - value[i] >= 0){
                dp[i][j] = min(dp[i-1][j], dp[i-1][j - value[i]] + weight[i]);
            }
            else{
                dp[i][j] = dp[i-1][j];
            }
        }
    }
}

//個数制限がないナップザック コイン問題と同じ
int n, w;

int main(){
    
    cin >> n >> w;

    int value[n+1], weight[n+1];

    for(int i = 1; i <= n; i++){
        cin >> value[i] >> weight[i];
    }

    int dp[w+1];

    for(int i = 0; i <= w; i++){
        dp[i] = 0;
    }

    for(int i = 1; i <= w; i++){
        for(int j = 1; j <= n; j++){
            if(weight[j] <= i){
                dp[i] = max(dp[i], dp[i-weight[j]]+value[j]);
            }
        }
    }

    printf("%d\n", dp[w]);
    return 0;

}

//コイン問題
int main(){
    int money, m;

    cin >> money >> m;
    vector <int> coin(m);

    for(int i = 0; i < m; i++){
        cin >> coin[i];
    }

    sort(coin.begin(), coin.end());
   
    

    vector <int> dp(money + 1, 1e9);
    dp[0] = 0;

    for(int i = 0; i <= money; i++){
        for(int j = 0; j < m; j++){
            if(i < coin[j]){//0になったら終わりと0以下で終わりの場合がある。
                continue;
            }

            dp[i] = min(dp[i], dp[i-coin[j]]+1);
        }
        //printf("dp %d\n", dp[i]);
    }

    printf("%d\n", dp[money]);

    return 0;

}



//部分和
int main(){
    int n;
    cin >> n;
    int p[n+1];
    int sum = 0;

    for(int i = 1; i <= n; i++){
        cin >> p[i];
        sum = sum + p[i];
    }

    //printf("sum %d\n", sum);

    bool dp[n+1][sum+1];//i番目までの数でsumを作れるかどうか

    
    
    for(int j = 0; j <= sum; j++){
        dp[0][j] = false;
    }
    

    dp[0][0] = true;

    for(int i = 1; i <= n; i++){
        //printf("i %d\n", i);
        for(int j = 0; j <= sum; j++){
            if(j - p[i] >= 0){
                dp[i][j] = (dp[i-1][j-p[i]] | dp[i-1][j]);// | は or
                //printf("a\n");
                //printf("dp[i][j] %d\n", dp[i][j]);
            }
            else{
                dp[i][j] = dp[i-1][j];
                //printf("b\n");
                //printf("dp[i][j] %d\n", dp[i][j]);
            }
        }
    }

    int count = 0;

    for(int j = 0; j <=sum; j++){
        if(dp[n][j] == true){
            count++;
        }
    }

    printf("%d\n", count);

}

//桁dp
#include <iostream>
#include <cstdio>
using namespace std;

int dp[100100][2][101];

int main(){
    int d;
    cin >> d;

    string n;
    cin >> n;

    //printf("input fin\n");

    //printf("n length %d\n", (int)n.length());

    

    /*for(int digit = 0; digit < 10000; digit++){
        for(int smaller = 0; smaller < 2; smaller++){
            for(int modD = 0; modD < 100; modD++){
                dp[digit][smaller][modD] = -1;
            }
        }
    }*/
    dp[0][0][0] = 1;
    //printf("init fin\n");
    for(int digit = 0; digit < n.length(); digit++){
        for(int smaller = 0; smaller < 2; smaller++){
            for(int modD = 0; modD < d; modD++){
                for(int x = 0; x <= (smaller ? 9 : (n[digit]-'0')); x++){
                    dp[digit+1][smaller || x < (n[digit]-'0')][(modD+x)%d] += (dp[digit][smaller][modD])%(1000000007);
                    dp[digit+1][smaller || x < (n[digit]-'0')][(modD+x)%d] = dp[digit+1][smaller || x < (n[digit]-'0')][(modD+x)%d]%1000000007;
                    //printf("%d ", dp[digit+1][smaller || x < (n[digit]-'0')][(modD+x)%d]);
                    //printf("digit %d smaller %d modD %d\n", digit, smaller, modD);
                }
            }
        }
    }

    printf("%d\n", (dp[n.length()][1][0] + dp[n.length()][0][0]- 1 + 1000000007)%1000000007);

    return 0;
}

//lcs 最長共通部分列問題
#include <iostream>
#include <cstdio>
#include <cstring>
using namespace std;
#define len_max 1000


string X;
string Y;
int dp[len_max+1][len_max+1];

int lcs(){
    int m = X.length();
    int n = Y.length();

    X = ' ' + X;//ずらす
    Y = ' ' + Y;
    

    for(int i = 0; i <= n; i++){
        dp[i][0] = 0;
    }

    for(int i = 0; i <= m; i++){
        dp[0][i] = 0;
    }

    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= m; j++){
            if(Y[i] == X[j]){
                dp[i][j] = dp[i-1][j-1] + 1;
            }
            else{
                dp[i][j] = max(dp[i-1][j], dp[i][j-1]);
            }
        }
    }
    return dp[n][m];

}

//lis 最長増加部分列
#define MAX 100000
int n;
int A[MAX+1];
int L[MAX];

int lis(){
    L[0] = A[0];
    int length = 1;

    for(int i = 1; i < n; i++){
        if(L[length-1] < A[i]){
            L[length] = A[i];
            length++;
        }
        else{
            *lower_bound(L, L+length, A[i]) = A[i];
        }
    }
}

//編集距離
int LP[1005][1005];

int main(){
    int j, k;
    string x, y;
    cin >> x >> y;

    for(j = 1; j <= x.size(); j++){
        LP[j][0] = j;
    }
    for(k = 1; k <= y.size(); k++){
        LP[0][k] = k;
    }

    for(j = 1; j <= x.size(); j++){
        for(k = 1; k <= y.size(); k++){
            int m = min(LP[j-1][k] + 1, LP[j][k-1] + 1);//削除、追加
            if(x[j-1] == y[k-1]){
                m = min(LP[j-1][k-1], m);
                LP[j][k] = m;
            }
            else{
                m = min(LP[j-1][k-1] + 1, m);//置換する
                LP[j][k] = m;
            }
        }
    }

    printf("%d\n", LP[x.size()][y.size()]);
    return 0;
}


//配列の1ずつの昇順を位置関係を保存したまま取り出した最大の長さ
long long n;
cin >> n;
vector<long long> p(n);

for(long long i = 0; i < n; i++){
    cin >> p[i];
}

vector<long long> dp(n+1, 0);

long long maxv = 0;

for(long long i = 0; i < n ;i++){
    long long t = p[i];
    dp[t] = dp[t-1] + 1;
}

for(long long i = 0; i <= n ;i++){
    maxv = max(maxv, dp[i]);
}