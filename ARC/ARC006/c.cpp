#include <iostream>
#include <cstdio>
#include <vector>
using namespace std;

int main(){
    int n;
    cin >> n;

    int w[n];

    for(int i = 0; i < n; i++){
        cin >> w[i];
    }

    vector<vector<int> > vv(n);

    int diverse = 0;

    vv[0].push_back(w[0]);

    

    for(int i = 1; i < n; i++){
        bool in = false;
        for(int j = 0; j <= diverse; j++){
            if(vv[j][vv[j].size()-1] >= w[i]){
                vv[j].push_back(w[i]);
                in = true;
                break;
            }
        }
        if(in == false){
            diverse++;
            vv[diverse].push_back(w[i]);
        }
    }

    printf("%d\n", diverse+1);

    return 0;

}