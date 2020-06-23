#include <iostream>
#include <cstdio>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    long long x, y;
    string w;
    long long c[9][9];
    cin >> x >> y >> w;
    x--;
    y--;
    
  

    string b[9];
    for(long long i = 0; i < 9; i++){
        cin >> b[i];
    }
    for(long long i = 0; i < 9; i++){
        for(long long j = 0; j < 9; j++){
            c[i][j] = b[i][j] - '0';
        }
    }

   long long dx, dy;

   if(w == "R"){
       dx = 1;
       dy = 0;
   }
   else if(w == "L"){
       dx = -1;
       dy = 0;
   }
   else if(w == "U"){
       dx = 0;
       dy = -1;
   }
   else if(w == "D"){
       dx = 0;
       dy = 1;
   }
   else if(w == "RU"){
       dx = 1;
       dy = -1;
   }
   else if(w == "RD"){
       dx = 1;
       dy = 1;
   }
   else if(w == "LU"){
       dx = -1;
       dy = -1;
   }
   else if(w == "LD"){
       dx = -1;
       dy = 1;
   }

   long long ans[4];


   for(long long i = 0; i < 4; i++){
       ans[i] = c[y][x];
       y = y + dy;
       x = x + dx;
       if(x < 0){
           x = -x;
           dx = -dx;
       }
       if(x >= 9){
           x = 7;
           dx = -dx;
       }
       if(y < 0){
           y = -y;
           dy = -dy;
       }
       if(y >= 9){
           y = 7;
           dy = -dy;
       }
   }

   for(long long i = 0; i < 4; i++){
       printf("%lld", ans[i]);
   }
   printf("\n");

   return 0;

}