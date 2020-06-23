#include <iostream>
#include <cstdio>
using namespace std;

int main(){
    string s, t;

    cin >> s >> t;

    if(s.length() < t.length()){
        //printf("aaaa\n");
        printf("UNRESTORABLE\n");
        return 0;
    }
    string ans = s;
    string min_ans = s;

    for(int i = 0; i < s.length(); i++){
        min_ans[i] = 'z';
    }

    int j;

    bool flag = false;

    //printf("s-t %lu\n", s.length() - t.length() + 1);

    for(int i = 0; i < s.length() - t.length() + 1; i++){
        j = 0;
        while(1){
            if(s[i+j] == t[j]){
                //printf("s[i+j] %c t[j] %c\n", s[i+j], t[j]);
                j++;
                if(j == t.length()){
                    break;
                }
            }
            else if(s[i+j] == '?'){
                //printf("s[i+j] %c t[j] %c\n", s[i+j], t[j]);
                //printf("j %d\n", j);
                j++;
                if(j == t.length()){
                    break;
                }
            }
            else{
                //printf("s[i+j] %c t[j] %c\n", s[i+j], t[j]);
                break;
            }
        }
        //printf("j %d t.length() %lu\n", j, t.length());

        if(j == t.length()){
            //printf("flag ture\n");
            flag = true;
            int f = 0;
            for(int k = 0; k < s.length(); k++){
                if(i <= k and k <= i+j-1){
                    ans[k] = t[f];
                    f++;
                }
                else{
                    if(s[k] != '?'){
                        ans[k] = s[k];
                    }
                    else{
                        ans[k] = 'a';
                    }
                    
                }
            }

           // printf("ans %s\n", ans.c_str());
            //printf("min ans %s\n", min_ans.c_str());

            //printf("ans.length %lu min_ans.length() %lu\n", ans.length(), min_ans.length());

            if(ans > min_ans){
                //printf("compare\n");
            }
            else if(ans == min_ans){
                //printf("equal\n");
            }
            else{
                //printf("ans is early\n");
                min_ans = ans;
            }
        }

    }

    if(flag == false){
        //printf("%s\n", min_ans.c_str());
        printf("UNRESTORABLE\n");
    }
    else{
        printf("%s\n", min_ans.c_str());
    }

    return 0;
}