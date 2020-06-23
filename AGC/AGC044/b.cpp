#include <iostream>
#include <cstdio>
#include <queue>
using namespace std;
long long n;
long long p[500*500];
bool empty_seat[500][500] = {false};
bool visit[500][500] = {false};

template<typename A, size_t N, typename T>
void Fill(A (&array)[N], const T &val){
    std::fill( (T*)array, (T*)(array+N), val );
}

void init_visit(){
    for(long long i = 0; i < 500; i++){
        for(long long j = 0; j < 500; j++){
            visit[i][j] = false;
        }
    }
}

long long distance_cal(long long y, long long x){

    long long count = 0;
    long long min_dis;
    for(long long i = 0; i < x; i++){
        if(empty_seat[y][i] == false){
            count++;
        }
    }
    min_dis = count;

    count = 0;
    for(long long i = x+1; i < n; i++){
        if(empty_seat[y][i] == false){
            count++;
        }
    }
    min_dis = min(min_dis, count);
    
    count = 0;
    for(long long i = 0; i < y; i++){
        if(empty_seat[i][x] == false){
            count++;
        }
    }
    min_dis = min(min_dis, count);

    count = 0;
    for(long long i = y+1; i < n; i++){
        if(empty_seat[i][x] == false){
            count++;
        }
    }
    min_dis = min(min_dis, count);

    return min_dis;
}

int main(){
    
    cin >> n;

    for(long long i = 0; i < n*n; i++){
        cin >> p[i];
        p[i] -= 1;

    }

    queue<pair<long long, long long> >q;

    long long count = 0;
    for(long long i = 0; i < n*n; i++){
        empty_seat[p[i]/n][p[i]%n] = true;
        //init_visit();
        Fill(visit, false);
        visit[p[i]/n][p[i]%n] = true;
        long long min_dis;
        q.push(make_pair(p[i]/n, p[i]%n));
        min_dis = distance_cal(p[i]/n, p[i]%n);
        //printf("min_dis %lld y %lld x %lld\n", min_dis, p[i]/n, p[i]%n);
        while(!q.empty()){
            pair<long long, long long> top = q.front();
            q.pop();
            if(top.first - 1 >= 0 and empty_seat[top.first-1][top.second] == true and visit[top.first-1][top.second] == false){
                min_dis = min(min_dis, distance_cal(top.first-1, top.second));
                q.push(make_pair(top.first-1, top.second));
                visit[top.first-1][top.second] = true;
            }

            if(top.first+1 < n and empty_seat[top.first+1][top.second] == true and visit[top.first+1][top.second] == false){
                min_dis = min(min_dis, distance_cal(top.first+1, top.second));
                q.push(make_pair(top.first+1, top.second));
                visit[top.first+1][top.second] = true;
            }

            if(top.second - 1 >= 0 and empty_seat[top.first][top.second-1] == true and visit[top.first][top.second-1] == false){
                min_dis = min(min_dis, distance_cal(top.first, top.second-1));
                q.push(make_pair(top.first, top.second-1));
                visit[top.first][top.second-1] = true;
            }

            if(top.second+1 < n and empty_seat[top.first][top.second+1] == true and visit[top.first][top.second+1] == false){
                min_dis = min(min_dis, distance_cal(top.first, top.second+1));
                q.push(make_pair(top.first, top.second+1));
                visit[top.first][top.second+1] = true;
            }

        }
        count += min_dis;
       
    }

    cout << count << endl;

    return 0;
    
}