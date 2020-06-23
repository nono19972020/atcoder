#include <iostream>
#include <cstdio>
#include <cstring>
#include <cmath>
using namespace std;


int main(){
    string s;
    cin >> s;

    int a_count = 0;
    int b_count = 0;
    int c_count = 0;

    for(int i = 0; i < s.size(); i++){
        if(s[i] == 'a'){
            a_count++;
        }
        else if(s[i] == 'b'){
            b_count++;
        }
        else{
            c_count++;
        }
    }
    
    if(abs(a_count - b_count) <= 1 and abs(b_count - c_count) <= 1 and abs(a_count - c_count) <= 1){
        printf("YES\n");
    }
    else{
        printf("NO\n");
    }

    return 0;
}
