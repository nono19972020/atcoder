#include <iostream>
#include <cstdio>
using namespace std;

int main(){
    string s;
    cin >> s;
    long long count_n = 0, count_w = 0, count_s = 0, count_e = 0;

    for(long long i = 0; i < s.size(); i++){
        if(s[i] == 'N'){
            count_n++;
        }
        else if(s[i] == 'W'){
            count_w++;
        }
        else if(s[i] == 'S'){
            count_s++;
        }
        else{
            count_e++;
        }
    }

    bool flag_ns = true, flag_we = true;

    if(count_n > 0){
        if(count_s == 0){
            flag_ns = false;
        }
    }

    if(count_w > 0){
        if(count_e == 0){
            flag_we = false;
        }
       
    }

    if(count_e > 0){
        if(count_w == 0){
            flag_we = false;
        }
    }

    if(count_s > 0){
        if(count_n == 0){
            flag_ns = false;
        }
    }

    if(flag_ns == true and flag_we == true){
        printf("Yes\n");
    }
    else{
        printf("No\n");
    }

    return 0;
}