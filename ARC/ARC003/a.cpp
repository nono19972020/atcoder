#include <iostream>
#include <cstdio>
using namespace std;

int main(){
    long long n;
    cin >> n;
    string s;
    cin >> s;

    long long count_a = 0, count_b = 0, count_c = 0, count_d = 0, count_f = 0;

    for(long long i = 0; i < n; i++){
        if(s[i] == 'A'){
            count_a++;
        }
        else if(s[i] == 'B'){
            count_b++;
        }
        else if(s[i] == 'C'){
            count_c++;
        }
        else if(s[i] == 'D'){
            count_d++;
        }
        else if(s[i] == 'F'){
            count_f++;
        }
    }

    long double gpa = (4.0*(long double)count_a + 3.0*(long double)count_b + 2.0*(long double)count_c + 1.0*(long double)count_d)/((long double) n);

    printf("%.10Lf\n", gpa);

    return 0;
}