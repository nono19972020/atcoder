#include <iostream>
#include <cstdio>
using namespace std;

int main(){
    long long n, k, r, s, p;

    cin >> n >> k >> r >> s >> p;

    string machine;

    cin >> machine;
    string hand;
    int point;
    int ans = 0;

    for(int i = 0; i < n; i++){
        if(machine[i] == 'r'){
            hand.push_back('p');
            point = p;
        }
        else if(machine[i] == 's'){
            hand.push_back('r');
            point = r;
        }
        else if(machine[i] == 'p'){
            hand.push_back('s');
            point = s;
        }

        if(i-k >= 0 and hand[i-k] == hand[i]){
            hand[i] = ' ';
            point = 0;
        }
        ans += point;
    }

    cout << ans << endl;

    return 0;
}