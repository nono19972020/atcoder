#include <iostream>
#include <cstdio>
#include <cstring>
using namespace std;

int main(){
    string n;
    int k;
    char notuse[k];

    cin >> n >> k;
    

    //num = stoi(n);

    for(int i = 0; i < k; i++){
        cin >> notuse[i];
    }

    string num_s = n;
    int num;
    while(1){
        bool see = false;
        for(int i = 0; i < k; i++){
            if(num_s.find(notuse[i]) == string::npos){
                continue;
            }else{
                see = true;
                break;
            }
        }

        if(see == true){
            num = stoi(num_s);
            num = num + 1;
            num_s = to_string(num);
        }
        else{
            break;
        }
    }

    cout << num_s << endl;

    return 0;


    
}