#include <iostream>
#include <cstdio>
#include <vector>
#include <set>
#include <algorithm>
using namespace std;



int main(){
    long long h, w, m;
    cin >> h >> w >> m;

    vector<long long> v1(h ,0);
    vector<long long> v2(w, 0);
    set<pair<long long, long long> > T;

    for(long long i = 0; i < m; i++){
        long long hm, wm;
        cin >> hm >> wm;
        hm--;
        wm--;
        T.insert(make_pair(hm, wm));
        v1[hm]++;
        v2[wm]++;
    }

    vector<long long> index_h;
    vector<long long> index_w;
    long long maxw = 0, maxh = 0;

    for(long long i = 0; i < h; i++) maxh = max(maxh, v1[i]);
    for(long long i = 0; i < w; i++) maxw = max(maxw, v2[i]);

    for(long long i = 0; i < h; i++){
        if(maxh == v1[i]) index_h.push_back(i);
    }
    for(long long i = 0; i < w; i++){
        if(maxw == v2[i]) index_w.push_back(i);
    }

    long long ans = maxh + maxw;

    if(index_h.size() * index_w.size() > m){
        cout << ans << endl;
        return 0;
    }

    bool find = true;
    for(long long y = 0; y < index_h.size(); y++){
        for(long long x = 0; x < index_w.size(); x++){
            if(T.find(make_pair(index_h[y], index_w[x])) == T.end()){
                find = false;
                break;
            }
        }
    }

    if(find == true) ans--;

    cout << ans << endl;
       
    return 0;
}