#include <iostream>
#include <cstdio>
using namespace std;

int main(){
    int n;
    int count_odd = 0;
    int count_even = 0;
    int count_4 = 0;
    cin >> n;

    int a;
    for(int i = 0; i < n; i++){
        cin >> a;
        if(a % 2 != 0){
            count_odd++;
        }

        if(a % 4 == 0){
            count_4++;
        }
    }

    count_even = n - count_odd - count_4;

    bool flag = false;

    if(count_even == 0){
        if(count_odd - 1 <= count_4){
            flag = true;
        }
    }
    else{
        if(count_odd <= count_4){
            flag = true;
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