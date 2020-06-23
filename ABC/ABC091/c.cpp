#include <iostream>
#include <cstdio>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    int n;

    cin >> n;

    vector<pair<int, int> > r;
    vector<pair<int, int> > b;

    for(int i = 0; i < n; i++){
        int x, y;
        cin >> x >> y;
        r.push_back(make_pair(x, y));
    }
    for(int i = 0; i < n; i++){
        int x, y;
        cin >> x >> y;
        b.push_back(make_pair(x, y));
    }

    
    int count = 0;

    //sort(r.begin(), r.end());
    sort(b.begin(), b.end());
    for(int j = 0; j < b.size(); j++){
        int max_y = -1;
        int index;
        for(int i = 0; i < r.size(); i++){
            if(b[j].first > r[i].first and b[j].second > r[i].second){
                if(max_y < r[i].second){
                    max_y = r[i].second;
                    index = i;
                }
            }
        }
        if(max_y != -1){
            r.erase(r.begin()+index);
            count++;
        }
    }

    printf("%d\n", count);

    return 0;

}