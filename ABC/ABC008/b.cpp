#include <iostream>
#include <cstdio>
#include <map>
using namespace std;

int main(){
    int n;
    cin >> n;

    string s;

    map<string, int> T;

    for(int i = 0; i < n; i++){
        cin >> s;
        if(T.find(s) == T.end()){
            T[s] = 1;
        }
        else{
            T[s] += 1;
        }
    }

    int maxv = 0;;
    string max_s;

    map<string, int>::iterator it;

    for(it = T.begin(); it != T.end(); it++){
        if(maxv < it->second){
            maxv = it->second;
            max_s = it->first;
        }
    }

    cout << max_s << endl;

    return 0;
}