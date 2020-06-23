#include <iostream>
#include <cstdio>
#include <algorithm>
#include <vector>
#include <cmath>
using namespace std;

int main(){
    int n;
    cin >> n;
    int x[n];
    int y[n];

    vector<int> index(n);
    for(int i = 0; i < n; i++){
        cin >> x[i] >> y[i];
        index[i] = i;
    }

    double all_length = 0;
    do{
        double length = 0;
        for(int i = 0; i < n-1; i++){
            double a = (x[index[i+1]]-x[index[i]])*(x[index[i+1]]-x[index[i]]);
            double b = (y[index[i+1]]-y[index[i]])*(y[index[i+1]]-y[index[i]]);
            length += sqrt(a+b);
        }
     
        all_length += length;
    }while(next_permutation(index.begin(), index.end()));


    double z = 1;

    for(int i = 1; i <= n; i++){
        z = z *(double) i;
    }


    printf("%.10f\n", all_length/z);
    return 0;
}