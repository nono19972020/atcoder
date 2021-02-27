#include <iostream>
#include <vector>
using namespace std;

int main(){
    long long a[20];
    a[0] = 100;
    a[1] = 100;
    a[2] = 200;
    for(long long i = 0; i < 20; i++){
        if(i > 2) a[i] = a[i-1] + a[i-2] + a[i-3];
    }

    cout << a[19] << endl;
    return 0;
}