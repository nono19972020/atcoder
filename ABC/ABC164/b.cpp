#include <iostream>
#include <string>
#include <cstdio>
using namespace std;



int main(){
    int t_s, t_a, a_s, a_a;
    cin >> t_s >> t_a >> a_s >> a_a;

    while(1){
        a_s = a_s - t_a;
        //printf("a_s %d\n", a_s);
        if(a_s <= 0){
            break;
        }
        t_s = t_s - a_a;
        //printf("t_s %d\n", t_s);
        if(t_s <= 0){
            break;
        }
    }

    if(a_s <= 0){
        printf("Yes\n");
    }
    else{
        printf("No\n");
    }

    return 0;
    
}