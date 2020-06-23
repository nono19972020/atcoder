#include <iostream>
#include <cstdio>
using namespace std;

int main(){
    string c;
    string s;

    getline(cin, c);

    int i = 0;

    //printf("%lu\n", c.size());

    while(i < c.size()){
        //printf("c[i] %c\n", c[i]);
        if(c[i] == ' '){
            //printf("space 0\n");
            while(c[i+1] == ' '){
                //printf("space\n");
                i++;
            }
            s = s + ',';
            i++;
        }
        else{
            s = s + c[i];
            //printf("c[i] %c\n", c[i]);
            i++;
            
        }
        //printf("dd\n");
    }

    cout << s << endl;

    return 0;
}