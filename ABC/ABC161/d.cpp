#include <iostream>
#include <cstdio>
#include <string.h>
#include <vector>
#include <queue>
using namespace std;


int main(){

    int k;
    cin >> k;
    queue<long long> q;
    vector<long long> v;
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    q.push(5);
    q.push(6);
    q.push(7);
    q.push(8);
    q.push(9);

    long long x;

    long long a;
    long long b;
    long long c;

    for(int i = 0; i < k; i++){
        x = q.front();
        q.pop();

        v.push_back(x);

        if(x % 10 != 0){
            a = 10 * x + (x % 10) - 1;
            q.push(a);
        }

        b = 10 * x + (x % 10);
        q.push(b);

        if(x % 10 != 9){
            c = 10 * x + (x % 10) + 1;
            q.push(c);
        }
    }

    

    printf("%lld\n", v[k - 1]);

    return 0;




}