#include <iostream>
#include <cstdio>
#include <vector>
using namespace std;

int main(){
    long long n, d, k;
    cin >> n >> d >> k;
    vector<pair<long long, long long> > day;

    for(long long i = 0; i < d; i++){
        long long l, r;
        cin >> l >> r;
        day.push_back(make_pair(l, r));
    }

    vector<pair<long long, long long> > minzoku;

    for(long long i = 0; i < k; i++){
        long long s, t;
        cin >> s >> t;
        minzoku.push_back(make_pair(s, t));
    }

    vector<long long> goal(k);
    for(long long i = 0; i < k; i++){
        long long s, t;
        s = minzoku[i].first;
        t = minzoku[i].second;
        //printf("s %lld t %lld\n", s, t);
        if(s < t){
            for(long long j = 0; j < d; j++){
                //printf("day[j].first %lld day[j].second %lld\n", day[j].first, day[j].second);
                if(day[j].first <= s and s <= day[j].second){
                    if(day[j].first <= t and t <= day[j].second){
                        goal[i] = j+1;
                        break;
                    }
                    else{
                        s = day[j].second;
                    }
                }
                else{
                    continue;
                }
            }
        }
        else{
            for(long long j = 0; j < d; j++){
                if(day[j].first <= s and s <= day[j].second){
                    if(day[j].first <= t and t <= day[j].second){
                        goal[i] = j+1;
                        break;
                    }
                    else{
                        s = day[j].first;
                    }
                }
                else{
                    continue;
                }
            }
        }
    }

    for(long long i = 0; i < k; i++){
        printf("%lld\n", goal[i]);
    }

    return 0;
}