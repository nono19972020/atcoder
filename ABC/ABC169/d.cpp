#include <iostream>
#include <cstdio>
#include <vector>
#include <map>
using namespace std;

int main(){
    long long n;
    cin >> n;
    if(n == 1){
        printf("0\n");
        return 0;
    }

    map<long long, long long> T;
    long long num = n;
    for(long long i = 2; i*i <= num+1; i++){
        if(num % i != 0){
            continue;
        }
        bool first = true;
        while(num % i == 0){
            if(first == true){
                T[i] = 1;
                first = false;
                num /= i;
            }
            else{
                T[i]++;
                num /= i;
            }
        }
    }
    if(num != 1){
        T[num] = 1;
    }

    long long count = 0;
    map<long long, long long>::iterator it;
    for(it = T.begin(); it != T.end(); it++){
        long long j = 1;
        long long sum = 0;
        //printf("it first %lld it second %lld\n", it->first, it->second);
        while(1){
            if(sum+j > it->second){
                break;
            }
            count++;
            sum += j;
            j++;
        }
        //printf("count %lld sum %lld\n", count, sum);
    }

    cout << count << endl;

    return 0;
}