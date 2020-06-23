#include <iostream>
#include <cstdio>
#include <vector>
using namespace std;

int main(){
    long long n, m, x, y;
    cin >> n >> m >> x >> y;

    vector<long long> a(n);
    vector<long long> b(m);

    for(long long i = 0; i < n; i++){
        cin >> a[i];
    }
    for(long long i = 0; i < m; i++){
        cin >> b[i];
    }

    long long now = 0;
    long long a_index = 0;
    long long b_index = 0;
    long long count = 0;
    while(1){
        
        while(a_index < n){
            if(now <= a[a_index]){
                break;
            }
            a_index++;
        }
        if(a_index >= n){
            break;
        } 
        now = a[a_index] + x;
   
        while(b_index < m){
            if(now <= b[b_index]){
                break;
            }
            b_index++;
        }
        if(b_index >= m){
            break;
        } 
        now = b[b_index] + y;
        count++;
       
    }
    
    cout << count << endl;
    return 0;
}