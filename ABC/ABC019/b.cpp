#include <iostream>
#include <cstdio>
using namespace std;

int main(){
    string s;
    string g;

    cin >> s;

    int i = 0;

    while(i < s.size()){
        int start = i;
        while(i < s.size() and s[i] == s[i+1]){
            i++;
        }
        int goal = i;

        g = g + s[i] + to_string(goal - start+1);
        i++;
    }

    cout << g << endl;

    return 0;
}