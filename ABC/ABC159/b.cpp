#include <iostream>
#include <cstdio>
#include <algorithm>
using namespace std;

int main(){
    string s;
    cin >> s;
    string s_re = s;
    reverse(s_re.begin(), s_re.end());

    long long n = s.size();
    string s1 = s.substr(0, (n-1)/2);
    string s2 = s.substr((n+1)/2);

    string s1_re = s1;
    string s2_re = s2;
    reverse(s1_re.begin(), s1_re.end());
    reverse(s2_re.begin(), s2_re.end());

    if(s == s_re and s1 == s1_re and s2 == s2_re) printf("Yes\n");
    else printf("No\n");

    return 0;
}