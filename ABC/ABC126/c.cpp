#include <iostream>
#include <cstdio>
#include <cmath>
using namespace std;
int n, k;

int counter(int point){
    int count = 0;
    while(point < k){
        point = point * 2;
        count++;
    }
    
    return count;
}

int main(){
    cin >> n >> k;

    double pro = 0.0;
    double half = 0.5;
    double first_p = 1.0 / (double) n; 

    for(int i = 1; i <= n; i++){
        
        pro = pro + first_p * pow(half, counter(i));
    }

    printf("%.20f\n", pro);

    return 0;
}