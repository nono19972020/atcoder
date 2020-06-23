#include <iostream>
#include <cstdio>
#include <string.h>
#include <vector>
#include <algorithm>
using namespace std;


int main(){
    int n, m;

    cin >> n >> m;

    vector<long long> A;

    int count = 0;

    double  sum = 0;

    //int mm = 0;
    int x;

    for(int i = 0; i < n; i++){
        scanf("%d", &x);
        sum = sum + x;
        A.push_back(x);
    }

    sort(A.begin(), A.end());

    //printf("%f\n", sum / (4*m));

    for(int i = 0; i < n; i++){
        if(A[i] >= (sum / (4*m))){
            count++;
            if(count == m){
                break;
            }
        }
    }

    if(count == m){
        printf("Yes\n");
    }
    else{
        printf("No\n");
    }
    

    return 0;
}