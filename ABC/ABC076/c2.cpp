#include <iostream>
#include <cstdio>
#include <vector>
#include <set>
using namespace std;

int main(){
    string s, t;
    cin >> s >> t;

    long long n = (long long)s.size();
    long long m = (long long)t.size();
    long long i = 0;
    long long j = 0;
    bool find = false;
    vector<long long> start;

    while(i < n and j < m){
        if(s[i] == '?' || s[i] == t[j]){
            long long start_i = i;
            while(i < n and j < m and (s[i] == '?' || s[i] == t[j])){
                i++;
                j++;
            }
            if(j == m){
                start.push_back(i - m);
                find = true;
            }
            j = 0;
            i = start_i + 1;
        }
        else i++;
    }

    if(find == false){
        printf("UNRESTORABLE\n");
        return 0;
    }

    set<string> T;
    for(long long k = 0; k < start.size(); k++){
        string ans;
        j = 0;
        for(i = 0; i < n; i++){
            if(i < start[k] || i > start[k]+ m -1){
                if(s[i] == '?') ans.push_back('a');
                else ans.push_back(s[i]);
            }
            else if(start[k] <= i and i <= start[k] + m -1){
                ans.push_back(t[j]);
                j++;
            }
        }
        T.insert(ans);
    }

    set<string>::iterator it;
    it = T.begin();
    cout << *it << endl;
    return 0;
}