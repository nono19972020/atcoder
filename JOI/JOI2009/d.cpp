#include <iostream>
#include <cstdio>
#include <vector>
#include <algorithm>
#include <set>
using namespace std;

int main(){
    int n;
    cin >> n;

    int k; 

    cin >> k;

    vector<int> v;

    for(int i = 0; i < n; i++){
        int a;
        cin >> a;
        v.push_back(a);
    }
    sort(v.begin(), v.end());//next_permutationを使うためにソートする

    set<int> s;

    do{
        int sum = 0;
        for(int i = 0; i < k; i++){
            if(v[i] < 10){
            sum = 10*sum + v[i];
            }
            else{
                sum = 100*sum + v[i];
            }
        }
        s.insert(sum);
    }while(next_permutation(v.begin(), v.end()));

    printf("%lu\n", s.size());

    return 0;
}