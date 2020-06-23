#include <iostream>
#include <string>
#include <cstdio>
#include <set>
using namespace std;



int main(){
    int n;
    string str;
    set<string> arr;
    cin >> n;

    for(int i = 0; i < n; i++){
        cin >> str;
        arr.insert(str);
    }

    printf("%lu\n", arr.size());

    return 0;

    
}