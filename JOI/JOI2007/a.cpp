#include <iostream>
#include <cstdio>
using namespace std;


int main(){
    int money;

    cin >> money;

    money = 1000 - money;

    int count = 0;

    while(money > 0){
        if(money >= 500){
            money = money - 500;
            count++;
            //printf("500 %d\n", count);
        }
        else if(money < 500 and money >= 100){
            money = money - 100;
            count++;
            //printf("100 %d\n", count);
        }
        else if(money < 100 and money >= 50){
            money = money - 50;
            count++;
            //printf("50 %d\n", count);
        }
        else if(money < 50 and money >= 10){
            money = money - 10;
            count++;
            //printf("10 %d\n", count);
        }
        else if(money < 10 and money >= 5){
            money = money - 5;
            count++;
            //printf("5 %d\n", count);
        }
        else if(money < 5 and money >= 1){
            money = money - 1;
            count++;
            //printf("1 %d\n", count);
        }

    }

    printf("%d\n", count);

    return 0;

}