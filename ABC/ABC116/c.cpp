#include <iostream>
#include <cstdio>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int> h;

    int x;
    for(int i = 0; i < n; i++){
        cin >> x;
        h.push_back(x);
    }

    
    int count = 0;

    while(1){
       if(*max_element(h.begin(), h.end()) == 0){
           break;
       }

       int i = 0;
       while(i < n){
           if(h[i] == 0){
               i++;
           }
           else{
               count++;
               while(i < n and h[i] != 0){
                   h[i]--;
                   i++;
               }
           }
       } 
    }

    printf("%d\n", count);

    return 0;
}