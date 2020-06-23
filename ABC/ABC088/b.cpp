#include <iostream>
#include <cstdio>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    int n;

    cin >> n;
    
    vector<int> a(n);
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }

    int point_a = 0, point_b = 0;

    sort(a.begin(), a.end());
    reverse(a.begin(), a.end());

    

    for(int i = 0; i < n; i++){
        if(i % 2 == 0){
            point_a = point_a + a[i];
        }
        else{
            point_b = point_b + a[i];
        }
    }

   
    printf("%d\n", point_a - point_b);

    return 0;

}