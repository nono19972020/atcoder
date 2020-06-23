#include <iostream>
#include <cstdio>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    int n;
    cin >> n;

    vector<int> money(n+1);
    vector<vector<int> > buka(n+1);

    for(int i = 2; i <= n; i++){
        int b;
        cin >> b;
        buka[b].push_back(i);
    }

    for(int i = n; i >= 1; i--){
        if(buka[i].size() == 0){
            money[i] = 1;
        }
        else{
            vector<int> buka_money;
            for(int j = 0; j < buka[i].size(); j++){
                buka_money.push_back(money[buka[i][j]]);
            }

            sort(buka_money.begin(), buka_money.end());

            money[i] = buka_money[0] + buka_money[buka_money.size()-1] + 1;

        }
        //printf("check %d money %d\n", i, money[i]);
    }

    printf("%d\n", money[1]);

    return 0;

}