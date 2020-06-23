#include <iostream>
#include <cstdio>
#include <vector>
using namespace std;
long long n;
long long count0 = 0;

vector<long long> counter(string s){
    vector<long long> v(3, 0);

    for(long long i = 0; i < s.size(); i++){
        if(s[i] == '3'){
            v[0]++;
        }
        else if(s[i] == '5'){
            v[1]++;
        }
        else if(s[i] == '7'){
            v[2]++;
        }
    }

    return v;
}

void dfs(string s){
    if(s.size() == to_string(n).size()+1){
        return;
    }
    

    if(stoll(s) <= n and counter(s)[0] != 0 and counter(s)[1] != 0 and counter(s)[2] != 0){
        count0++;
    }

    dfs(s+'3');
    dfs(s+'5');
    dfs(s+'7');
}

int main(){
    cin >> n;

    dfs("3");
    dfs("5");
    dfs("7");

    cout << count0 << endl;
    return 0;
}