#include <iostream>
#include <cstdio>
#include <vector>
using namespace std;

//このままだと出力できないのでこれを書く
std::ostream &operator<<(std::ostream &dest, __int128_t value) {
  std::ostream::sentry s(dest);
  if (s) {
    __uint128_t tmp = value < 0 ? -value : value;
    char buffer[128];
    char *d = std::end(buffer);
    do {
      --d;
      *d = "0123456789"[tmp % 10];
      tmp /= 10;
    } while (tmp != 0);
    if (value < 0) {
      --d;
      *d = '-';
    }
    int len = std::end(buffer) - d;
    if (dest.rdbuf()->sputn(d, len) != len) {
      dest.setstate(std::ios_base::badbit);
    }
  }
  return dest;
}

int main(){
    __int128_t L, ans, cnt;
    long long l;
    cin >> l;

    L = l;

    ans = 1;
    L--;
    for(long long i = 0; i < 11; i++){
        ans *= L;
        L--;
    }

    cnt = 1;
    for(long long i = 1; i <= 11; i++){
        ans /= cnt;
        cnt++;
    }

    cout << ans << endl;
    return 0;
}