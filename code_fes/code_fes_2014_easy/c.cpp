#include <iostream>
#include <cstdio>
#include <vector>
#include <queue>
using namespace std;

struct edge{long long  to, cost;};
typedef pair<long long,long long> P;

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
        d[i] = 1e15;
    }
  }
  void add_edge(long long s, long long t, long long cost){
    edge e;
    e.to = t, e.cost = cost;
    G[s].push_back(e);
  }
  void dijkstra(long long s){
    for(long long i = 0; i < V; i++){
        d[i] = 1e15;
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

int main(){
    long long n, m;
    cin >> n >> m;

    long long s, t;
    cin >> s >> t;

    graph g(n);

    for(long long i = 0; i < m; i++){
        long long x, y, d;
        cin >> x >> y >> d;
        g.add_edge(x-1, y-1, d);
        g.add_edge(y-1, x-1, d);
    }

    //g.dijkstra(s-1);
    //long long dist = g.d[t-1];

    for(long long i = 0; i < n; i++){
        if(i == s-1|| i == t-1){
            continue;
        }

        g.dijkstra(i);
        if(g.d[t-1] == g.d[s-1]){
            if(g.d[s-1] == 1e15) continue;
            cout << i + 1 << endl;
            return 0;
        }
    }
    printf("-1\n");
    return 0;
}