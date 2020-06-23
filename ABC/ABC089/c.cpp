#include <iostream>
#include <cstdio>
using namespace std;

int main(){
    long long n;
    cin >> n;

    long long count[5];

    for(int i = 0; i < 5; i++){
        count[i] = 0;
    }

    for(long long i = 0; i < n; i++){
        string s;
        cin >> s;
        if(s[0] == 'M'){
            count[0]++;
        }
        else if(s[0] == 'A'){
            count[1]++;
        }
        else if(s[0] == 'R'){
            count[2]++;
        }
        else if(s[0] == 'C'){
            count[3]++;
        }
        else if(s[0] == 'H'){
            count[4]++;
        }
    }

    long long sum = 0;

    for(int i = 0; i < 5; i++){
        for(int j = i + 1; j < 5; j++){
            for(int k = j + 1; k < 5; k++){
                if(count[i] != 0 and count[j] != 0 and count[k] != 0){
                    sum = sum + count[i]*count[j]*count[k];
                }
            }
        }
    }

    printf("%lld\n", sum);

    return 0;

}