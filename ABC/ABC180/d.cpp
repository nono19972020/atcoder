#include <iostream>
#include <cstdio>
#include <vector>
using namespace std;

int main(){
  long long x, y, a, b;
  cin >> x >> y >> a >> b;

  long long ans = 0;
  while((long double)a * x <= 9e18 and a * x <= b + x and a * x < y){
    x *= a;
    ans++;
  }

  long long diff = (y - x - 1)/b;
  if(diff > 0ll) ans += diff;

  cout << ans << endl;
  return 0;
}