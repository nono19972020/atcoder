#include <iostream>
#include <cstdio>
using namespace std;

int main(){
    long double m;
    cin >> m;

    long double km = m/1000;
    if(m == 100){
        printf("01\n");
        return 0;
    }

    string vv;

    //cout << km << endl;
    long long a;
    if(km < 0.1) vv = "00";//cout << km << endl;
    else if(0.1 <= km and km <= 5){
        km = km * 10;
        cout << km << endl;
        vv = to_string((long long)km);
        if(vv.size() == 1) vv = '0' + vv;
    }
    else if(6 <= km and km <= 30){
        vv = to_string((long long)km + 50);
    }
    else if(35 <= km and km <= 70){
        a = (long long) km;
        a -= 30;
        a = a / 5 + 80;
        vv = to_string(a);
    }
    else if(km > 70) vv = "89";

    cout << vv << endl;
    return 0;
}