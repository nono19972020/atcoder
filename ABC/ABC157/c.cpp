#include <iostream>
#include <cstdio>
#include <map>
using namespace std;

int main(){
    int n, m;
    cin >> n >> m;

    map<int, int> T;

    bool flag = true;
    for(int i = 0; i < m; i++){
        int s, c;
        cin >> s >> c;
        if(T.find(s) == T.end()){
            T[s] = c;
        }
        else{
            if(T[s] != c){
                flag = false;
                break;
            }
        }
    }

    if(flag == false){
        printf("-1\n");
        return 0;
    }

    int number[n];

    for(int i = 0; i < n; i++){
        number[i] = -1;
    }

    map<int, int>::iterator it;
    for(it = T.begin(); it != T.end(); it++){
        number[it->first-1] = it->second;
    }

    if(number[0] == -1 and n > 1){
        number[0] = 1;
    }
    else if(number[0] == -1 and n == 1){
        number[0] = 0;
    }

    for(int i = 1; i < n; i++){
        if(number[i] == -1){
            number[i] = 0;
        }
    }
    

    if(n > 1 and number[0] == 0){
        printf("-1\n");
        return 0;
    }

    for(int i = 0; i < n; i++){
        printf("%d", number[i]);
    }
    printf("\n");

    return 0;
}