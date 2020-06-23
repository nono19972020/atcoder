#include <iostream>
#include <cstdio>
#include <set>
using namespace std;

int main(){
    int n;

    cin >> n;

    set<string> T;

    bool judge = false;

    string word;
    string front;
    int index;
    for(int i = 0; i < n; i++){
        if(i == 0){
            cin >> word;
            front = word;
            T.insert(word);
            continue;
        }
        cin >> word;
        if(T.find(word) != T.end() || word[0] != front[front.size()-1]){
            judge = true;
            index = i;
            break;
        }
        T.insert(word);
        front = word;
    }

    if(judge == true){
        if(index % 2 == 0){
            printf("LOSE\n");
        }
        else{
            printf("WIN\n");
        }
    }
    else{
        printf("DRAW\n");
    }

    return 0;
}