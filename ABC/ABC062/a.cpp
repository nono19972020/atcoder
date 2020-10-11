#include <iostream>
#include <cstdio>
#include <set>
using namespace std;

int main(){
    long long x, y;
    cin >> x >> y;

    set<long long> T1;
    set<long long> T2;
    
    T1.insert(1);
    T1.insert(3);
    T1.insert(5);
    T1.insert(7);
    T1.insert(8);
    T1.insert(10);
    T1.insert(12);

    T2.insert(4);
    T2.insert(6);
    T2.insert(9);
    T2.insert(11);

    if(T1.find(x) != T1.end() and T1.find(y) != T1.end()) printf("Yes\n");
    else if(T2.find(x) != T2.end() and T2.find(y) != T2.end()) printf("Yes\n");
    else printf("No\n");

    return 0;

}