#include <iostream>
#include <cstdio>
using namespace std;

int main(){
    int h1, m1, h2, m2, k;
    cin >> h1 >> m1 >> h2 >> m2 >> k;

    int hour = h2-h1;
    int minute = m2-m1;

    int time = hour*60 + minute - k;

    if(time < 0){
        time = 0;
    }

    cout << time << endl;

    return 0;
}