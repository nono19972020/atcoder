#include <iostream>
#include <cstdio>
using namespace std;



int main(){
    long long n, m;
    cin >> n >> m;

    long long ball_count[n+1];
    for(long long i = 1; i <= n; i++){
        ball_count[i] = 1;
    }

    bool red[n+1];
    for(long long i = 1; i <= n; i++){
        red[i] = false;
    }
    
    red[1] = true;


    

    for(long long j = 0; j < m; j++){
        long long x, y;
        cin >> x >> y;
        ball_count[x] -= 1;
        ball_count[y] += 1;

        if(red[x] == true){
            red[y] = true;
        }

        if(ball_count[x] == 0){
            red[x] = false;
        }
    }

    long long count = 0;

    for(long long i = 1; i <= n; i++){
        if(red[i] == true and ball_count[i] >= 1){
            count++;
        }
    }
    cout << count << endl;

    return 0;
}