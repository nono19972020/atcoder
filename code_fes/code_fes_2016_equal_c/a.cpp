#include <iostream>
#include <cstdio>
using namespace std;

int main(){
    string s;
    cin >> s;

    long long index_c = -1, index_f = -1;

    for(long long i = 0; i < s.size(); i++){
        if(s[i] == 'C' and index_c == -1) index_c = i;
        else if(s[i] == 'F') index_f = i;
    }

    if(index_c != -1 and index_f != -1 and index_c < index_f) printf("Yes\n");
    else printf("No\n");

    return 0;
}