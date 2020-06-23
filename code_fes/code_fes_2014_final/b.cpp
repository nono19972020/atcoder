#include <iostream>
#include <cstdio>
using namespace std;

int main(){
    string s;
    cin >> s;

    int sum = 0;
    int minus = 0;

    for(int i = 0; i < s.size(); i++){
        if(i % 2 == 0){
            sum += s[i]- '0';
        }
        else{
            minus += s[i]-'0';
        }
    }

    //printf("plus %d\n", sum);
    //printf("minus %d\n", minus);

    cout << sum - minus << endl;

    return 0;
}