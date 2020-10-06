#include <iostream>
#include <cstdio>
using namespace std;

int main(){
    string s;
    cin >> s;

    string t;
    for(long long i = 0; i < s.size(); i++){
        if(s[i] != 'A') t.push_back(s[i]);
    }

    if(t != "KIHBR"){
        printf("NO\n");
        return 0;
    }

    long long index[5];

    for(long long i = 0; i < s.size(); i++){
        if(s[i] == 'K') index[0] = i;
        else if(s[i] == 'I') index[1] = i;
        else if(s[i] == 'H') index[2] = i;
        else if(s[i] == 'B') index[3] = i;
        else if(s[i] == 'R') index[4] = i;
    }

    if(index[0] >= 2 || index[1] - index[0] >= 2 || index[2] - index[1] >= 2 || index[3] - index[2] >= 3 || index[4] - index[3] >= 3 || s.size() - 1 - index[4] >= 2) printf("NO\n");
    else printf("YES\n");

    return 0;
}