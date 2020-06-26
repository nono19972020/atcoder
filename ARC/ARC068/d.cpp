#include <iostream>
#include <cstdio>
#include <vector>
#include <set>
using namespace std;

int main(){
    long long n;
    cin >> n;

    vector<long long> a(n);
    set<long long> T;

    for(long long i = 0; i < n; i++){
        cin >> a[i];
        T.insert(a[i]);
    }

    if(T.size() % 2 != 0){
        cout << T.size() << endl;
    }
    else{
        cout << T.size()-1 << endl;
    }
    return 0;
}