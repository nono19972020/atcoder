#include <iostream>
#include <cstdio>
#include <vector>
using namespace std;

int main(){
    long long n;
    cin >> n;
    long long start, goal;
    cin >> start >> goal;
    start--;
    goal--;
    long long k;
    cin >> k;

    vector<bool> visit(n, false);
    visit[start] = true;
    visit[goal] = true;

    for(long long i = 0; i < k; i++){
        long long a;
        cin >> a;
        a--;
        if(visit[a] == false){
            visit[a] = true;
        }
        else{
            printf("NO\n");
            return 0;
        }
    }

    printf("YES\n");
    return 0;

}