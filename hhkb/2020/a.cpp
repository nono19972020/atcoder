#include <iostream>
#include <cstdio>
#include <vector>
using namespace std;

int main(){
    char s;
    char t;
    cin >> s;
    cin >> t;

    if(s == 'N'){
        cout << t << endl;
    }
    else{
        t = toupper(t);
        cout << t << endl;
    }
    return 0;

}