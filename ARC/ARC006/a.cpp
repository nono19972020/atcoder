#include <iostream>
#include <cstdio>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    vector<int> e(6);
    int b;
    vector<int> l(6);

    for(int i = 0; i < 6; i++){
        cin >> e[i];
    }
    cin >> b;

    for(int i = 0; i < 6; i++){
        cin >> l[i];
    }

    int count = 0;

    for(int i = 0; i < 6; i++){
        if(find(e.begin(), e.end(), l[i]) != e.end()){
            count++;
        }
    }

    if(count == 6){
        printf("1\n");
    }
    else if(count == 5){
        if(find(l.begin(), l.end(), b) != l.end()){
            printf("2\n");
        }
        else{
            printf("3\n");
        }
    }
    else if(count == 4){
        printf("4\n");
    }
    else if(count == 3){
        printf("5\n");
    }
    else{
        printf("0\n");
    }

    return 0;

}