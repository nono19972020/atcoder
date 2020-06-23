#include <iostream>
#include <cstdio>
#include <vector>
using namespace std;

int main(){
    long long x[5];
    cin >> x[0] >> x[1] >> x[2] >> x[3] >> x[4];

    long long count;
    for(long long i = 0; i < 5; i++){
        if(x[i] == 0){
            count = i+1;
        }
    }

    cout << count << endl;
    return 0;

}