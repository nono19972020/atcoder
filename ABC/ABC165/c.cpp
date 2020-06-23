#include <iostream>
#include <cstdio>
#include <string.h>
#include <vector>
#include <algorithm>
using namespace std;

int n;
int m;
int q;
vector<int> a, b, c, d;
int ans;

void dfs(vector<int> A){
    if(A.size() == n + 1){
        int now = 0;
        for(int i = 0; i < q; i++){
            if(A[b[i]] - A[a[i]] == c[i]){
                now = now + d[i];
            }
            ans = max(ans, now);
        }
        
        for (int i = 1; i < A.size(); i++){
         printf("%d", A[i]);
        }
        printf("\n");
        
        return;
    }

    A.push_back(A.back());
    //printf("%d\n", A.back());
    while(A.back() <= m){
        dfs(A);
        A.back()++;
    }
}

int main(){
   
    int max = 0;
    

    

    cin >> n >> m >> q;

    a = b = c = d = vector<int>(q);
    //printf("%d\n", a[0]);
    
    for(int i = 0; i < q; i++){
        cin >> a[i] >> b[i] >> c[i] >> d[i];
    }

    dfs(vector<int>(1, 1));
    printf("%d\n", ans);

    return 0;
    
    
}