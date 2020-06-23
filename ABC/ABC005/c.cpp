#include <iostream>
#include <cstdio>
using namespace std;

int main(){
    int t, n, m;

    cin >> t;
    cin >> n;

    int a[n];//たこ焼き
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }

    cin >> m;
    int b[m];//お客
    for(int i = 0; i < m; i++){
        cin >> b[i];
    }

    int i = 0;
    int j = 0;

    
    while(i < n and j < m){
        if(a[i] <= b[j] and b[j] <= a[i] + t){
            i++;
            j++;    
        }
        else{
            i++;
        }
    }

    //printf("j %d\n", j);

    if(j == m){
        printf("yes\n");
    }
    else{
        printf("no\n");
    }

    
    return 0;

}