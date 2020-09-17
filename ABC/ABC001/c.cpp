#include <iostream>
#include <cstdio>
#include <cmath>
using namespace std;

long double round_n(long double number, long double n)
{
    number = number * pow(10,n-1); //四捨五入したい値を10の(n-1)乗倍する。
    number = round(number); //小数点以下を四捨五入する。
    number /= pow(10, n-1); //10の(n-1)乗で割る。
    return number;
}


int main(){
    long double dir, w;

    cin >> dir >> w;

    long double degree = (long double)dir/10;



   //long double wind = round_n(w/60, 2.0) + 0.001;
    long double wind = w/60+0.001;
    //printf("wind %.10Lf\n", wind);
    long long wind_power;

    if(0.0 <= wind and wind < 0.25){
        wind_power = 0;
    }
    else if(0.25 <= wind and wind < 1.55){
        wind_power = 1;
    }
    else if(1.55 <= wind and wind < 3.35){
        wind_power = 2;
    }
    else if(3.35 <= wind and wind < 5.45){
        wind_power = 3;
    }
    else if(5.45 <= wind and wind < 7.95){
        wind_power = 4;
    }
    else if(7.95 <= wind and wind < 10.75){
        wind_power = 5;
    }
    else if(10.75 <= wind and wind < 13.85){
        wind_power = 6;
    }
    else if(13.85 <= wind and wind < 17.15){
        wind_power = 7;
    }
    else if(17.15 <= wind and wind < 20.75){
        wind_power = 8;
    }
    else if(20.75 <= wind and wind < 24.45){
        wind_power = 9;
    }
    else if(24.45 <= wind and wind < 28.45){
        wind_power = 10;
    }
    else if(28.45 <= wind and wind < 32.65){
        wind_power = 11;
    }
    else if(32.65 <= wind){
        wind_power = 12;
    }


    if(wind_power == 0){
        printf("C 0\n");
        return 0;
    }

    string direction;

    if(11.25 <= degree and degree < 33.75){
        direction = "NNE";
    }
    else if(33.75 <= degree and degree < 56.25){
        direction = "NE";
    }
    else if(56.25 <= degree and degree < 78.75){
        direction = "ENE";
    }
    else if(78.75 <= degree and degree < 101.25){
        direction = "E";
    }
    else if(101.25 <= degree and degree < 123.75){
        direction = "ESE";
    }
    else if(123.75 <= degree and degree < 146.25){
        direction = "SE";
    }
    else if(146.25 <= degree and degree < 168.75){
        direction = "SSE";
    }
    else if(168.75 <= degree and degree < 191.25){
        direction = "S";
    }
    else if(191.25 <= degree and degree < 213.75){
        direction = "SSW";
    }
    else if(213.75 <= degree and degree < 236.25){
        direction = "SW";
    }
    else if(236.25 <= degree and degree < 258.75){
        direction = "WSW";
    }
    else if(258.75 <= degree and degree < 281.25){
        direction = "W";
    }
    else if(281.25 <= degree and degree < 303.75){
        direction = "WNW";
    }
    else if(303.75 <= degree and degree < 326.25){
        direction = "NW";
    }
    else if(326.25 <= degree and degree < 348.75){
        direction = "NNW";
    }
    else{
        direction = "N";
    }

    printf("%s %lld\n", direction.c_str(), wind_power);

    return 0;
}
