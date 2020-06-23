#include <iostream>
#include <cstdio>
#include <algorithm>
using namespace std;

int main(){
    int n;

    cin >> n;

    int v[n];

    for(int i = 0; i < n; i++){
        v[i] = i+1;
    }

    int p[n], q[n];

    for(int i = 0; i < n; i++){
        cin >> p[i];
    }
    for(int i = 0; i < n; i++){
        cin >> q[i];
    }

    int a, b;
    int j = 1;
    do{
        bool flag_p = true;
        for(int i = 0; i < n; i++){
            if(v[i] != p[i]){
                flag_p = false;
                break;
            }
        }
        if(flag_p == true){
            a = j;
        }

        bool flag_q = true;
        for(int i = 0; i < n; i++){
            if(v[i] != q[i]){
                flag_q = false;
                break;
            }
        }
        if(flag_q == true){
            b = j;
        }

        j++;
    }while(next_permutation(v, v+n));

    cout << abs(a-b) << endl;

    return 0;

}