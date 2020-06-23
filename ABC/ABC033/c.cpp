#include <iostream>
#include <cstdio>
#include <vector>
using namespace std;

int main(){
    string s;
    cin >> s; 

    if(s.size() == 1 and s[0] == '0'){
        printf("0\n");
        return 0;
    }
    else if(s.size() == 1 and s[0] != '0'){
        printf("1\n");
        return 0;
    }
    

    vector<long long> block;

    long long now;
    bool zero;
    for(long long i = 0; i < s.size(); i++){
        if(s[i] == '*'){
            zero = false;
            if(now == 0){
                zero = true;
            }
            while(i < s.size() and s[i] != '+'){
                if(s[i] != '*'){
                    if(s[i] == '0'){
                        zero = true;
                    }
                    now *= s[i] - '0';
                }
                i++;
            }
            if(zero == true){
                block.push_back(0);
            }
            else{
                block.push_back(1);
            }
            
        }
        else if(s[i] == '+'){
            block.push_back(now);
        }
        else{
            now = s[i] - '0';
        }
    }

    if(s[s.size()-2] == '+'){
        block.push_back(s[s.size()-1]-'0');
    }

    long long count = 0;
    //printf("block size %lu\n", block.size());
    for(long long i = 0; i < block.size(); i++){
        //printf("block[i] %lld\n", block[i]);
        if(block[i] != 0){
            count++;
        }
    }

    cout << count << endl;

    return 0;
}