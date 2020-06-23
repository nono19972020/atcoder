#include <iostream>
#include <cstdio>
using namespace std;

int main(){
    string n;
    cin >> n;
    if(n[n.size()-1] == '3'){
        printf("bon\n");
    }
    else if(n[n.size()-1] == '0' ||n[n.size()-1] == '1' || n[n.size()-1] == '6'||n[n.size()-1] == '8'){
        printf("pon\n");
    }
    else{
        printf("hon\n");
    }
    return 0;

}