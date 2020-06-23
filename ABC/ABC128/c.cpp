#include <iostream>
#include <cstdio>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    long long n, m;
    cin >> n >> m;

    vector<vector<long long> > s(m);
  
    for(long long i = 0; i < m; i++){
        long long k;
        cin >> k;
        
        for(long long j = 0; j < k; j++){
            long long a;
            cin >> a;
            s[i].push_back(a-1);
        }
    }

    vector<long long> p(m);

    for(long long i = 0; i < m; i++){
        cin >> p[i];
    }

    long long count = 0;
    for(long long bit = 0; bit < (1 << n); bit++){

        bool light = true;
        for(long long i = 0; i < m; i++){
            long long count_on = 0;

            for(long long j = 0; j < n; j++){
                if(find(s[i].begin(), s[i].end(), j) == s[i].end()){
                    continue;
                }

                if(bit & (1 << j)){
                    
                    count_on++;
                }
            }
            //printf("i %lld count_on %lld\n", i, count_on);
            //printf("bit %lld count_on %lld p[%lld] %lld\n", bit, count_on, i, p[i]);
            if(count_on % 2 != p[i]){
                light = false;
                //break;
            }
        }

        if(light == true){
            count++;
        }

    }

    cout << count << endl;

    return 0;

}