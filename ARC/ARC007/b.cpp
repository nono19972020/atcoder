#include <iostream>
#include <cstdio>
using namespace std;

int main(){
    int n, m;
    cin >> n >> m;

    int disk[m];
    int cases[n+1];

    for(int i = 0; i < m; i++){
        cin >> disk[i];
    }

    for(int i = 0; i <= n; i++){
        cases[i] = i;
    }

    for(int i = 0; i < m; i++){
        int tmp;
        int index;
        for(int j = 0; j<= n; j++){
            if(disk[i] == cases[j]){
                index = j;
            }
        }

        tmp = cases[0];
        cases[0] = cases[index];
        cases[index] = tmp;
    }

    for(int i = 1; i <= n; i++){
        cout << cases[i] << endl;
    }

    return 0;
}