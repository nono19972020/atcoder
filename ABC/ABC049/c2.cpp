#include <iostream>
#include <cstdio>
#include <cstring>
#include <algorithm>
using namespace std;

int main(){
    string s;
    cin >> s;

    string t1 = "dream";
    string t2 = "dreamer";
    string t3 = "erase";
    string t4 = "eraser";

    reverse(s.begin(), s.end());
    reverse(t1.begin(), t1.end());
    reverse(t2.begin(), t2.end());
    reverse(t3.begin(), t3.end());
    reverse(t4.begin(), t4.end());

    long long n = s.size();
    long long i = 0;

    while(i < n){
        if(s[i] == 'm'){
            if(i + 4 < n and s.substr(i, 5) == t1) i += 5;
            else{
                printf("NO\n");
                return 0;
            }
        }
        else if(s[i] == 'e'){
            if(i + 4 < n and s.substr(i, 5) == t3) i += 5;
            else{
                printf("NO\n");
                return 0;
            }
        }
        else if(i + 1 < n and s[i] == 'r' and s[i+1] == 'e'){
            if(i+2 < n and s[i+2] == 'm'){
                if(i + 6 < n and s.substr(i, 7) == t2) i += 7;
                else{
                    printf("NO\n");
                    return 0;
                }
            }
            else if(i + 2 < n and s[i+2] == 's'){
                if(i + 5 < n and s.substr(i, 6) == t4) i += 6;
                else{
                    printf("NO\n");
                    return 0;
                }
            }
            else{
                printf("NO\n");
                return 0;
            }
        }
        else{
            printf("NO\n");
            return 0;
        }
    }
    printf("YES\n");
    return 0;
}