#include <iostream>
#include <cstdio>
#include <algorithm>
using namespace std;

int main(){
    string s;
    cin >> s;

    string key = "keyence";
    if(s == key){
        printf("YES\n");

        return 0;
    }

    for(int i = 0; i < s.size(); i++){
        for(int j = i; j < s.size(); j++){
            string word = "";
            for(int k = 0; k < s.size(); k++){
                if(i <= k and k <= j){
                    continue;
                } 
                word += s[k];
            }

            if(word == key){
                printf("YES\n");
                return 0;
            }
        }
    }

    printf("NO\n");

   return 0;
}