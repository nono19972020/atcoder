#include <iostream>
#include <cstdio>
using namespace std;

long long n;
long long cnt = 0;

void dfs(string s){
    long long x;
    x = stoll(s);
    if(x > n) return;

    if(s.find('3') != string::npos and s.find('5') != string::npos and s.find('7') != string::npos) cnt++;

    char c[] = {'3', '5', '7'};

    for(long long i = 0; i < 3; i++){
        string t;
        t = s + c[i];
        dfs(t);
    }
}

int main(){
    cin >> n;

    dfs("3");
    dfs("5");
    dfs("7");

    cout << cnt << endl;
    return 0;
}