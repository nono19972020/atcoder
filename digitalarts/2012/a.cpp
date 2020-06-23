#include <iostream>
#include <cstdio>
#include <string.h>
#include <vector>
using namespace std;

int main(){
    string s;

    getline(cin, s);

    int n; 
    cin >> n;

    if(n == 0){
        cout << s << endl;
        return 0;
    }

    string t[n];

    for(int i = 0; i < n; i++){
        cin >> t[i]; 
    }
    int space_count = 0;
    for(int i = 0; i < s.size(); i++){
        if(s[i] == ' '){
            space_count++;
        }
    }

    string words[space_count+1];
    int a = 0;
    for(int i = 0; i < s.size(); i++){
        if(s[i] != ' '){
            words[a] += s[i];
        }else{
            a++;
        }
    }


    //printf("sp %d\n", space_count);

    string ans;
    bool flag = true;
    for(int i = 0; i < space_count+1; i++){
        //対象となる単語
        for(int j = 0; j < n; j++){
            //NGワード
            flag = true;
            if(t[j].size() != words[i].size()){
                //文字数が違ったらダメ
                flag = false;
                continue;
            }

            for(int k = 0; k < t[j].size(); k++){
                //一文字ずつ調べる
                if(t[j][k] == '*' || t[j][k] == words[i][k]){
                    continue;
                }
                else{
                    flag = false;
                    break;
                }
            }

            if(flag == true){
                //見つかったら***で埋める　
                for(int l = 0; l < t[j].size(); l++){
                    ans +=  '*';
                }
                ans += ' ';
                break;
            }
        }

        if(flag == false){
            ans += words[i];
            ans += ' ';
        }
    }

    cout << ans << endl;
    return 0;
    
}