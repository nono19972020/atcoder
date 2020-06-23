#include <iostream>
#include <cstdio>
#include <cmath>
using namespace std;

int main(){
    string s;
    long long T;
    cin >> s >> T;
    long long count = 0;

    long long x = 0, y = 0;

    for(long long i = 0; i < s.size(); i++){
        if(s[i] == 'L'){
            x -= 1;
        }
        else if(s[i] == 'R'){
            x += 1;
        }
        else if(s[i] == 'U'){
            y += 1;
        }
        else if(s[i] == 'D'){
            y -= 1;
        }
        else{
            count++;
        }
    }

    if(x == 0 and y == 0){
        if(T == 1){
            cout << count << endl;
        }
        else{
            cout << count%2 << endl;
        }
        return 0;
    }

    if(T == 1){
        cout << abs(x) + abs(y) + count << endl;
        return 0; 
    }


    if(count <= abs(x) + abs(y)){
        cout << abs(x) + abs(y) - count << endl;
        return 0;
    }

    long long delta = count - abs(x) + abs(y) ;

    cout << delta % 2 << endl;

    return 0;
}