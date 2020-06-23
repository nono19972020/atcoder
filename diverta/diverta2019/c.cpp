#include <iostream>
#include <cstdio>
using namespace std;

long long counter(string s){
    long long count = 0;
    for(long long i = 0; i < s.size()-1; i++){
        if(s[i] == 'A' and s[i+1] == 'B'){
            count++;
        }
    }
    return count;
}

int main(){
    long long n;
    cin >> n;

    long long count_a = 0;
    long long count_b = 0;
    long long count_ab = 0;

    long long count = 0;
    for(long long i = 0; i < n; i++){
        string s;
        cin >> s;
        if(s[0] == 'B'){
            count_b++;
        }
        if(s[s.size()-1] == 'A'){
            count_a++;
        }

        if(s[0] == 'B' and s[s.size()-1] == 'A'){
            count_ab++;
        }

        count += counter(s);
    }

    //printf("in ab %lld\n", count);
    //printf("count_a %lld count_b %lld count_ab %lld\n", count_a, count_b, count_ab);

    
    count_a -= count_ab;
    count_b -= count_ab;
   

    if(count_ab == 0){
        count += min(count_a, count_b);
        cout << count << endl;

        return 0;
    }

    if(count_a == 0 and count_b == 0){
        count += count_ab-1;
        cout << count << endl;
        return 0;
    }

    count += count_ab-1+2 + min(count_a-1, count_b-1);

    cout << count << endl;
    return 0;

}