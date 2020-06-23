#include <iostream>
#include <cstdio>
using namespace std;

int main(){
    string s;
    cin >> s;

    long long i = 0;

    long long count = 0;
    while(i < s.size()){
        if(s[i] == '2'){
            long long length = 1;
            while(i < s.size()){
                if(s[i] == '2' and s[i+1] == '5'){
                    i++;
                    length++;
                }
                else if(s[i] == '5' and s[i+1] == '2'){
                    i++;
                    length++;
                }
                else{
                    break;
                }
            }
            length /= 2;
            count += length*(length+1)/2;
        }
        i++;
    }

    cout << count << endl;

    return 0;
}