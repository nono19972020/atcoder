#include <iostream>
#include <cstdio>
#include <set>
using namespace std;

int main(){
    string s;
    cin >> s;
    long long K;
    cin >> K;

    set<string> T;

    for(long long j = 1; j <= K; j++){
        long long i = 0;
        while(i < s.size()){
            string t;

            long long count = 0;
            long long k = i;
            while(k < s.size()){
                if(count == j){
                    break;
                }

                //t.push_back(s[k]);
                t = t + s[k];
                k++;
                count++;
            }

            if(t.size() == j){
                //printf("t %s\n", t.c_str());
                T.insert(t);
            }
            i++;

        }
    }

    set<string>::iterator it;

    long long count = 0;
    for(it = T.begin(); it != T.end(); it++){
        count++;
        
        if(count == K){
            cout << *it << endl;
            break;
        }
        //cout << *it << endl;
    }
    
    return 0;
}