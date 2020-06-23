#include <iostream>
#include <cstdio>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    long long n, m;

    cin >> n >> m;

    

    vector <long long> v(m);

    
    for(long long i = 0; i < m; i++){
        cin >> v[i];
    }

    /*if(m == 1){
        printf("0\n");
        return 0;
    }*/

    sort(v.begin(), v.end());

    /*for(int i = 0; i < m; i++){
        printf("v[i] %d\n", v[i]);
    }*/

    long long sum = v[m-1] - v[0];

    if(n >= m){
        printf("0\n");
        return 0;
    }

    //printf("sum %d\n", sum);

    vector <long long> distance(m-1);

    

    for(long long i = 0; i < m-1; i++){
        distance[i] = v[i+1] - v[i];
        //printf("distance[i] %d\n", distance[i]);
    }

    sort(distance.begin(), distance.end());
    reverse(distance.begin(), distance.end());

    /*for(int i = 0; i < m-1; i++){
        //printf("sort distance[i] %d\n", distance[i]);
    }*/

    long long avoid = 0;
    for(long long i = 0; i < n-1; i++){
        avoid += distance[i];
        //printf("avoid %d\n", avoid);
    }

    printf("%lld\n", sum - avoid);

    return 0;


}