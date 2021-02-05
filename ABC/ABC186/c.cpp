#include <iostream>
#include <cstdio>
#include <vector>
#include <cstring>
using namespace std;

class Radix {
private:
  const char* s;
  int a[128];
public:
  Radix(const char* s = "0123456789ABCDEF") : s(s) {
    int i;
    for(i = 0; s[i]; ++i)
      a[(int)s[i]] = i;
  }
  std::string to(long long p, int q) {
    int i;
    if(!p)
      return "0";
    char t[64] = { };
    for(i = 62; p; --i) {
      t[i] = s[p % q];
      p /= q;
    }
    return std::string(t + i + 1);
  }
  std::string to(const std::string& t, int p, int q) {
    return to(to(t, p), q);
  }
  long long to(const std::string& t, int p) {
    int i;
    long long sm = a[(int)t[0]];
    for(i = 1; i < (int)t.length(); ++i)
      sm = sm * p + a[(int)t[i]];
    return sm;
  }
};

int main(){
    Radix r;
    long long n;
    cin >> n;

    long long cnt = 0;
    for(long long i = 1; i <= n; i++){
        string s10 = to_string(i);

        string s8 = r.to(i, 8);
        
        long long r10 = s10.find("7");
        long long r8 = s8.find("7");

        if(r10 != string::npos and r8 != string::npos) cnt++;
        else if(r10 != string::npos and r8 == string::npos) cnt++;
        else if(r10 == string::npos and r8 != string::npos) cnt++;
    }

    cout << n - cnt << endl;
    return 0;
}