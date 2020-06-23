#include <iostream>
#include <cstdio>
#include <map>
#include <algorithm>
using namespace std;

int main(){
    string s;
    cin >> s;

    long long i = 0;
    long long count = 0;

    string near;
    while(i < s.size()){
        string now;
        now = s[i];
        if(i == s.size()-1 and now == near){
            break;
        }
        
        if(now != near){
            near = now;
        }
        else{
            while(i < s.size()){
                if(near != now){
                    break;
                }
                i++;
                now.push_back(s[i]);
            }
            near = now;
        }
        i++;
        count++;
    }

    cout << count << endl;

    return 0;
}