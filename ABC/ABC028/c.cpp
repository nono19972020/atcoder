#include <iostream>
#include <cstdio>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    int a[5];
    for(int i = 0; i < 5; i++){
        cin >> a[i];
    }
    vector<int> sum;

    for(int i = 0; i < 5; i++){
        for(int j = i + 1; j < 5; j++){
            for(int k = j + 1; k < 5; k++){
                sum.push_back(a[i]+a[j]+a[k]);
            }
        }
    }

    sort(sum.begin(), sum.end(), greater<int>());


    cout << sum[2] << endl;

    return 0;
}