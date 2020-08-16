#include <iostream>
#include <cstdio>
#include <vector>
#include <queue>
using namespace std;

/*ワーシャルフロイド*/
//全ての組み合わせに対して求める
void warshall_floyd(long long n){
    for(long long k = 0;k < n;k++){ /*経由する頂点*/
        for(long long i = 0;i < n;i++){ /*始点*/
            for(long long j = 0;j < n;j++){ /*終点*/
                d[i][j]=min(d[i][j],d[i][k]+d[k][j]); /*距離*/
            }
        }
    }
}

/*ワーシャルフロイド　経路復元*/
//a[i][j]は最短経路である
//他の頂点を軽油して距離が同じなら(i, j)間の道はいらない
//sumはb[i][j] == 0であるa[i][j]を全部足して2で割ればでる
for(long long k = 0; k < n; k++){
        for(long long i = 0; i < n; i++){
            for(long long j = 0; j < n; j++){
                if(i != j and j != k and k != i and a[i][j] == a[i][k] + a[k][j]) b[i][j] = 1;
            }
        }
}

/*ダイクストラ法*/
//始点sに対して求める
//使い方 graph g(n) n頂点のグラフ作成
// g.add_edge(a, b, cost) g.add_edge(b, a, cost) コストcの辺を加える
// g.dijkstra(s) 頂点sから各頂点の最短経路を求める
// long long dist = g.d[i] 頂点sから頂点iまでの最短距離
//autoのwarningは無視しても大丈夫 
struct edge{long long  to, cost;};
typedef pair<long long,long long> P;

long long INF = 1e15;
struct graph{
  long long V;
  vector<vector<edge> > G;
  vector<long long> d;

  graph(long long n){
      init(n);
  }
  void init(long long n){
    V = n;
    G.resize(V);
    d.resize(V);
    for(long long i = 0; i < V; i++){
        d[i] = INF;
    }
  }
  void add_edge(long long s, long long t, long long cost){
    edge e;
    e.to = t, e.cost = cost;
    G[s].push_back(e);
  }
  void dijkstra(long long s){
    for(long long i = 0; i < V; i++){
        d[i] = INF;
    }
    d[s] = 0;
    priority_queue<P,vector<P>, greater<P> > que;
    que.push(P(0,s));
    while(!que.empty()){
      P p = que.top(); que.pop();
      long long v = p.second;
      if(d[v]<p.first) continue;
      for(auto e : G[v]){
        if(d[e.to]>d[v]+e.cost){
          d[e.to] = d[v]+e.cost;
          que.push(P(d[e.to],e.to));
        }
      }
    }
  }
};
