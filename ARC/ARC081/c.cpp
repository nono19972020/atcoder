#include <iostream>
#include <cstdio>
#include <map>
using namespace std;

int main(){
    long long n;
    cin >> n;

    map<long long, long long> T;

    long long x;

    for(int i = 0; i < n; i++){
        cin >> x;
        if(T.find(x) == T.end()){
            T[x] = 1;
        }
        else{
            T[x] +=1;
        }
    }

    //printf("insert\n");

    map<long long, long long>::iterator it;
    long long count = 0;
    long long max1 = 0;
    long long max2 = 0;
    for(it = T.begin(); it != T.end(); it++){
        if(it->second >= 2){
            count++;
            max1 = max(it->first, max1);
        }
    }

    if(count < 2){
        printf("0\n");
        return 0;
    }

    if(T[max1] >= 4){
        max2 = max1;
    }
    else{
        T.erase(max1);
        for(it = T.begin(); it != T.end(); it++){
            if(it->second >= 2){
                count++;
                max2 = max(it->first, max2);
            }
        }
    }

    printf("%lld\n", max1*max2);

    return 0;

}