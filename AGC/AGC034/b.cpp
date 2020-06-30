#include <iostream>
#include <cstdio>
using namespace std;

int main(){
    string s;
    cin >> s;

    long long start = 0;
    long long count = 0;
    long long i = 0;
    while(i +2 < s.size()){
        if(s[i] != 'A'){
            start = i+1;
        }
        else if(s[i] == 'A' and s[i+1] == 'B' and s[i+2] == 'C'){
            
            count += i - start+1;
            s[start] = 'B';
            s[start+1] = 'C';
            long long cnt = 0;
            for(long long j = i + 2; j >= start+2; j--){
                s[j] = 'A';
                cnt++;
                if(cnt >= 3){
                    break;
                }
            }
            start += 2;
        }
        i++;
    }
    cout << count << endl;
    return 0;
}