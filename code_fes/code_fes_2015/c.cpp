#include <iostream>
#include <cstdio>
#include <list>
#include <algorithm>
#include <vector>
using namespace std;

int main(){
    long long n, m;
    cin >> n >> m;

    if(n < m){
        printf("NO\n");
        return 0;
    }

    vector<long long> A;
    vector<long long> B;

    long long a;
    for(long long i = 0; i < n; i++){
        cin >> a;
        A.push_back(a);
    }

    long long b;
    for(long long i = 0; i < m; i++){
        cin >> b;
        B.push_back(b);
    }

    
    sort(B.begin(), B.end(), greater<long long>());
    sort(A.begin(), A.end(), greater<long long>());

   
    bool find = true;
    long long j = 0;
    for(long long i = 0; i < m; i++){
        if(B[i] <= A[j]){
            j++;
        }
        else{
            find = false;
            break;
        }
    }

    if(find == true){
        printf("YES\n");
    }
    else{
        printf("NO\n");
    }

    return 0;

}