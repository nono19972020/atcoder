#include <iostream>
#include <cstdio>
#include <cstring>
#include <vector>
#include <queue>
#include <set>
#include <algorithm>
using namespace std;

int main(){
    string s, t;
    cin >> s >> t;

    int n = s.length();
    bool flag = true;
    for(int i = 0; i < n; i++){
        if(s[i] != t[i]){
            flag = false;
            break;
        }
    }

    if(flag == true){
        printf("Yes\n");
    }
    else{
        printf("No\n");
    }

    return 0;

}