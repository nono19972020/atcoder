#include <iostream>
#include <cstdio>
#include <vector>
using namespace std;

int main(){
    int n;
    cin >> n;

    vector<int> color(9, 0);

    int a;
    for(int i = 0; i < n; i++){
        cin >> a;
        if(1<= a and a <= 399){
            //灰
            color[0] += 1;
        }
        else if(400 <= a and a <= 799){
            //茶
            color[1] += 1;
        }
        else if(800 <= a and a <= 1199){
            //緑
            color[2] += 1;
        }
        else if(1200 <= a and a <= 1599){
            //水
            color[3] += 1;
        }
        else if(1600 <= a and a <= 1999){
            //青
            color[4] += 1;
        }
        else if(2000 <= a and a <= 2399){
            //黄
            color[5] += 1;
        }
        else if(2400 <= a and a <= 2799){
            //オレンジ
            color[6] += 1;
        }
        else if(2800 <= a and a <= 3199){
            //赤
            color[7] += 1;
        }
        else if(a >= 3200){
            //最強
            color[8] += 1;
        }
    }

    int min_count = 0;//人がいる色の種類
    int zero_color = 0;
    for(int i = 0; i <= 7; i++){
        //printf("colcor i %d\n", color[i]);
        if(color[i] != 0){
            min_count++;
        }
        else{
            zero_color++;
        }
    }

    
    if(color[8] == 0){
        //色変がいない
        printf("%d %d\n", min_count, min_count);
    }
    else if(min_count != 0 and color[8] != 0){
        //色変がいる
        //最小値は色変が人がいる色になる場合
        //最大値は色変が人がいない色になる場合
        
            
        printf("%d %d\n", min_count, min_count+color[8]);
    
    }
    else if(min_count == 0 and color[8]){
        if(color[8] >= 8){
            printf("1 8\n");
        }
        else{
            printf("1 %d\n", color[8]);
        }
    }

    return 0;
}