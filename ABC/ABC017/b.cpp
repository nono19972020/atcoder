#include <iostream>
#include <cstdio>
#include <algorithm>
using namespace std;

int main(){

    string x;
    cin >> x;

    reverse(x.begin(), x.end());

    int i = 0;
    bool flag = true;
    while(i < x.size()){
        if(x[i] == 'o'){
            i++;
        }
        else if(x[i] == 'k'){
            i++;
        }
        else if(x[i] == 'u'){
            i++;
        }
        else if(x[i] == 'h' and x[i+1] == 'c'){
            i += 2;
        }
        else{
            flag = false;
            break;
        }
    }

    if(flag == true){
        printf("YES\n");
    }
    else{
        printf("NO\n");
    }

    return 0;
}