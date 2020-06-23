#include <iostream>
#include <cstdio>
#include <cstring>
#include <vector>
#include <queue>
#include <set>
#include <algorithm>
using namespace std;

int main(){
    int a, b, c, k;
    cin >> a >> b >> c >> k;
    int sum = 0;

   if(k - a > 0){
       sum = sum + a;
       k = k - a;
       if(k - b > 0){
           k = k - b;
           printf("%d\n", sum - k);
       }
       else{
           printf("%d\n", a);
       }

   }
   else{
       printf("%d\n", k);
   }

   return 0;
}