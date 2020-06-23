#include <iostream>
#include <cstdio>
#include <set>
using namespace std;

int main(){
    set<int> S;
    int n;
    cin >> n;

    int d;

    for(int i = 0; i < n; i++){
        cin >> d;
        S.insert(d);
    }

    printf("%d\n", S.size());

    return 0;

}