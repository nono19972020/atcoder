#include <iostream>
#include <cstdio>
using namespace std;

int main(){
    string a, b;
    cin >> a >> b;

    string a2, b2;

    a2 = a;
    b2 = b;
    int maxv = stoi(a) - stoi(b);
    for(int i = 0; i < 3; i++){
        a2 = a;
        for(int j = 0; j < 10; j++){
            if(i == 0 and j == 0){
                continue;
            }
            a2[i] = j + '0';
            maxv = max(maxv, stoi(a2) - stoi(b));
        }
    }

     for(int i = 0; i < 3; i++){
        b2 = b;
        for(int j = 0; j < 10; j++){
            if(i == 0 and j == 0){
                continue;
            }
            b2[i] = j + '0';
            maxv = max(maxv, stoi(a) - stoi(b2));
        }
    }
    

    
    printf("%d\n", maxv);

    return 0;

}