#include <iostream>
#include <cstdio>
#include <vector>
using namespace std;

vector<vector<long long> > a(3, vector<long long> (3));
vector<vector<bool> > atari(3, vector<bool> (3, false));

void mani(long long b){
    for(long long i = 0; i < 3; i++){
        for(long long j = 0; j < 3; j++){
            if(b == a[i][j]) atari[i][j] = true;
        }
    }
    return;
}

bool bingo(){
    if(atari[0][0] == true and atari[0][1] == true and atari[0][2] == true) return true;
    else if(atari[1][0] == true and atari[1][1] == true and atari[1][2] == true) return true;
    else if(atari[2][0] == true and atari[2][1] == true and atari[2][2] == true) return true;
    else if(atari[0][0] == true and atari[1][0] == true and atari[2][0] == true) return true;
    else if(atari[0][1] == true and atari[1][1] == true and atari[2][1] == true) return true;
    else if(atari[0][2] == true and atari[1][2] == true and atari[2][2] == true) return true;
    else if(atari[0][0] == true and atari[1][1] == true and atari[2][2] == true) return true;
    else if(atari[0][2] == true and atari[1][1] == true and atari[2][0] == true) return true;
    else return false;
}
int main(){
    for(long long i = 0; i < 3; i++){
        for(long long j = 0; j < 3; j++){
            cin >> a[i][j];
        }
    }

    long long n;
    cin >> n;

    for(long long i = 0; i < n; i++){
        long long b;
        cin >> b;
        mani(b);
    }

    if(bingo() == true) printf("Yes\n");
    else printf("No\n");
    
    return 0;
}