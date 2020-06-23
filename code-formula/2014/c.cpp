#include <iostream>
#include <cstdio>
#include <set>
using namespace std;

int main(){
    string s;
    getline(cin, s);

    set<string> user_list;

    int i = 0;

    while(i < s.size()){
        if(s[i] == '@'){
            string name;
            //printf("s[i] %c\n", s[i]);
            i++;
            if(s[i] == '@' || s[i] == ' '){
                continue;
            }
            while(i < s.size()){
                if(s[i+1] == '@' || s[i+1] == ' '){
                    name.push_back(s[i]);
                    break;
                }
                name.push_back(s[i]);
                i++;
            }
            user_list.insert(name);
            i++;
        }
        else{
            //printf("else s[i] %c\n", s[i]);
            i++;
        }
    }

    set<string>::iterator it;

    if(user_list.find("\0") != user_list.end()){
        //printf("find null \n");
        user_list.erase("\0");
    }

    for(it = user_list.begin(); it != user_list.end(); it++){
        cout << *it << endl;
    }
    ///cout <<user_list.size() << endl;

    return 0;
}