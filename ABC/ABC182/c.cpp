#include <iostream>
#include <cstdio>
#include <vector>
using namespace std;

int main(){
    string s;
    cin >> s;

    vector<long long> res(3, 0);
    long long sum = 0;
    long long k = s.size();
    for(long long i = 0; i < k; i++){
        long long num = s[i] -'0';
        res[num%3]++;
        sum += num;
    }

    if(sum % 3 == 0){
        printf("0\n");
    }
    else if(sum % 3 == 1){
        if(res[1] >= 1 and k >= 2){
            printf("1\n");
        }
        else if(res[2] >= 2 and k >= 3){
            printf("2\n");
        }
        else printf("-1\n");
    }
    else{
        if(res[2] >= 1 and k >= 2){
            printf("1\n");
        }
        else if(res[1] >= 2 and k >= 3){
            printf("2\n");
        }
        else printf("-1\n");
    }

    return 0;
}