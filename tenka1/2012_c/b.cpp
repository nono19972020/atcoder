#include <iostream>
#include <cstdio>
#include <set>
using namespace std;

int main(){
    string s;
    cin >> s;

    set<string> S;
    set<string> H;
    set<string> D;
    set<string> C;

    long long i = 0;
    char loyal_mark;
    while(i < s.size()){
        if(S.size() == 5 || H.size() == 5 ||D.size() == 5 || C.size() == 5){
            if(S.size()== 5){
                loyal_mark = 'S';
            }
            else if(H.size() == 5){
                loyal_mark = 'H';
            }
            else if(D.size() == 5){
                loyal_mark = 'D';
            }
            else if(C.size() == 5){
                loyal_mark = 'C';
            }
            break;
        }

        if(s[i] == 'S' ||s[i] == 'H' || s[i] == 'D' || s[i] == 'C'){
            char mark = s[i];
            i++;
            if(s[i] != '1'){
                if(s[i] == 'A'||s[i] == 'K' || s[i] == 'J' ||s[i] == 'Q'){
                    string card;
                    card = mark + s[i];
                    if(mark == 'D'){
                        D.insert(card);
                    }
                    else if(mark == 'C'){
                        C.insert(card);
                    }
                    else if(mark == 'H'){
                        H.insert(card);
                    }
                    else if(mark == 'S'){
                        S.insert(card);
                    }
                }
            }
            else{
                string card;
                card.push_back(mark);
                card.push_back('1');
                card.push_back('0');
                if(mark == 'D'){
                    D.insert(card);
                }
                else if(mark == 'C'){
                    C.insert(card);
                }
                else if(mark == 'H'){
                    H.insert(card);
                }
                else if(mark == 'S'){
                    S.insert(card);
                }
                i++;
            }
        }
        i++;
    }

    long long count = 0;
    string ans;
    //printf("%c\n", loyal_mark);
    set<string> hand;
    i = 0;
    while(i < s.size()){
        if(hand.size() == 5){
            break;
        }

        if(s[i] == loyal_mark){
            i++;
            string card;
            card.push_back(loyal_mark);
            if(s[i] == '1'){
                card.push_back('1');
                card.push_back('0');
                if(hand.find(card) == hand.end()){
                    hand.insert(card);
                }
                else{
                    ans.push_back(loyal_mark);
                    ans.push_back('1');
                    ans.push_back('0');
                }
                i++;
            }
            else{

                if(s[i] == 'A' || s[i] == 'J' || s[i] == 'K' || s[i] == 'Q'){
                    card.push_back(s[i]);
                    if(hand.find(card) == hand.end()){
                        hand.insert(card);
                    }
                    else{
                        ans.push_back(loyal_mark);
                        ans.push_back(s[i]);
                    }
                    
                }
                else{
                    ans.push_back(loyal_mark);
                    ans.push_back(s[i]);
                }
            }
        }
        else{
            ans.push_back(s[i]);
            i++;
            ans.push_back(s[i]);
            if(s[i] == '1'){
                ans.push_back('0');
                i++;
            }
        }
        i++;
    }

    if(ans == ""){
        cout << '0' << endl;
    }
    else{
        cout << ans << endl;
    }
    
    return 0;
}