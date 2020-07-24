#include <iostream>
#include <cstdio>
using namespace std;

int main(){
    string s;
    cin >> s;

    string t;
    for(long long i = 0; i < s.size(); i++){
        if(i % 2 == 0) t.push_back('g');
        else t.push_back('p');
    }

    long long point = 0;
    for(long long i = 0; i < s.size(); i++){
        if(t[i] == 'p' and s[i] == 'g') point++;
        else if(t[i] == 'g' and s[i] == 'p') point--;
    }

    cout << point << endl;
    return 0;
}