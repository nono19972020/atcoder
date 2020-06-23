#include <iostream>
#include <cstdio>
using namespace std;

int main(){
    long long n;
    cin >> n;

    long long nico = 25;
    long long count = 0;

    /*while(1){
        printf("nico %lld\n", nico);
        count += n / nico;
        //nico = nico*100 + 25;
        
    }*/
    count += n / nico;
    cout << count << endl;
    return 0;
}