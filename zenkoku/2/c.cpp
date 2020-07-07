#include <iostream>
#include <cstdio>
#include <vector>
#include <algorithm>
using namespace std;

bool compair1(pair<pair<long long, long long>, long long> a, pair<pair<long long, long long>, long long> b){
   if(a.first.second == b.first.second){
       return a.first.first > b.first.first;
   }
   else{
       return a.first.second > b.first.second;
   }
}

bool compair2(pair<pair<long long, long long>, long long> a, pair<pair<long long, long long>, long long> b){
   if(a.first.first== b.first.first){
       return a.first.second > b.first.second;
   }
   else{
       return a.first.first > b.first.first;
   }
}

int main(){
    long long n;
    cin >> n;

    vector<pair<pair<long long, long long>, long long> > v1(n);
    vector<pair<pair<long long, long long>, long long> > v2(n);
    for(long long i = 0; i < n; i++){
        cin >> v1[i].first.first >> v1[i].first.second;
        v2[i].first.first = v1[i].first.first;
        v2[i].first.second = v1[i].first.second;
        v1[i].second = i;
        v2[i].second = i;

    }

    sort(v1.begin(), v1.end(), compair1);
    sort(v2.begin(), v2.end(), compair2);
    long long count = 0;
    long long index_a = 0, index_b = 0;
    long long sum_a = 0, sum_b = 0;
    vector<bool> menu(n, false);


    while(1){
        if(count == n){
            break;
        }
        if(count % 2 == 0){
            while(menu[v1[index_a].second] == true){
                index_a++;
            }
            sum_a += v1[index_a].first.first;
            menu[v1[index_a].second] = true;
        }
        else{
            while(menu[v2[index_b].second] == true){
                index_b++;
            }
            sum_b += v2[index_b].first.second;
            menu[v2[index_b].second] = true;
        }
        count++;
    } 

    cout << sum_a - sum_b << endl;
    return 0;
}