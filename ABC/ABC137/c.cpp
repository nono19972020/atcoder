#include <iostream>
#include <cstdio>
#include <map>
#include <algorithm>
using namespace std;

int main(){
    long long n;
    cin >> n;

    

    map<string, long long> T;

    
    for(long long i = 0; i < n; i++){
        string s;
        cin >> s;
        sort(s.begin(), s.end());

        

        if(T.find(s) == T.end()){
            T[s] = 1;
        }
        else{
            T[s]++; 
        }
    }

    long long count = 0;

    map<string, long long >::iterator it;

    for(it = T.begin(); it != T.end(); it++){
        if(it->second >= 2){
            count += it->second*(it->second-1)/2;
        }
    }

    cout << count << endl;

    return 0;
}