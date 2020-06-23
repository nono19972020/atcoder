#include <iostream>
#include <cstdio>
using namespace std;

int main(){
    int a, b, c;
    cin >> a >> b >> c;

    int maxv = max(a, b);
    maxv = max(maxv, c);

    int sum = a + b + c;

    int count = 0;

    while(1){
        if(sum % 3 == 0 and sum/3 >= maxv){
            break;
        }
        sum += 2;
        count++;
    }

    cout << count << endl;

    return 0;
}