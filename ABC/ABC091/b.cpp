#include <iostream>
#include <cstdio>
#include <map>
using namespace std;

int main(){
    int n, m;
    cin >> n;

    map<string, int> blue;
    map<string, int> red;

    for(int i = 0; i < n; i++){
        string s;
        cin >> s;
        if(blue.find(s) == blue.end()){
            blue[s] = 1;
        }
        else{
            blue[s] += 1;
        }
    }

    cin >> m;
    for(int i = 0; i < m; i++){
        string s;
        cin >> s;
        if(red.find(s) == red.end()){
            red[s] = 1;
        }
        else{
            red[s] += 1;
        }
    }

    int max_point = 0;

    map<string, int>::iterator it;

    for(it = blue.begin(); it != blue.end(); it++){
        max_point = max(max_point, it->second - red[it->first]);
    }

    cout << max_point << endl;
}