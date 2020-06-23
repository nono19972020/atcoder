#include <iostream>
#include <cstdio>
#include <vector>
using namespace std;

int main(){
    string s;

    cin >> s;

    int length = s.length();

    vector<int> v(length);
    for(int i = 0; i < length; i++){
        v[i] = s[i] - '0';
    }

    /*
    for(int i = 0; i < length; i++){
        printf("%d", v[i]);
    }*/

    //printf("\n");

    //char plus[length - 1];

    long long sum = 0;

    for(int i = 0; i < (1 << (length-1)); i++){
        long long now = v[0];
        long long ans = 0;
        for(int j = 0; j < length-1; j++){
            if(i & (1 << j)){//ない場合
                now = 10*now + v[j+1];
               //printf("count %d\n", count);
            }
            else{//プラスの挙動
                ans = now + ans;
                now = v[j+1];
                //printf("count %d\n", count);
            }
        }
        ans = ans + now;
        sum = sum + ans;
        //printf("count %d\n", ans);
    }

    printf("%lld\n", sum);

    return 0;

}