#include <iostream>
#include <cstdio>
using namespace std;

int main(){
    string s;
    long long k;

    cin >> s >> k;

    bool one_kind = true;
    for(long long i = 0; i < s.size()-1; i++){
        if(s[i] != s[i+1]){
            one_kind = false;
            break;
        }
    }

    if(one_kind == true){
        cout << s.size()*k/2 << endl;
        return 0;
    }

    if(s[0] != s[s.size()-1]){
        long long i = 0;
        long long count = 0;
        while(i < s.size()){
            if(s[i] == s[i+1]){
                long long length = 1;
                while(i < s.size() and s[i] == s[i+1]){
                    i++;
                    length++;
                }
                count += length/2;
           
            }
     
            i++;   
        }

        cout << count*k << endl;
        return 0;
    }
    else{
        long long i = 0;
        long long first_length = 1;

        while(i < s.size()){
            if(s[0] == s[1]){
                long long length = 1;
                while(i < s.size() and s[i] == s[i+1]){
                    i++;
                    length++;
                }
                first_length = length;
            }
            break;  
        }

        i = s.size()-1;
        long long last_length = 1;

        while(i >= 0){
            if(s[s.size()-1] == s[s.size()-2]){
                long long length = 1;
                while(i < s.size() and s[i] == s[i-1]){
                    i--;
                    length++;
                }
                last_length = length;
            }
            break;  
        }

        i = 0;
        long long count = 0;

        while(i < s.size()){
            if(s[i] == s[i+1]){
                long long length = 1;
                while(i < s.size() and s[i] == s[i+1]){
                    i++;
                    length++;
                }
                count += length/2;
            }
            i++;   
        }
        //cout << "count " << count << endl;

        //cout << "first length" << first_length << "last_length" << last_length << endl;

        cout << count*k + (k-1)*((first_length+last_length)/2 - first_length/2 - last_length/2) << endl;

        return 0;
    }

  
}