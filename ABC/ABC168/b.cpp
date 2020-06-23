#include <iostream>
#include <cstdio>
using namespace std;

int main(){
    int k;
    string s;
    cin >> k;
    cin >> s;
    if(k >= s.size()){
        cout << s << endl;
    }
    else{
        for(int i = 0; i < k; i++){
            printf("%c", s[i]);
        }
        printf("...\n");
    }

    return 0;
}