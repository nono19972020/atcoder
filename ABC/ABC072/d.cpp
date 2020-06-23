#include <iostream>
#include <cstdio>
using namespace std;
int n;
int p[100001];

void print(){
    for(int i = 1; i <= n; i++){
        printf("%d", p[i]);
    }
    printf("\n");
}

int main(){
    cin >> n;


    for(int i = 1; i <= n; i++){
        cin >> p[i];
    }

    int count = 0;

    for(int i = 1; i <= n; i++){
        if(p[i] == i){
            int tmp = p[i];
            p[i] = p[i+1];
            p[i+1] = tmp;
            //print();
            count++;
        }
    }

    printf("%d\n", count);

    return 0;

}