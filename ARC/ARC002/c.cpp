#include <iostream>
#include <cstdio>
#include <map>
using namespace std;

int main(){
    int n;
    string c;
    cin >> n >> c;

    string command[16] = {"AA", "AB", "AX", "AY", "BA", "BB", "BX", "BY", "XA", "XB", "XX", "XY", "YA", "YB", "YX", "YY"};

    int min_count = c.size();
    for(int i = 0; i < 16; i++){
        for(int j = 0; j < 16; j++){
            string L = command[i];
            string R = command[j];

            int k = 0;
            int count = 0;

            while(k < c.size()){
                if(c[k] == L[0] and c[k+1] == L[1]){
                    count++;
                    k += 2;
                }
                else if(c[k] == R[0] and c[k+1] == R[1]){
                    count++;
                    k += 2;
                }
                else{
                    count++;
                    k++;
                }
            }
            min_count = min(min_count, count);
        }
    }

    cout << min_count << endl;
    
    return 0;

}