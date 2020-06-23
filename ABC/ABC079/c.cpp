#include <iostream>
#include <cstdio>
#include <string.h>
#include <vector>
using namespace std;


char A[4];

int ctoi(const char c){
  switch(c){
    case '0': return 0;
    case '1': return 1;
    case '2': return 2;
    case '3': return 3;
    case '4': return 4;
    case '5': return 5;
    case '6': return 6;
    case '7': return 7;
    case '8': return 8;
    case '9': return 9;
    default : return -1;
  }
}




int main(){
    string s;
    cin >> s;
    vector<int>v(4);

    //int型に変換
    for(int i = 0; i < 4; i++){
        v[i] = s[i] - '0';
        //printf("%d\n", v[i]);
    }

    int sum;

    for(int i = 0; i < (1 << 3); i++){
        sum = v[0];
        for(int j = 0; j < 3; j++){
            if(i & (1 << j)){
                sum = sum + v[j + 1];
            }
            else{
                sum = sum - v[j + 1];
            }
        }

        if(sum == 7){
            cout << v[0];
            for(int j = 0; j < 3; j++){
                if(i & (1 << j)){
                    cout << "+";
                }
                else{
                    cout << "-";
                }
                cout << v[j+1];
            }
            cout << "=7" << endl;

            break;
        }
    }

    return 0;
}