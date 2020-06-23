#include <iostream>
#include <cstdio>
#include <vector>
using namespace std;

int main(){
	long n;
	cin >> n;
  //vector<long> A;
	long A[n];
	long x;
	long B[n];
  B[0] = 0;
	for(long i = 1; i < n; i++){
      cin >> x;
      //A.push_back(x - 1);
      A[i] = x - 1;
      B[i] = 0;
    }
  
  
  for(long i = 1; i < n; i++){
      B[A[i]]++;
    }
	
  for(long i = 0; i < n; i++){
      printf("%ld\n", B[i]);
    }
    return 0;
}
