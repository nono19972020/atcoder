#include <iostream>
#include <cstdio> 
#include <map>
using namespace std;

int main(){
    long long n;
    cin >> n;

    
    map<long long, long long> T;
    for(long long i = 0; i < n; i++){
        long long a;
        cin >> a;

        if(T.find(a) == T.end()){
            T[a] = 1;
        }
        else{
            T[a] += 1;
        }
       
    }
    if(T.size() == 3){
        if(n % 3 == 0){
            map<long long, long long>::iterator it;
            long long sum = 0;
            bool flag = true;
            for(it = T.begin(); it != T.end(); it++){
                sum = sum ^ it->first;
                if(it->second != n/3){
                    flag = false;
                }
            }
            if(sum == 0 and flag == true){
                printf("Yes\n");
                return 0;
            }
        }
        printf("No\n");
    }
    else if(T.size() == 2){    
        if(n % 3 == 0 and T.find(0) != T.end() and T[0] == n/3){
            printf("Yes\n");
        }
        else{
            printf("No\n");
        }
    }
    else if(T.size() == 1){
        if(T.find(0) != T.end()){
            printf("Yes\n");
        }
        else{
            printf("No\n");
        }
    }
    else{
        printf("No\n");
    }
    return 0;
}