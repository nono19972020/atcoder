#include <iostream>
#include <cstdio>
#include <cmath>
using namespace std;

int main(){
    string s;
    cin >> s;

    int sum_odd = 0;
    int sum_even = 0;

    for(int i = 0; i < s.size(); i++){
        if(i%2==0){
            sum_odd += s[i] - '0';
        }
        else{
            sum_even += s[i] - '0';
        }
    }

    if(s.size()%2 == 0){
        printf("%d %d\n", sum_odd, sum_even);
    }
    else{
        printf("%d %d\n", sum_even, sum_odd);
    }


    

    return 0;


}