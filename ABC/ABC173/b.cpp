#include <iostream>
#include <cstdio>
#include <vector>
using namespace std;

int main(){
    long long n;
    cin >> n;

    long long count_ac = 0, count_wa = 0, count_tle = 0, count_re = 0;

    for(long long i = 0; i < n; i++){
        string s;
        cin >> s;

        if(s == "AC"){
            count_ac++;
        }
        else if(s == "WA"){
            count_wa++;
        }
        else if(s == "TLE"){
            count_tle++;
        }
        else if(s == "RE"){
            count_re++;
        }
    }

    printf("AC x %lld\n", count_ac);
    printf("WA x %lld\n", count_wa);
    printf("TLE x %lld\n", count_tle);
    printf("RE x %lld\n", count_re);

    return 0;
}