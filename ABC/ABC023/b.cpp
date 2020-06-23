#include <iostream>
#include <cstdio>
using namespace std;

int main(){
    string s = "b";
    string name;

    int n;

    cin >> n;
    cin >> name;

    if(name == "b"){
        printf("0\n");
        return 0;
    }

    bool flag = false;

    int count;
    for(int i = 1; i <= n; i++){
        if(i % 3 == 1){
            s = 'a' + s + 'c';
        }
        else if(i % 3 == 2){
            s = 'c' + s + 'a';
        }
        else{
            s = 'b' + s + 'b';
        }

        if(s == name){
            count = i;
            flag = true;
            break;
        }
    }

    if(flag == true){
        printf("%d\n", count);
    }
    else{
        printf("-1\n");
    }

    return 0;
}