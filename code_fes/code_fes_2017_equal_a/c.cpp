#include <iostream>
#include <cstdio>
#include <vector>
using namespace std;

int main(){
    long long h, w;
    cin >> h >> w;

    

    vector<long long> count(26, 0);

    for(long long i = 0; i < h; i++){
        for(long long j = 0; j < w; j++){
            char a;
            cin >> a;
            count[a-'a']++;
        }
    }

    if(h % 2 == 0 and w % 2 == 0){
        for(long long i = 0; i < 26; i++){
            if(count[i] == 0){
                continue;
            }

            if(count[i] % 4 != 0){
                printf("No\n");
                return 0;
            }
        }
        printf("Yes\n");
        return 0;
    }
    else{
        long long count_1 = 0;
        if(h % 2 != 0 and w % 2 != 0){
            for(long long i = 0; i < 26; i++){
                if(count[i] % 4 == 1){
                    count_1++;
                }
            }

            if(count_1 != 1){
                printf("No\n");
                return 0;
            }
            long long count_2 = 0;
            for(long long i = 0; i < 26; i++){
                if(count[i] % 4 == 2){
                    count_2++;
                }
            }

            if((h-1)/2 + (w-1)/2 >= count_2){
                printf("Yes\n");
            }
            else{
                printf("No\n");
            }
            return 0;

        }
        else{
            long long count_3 = 0;
            if(h % 2 != 0){
                long long count_2 = 0, count_4 = 0;
                for(long long i = 0; i < 26; i++){
                    if(count[i] == 0){
                        continue;
                    }
                    if(count[i] % 4 == 2){
                        count_2++;
                    }
                    else if(count[i] % 4 == 0){
                        count_4++;
                    }
                    else if(count[i] % 4 == 1){
                        count_1++;
                    }
                    else{
                        count_3++;
                    }
                }
                //printf("count_2 %lld count_4 %lld\n", count_2, count_4);
                if(count_1  == 0 and count_3 == 0 and count_2 <= w/2){
                    printf("Yes\n");
                }
                else{
                    printf("No\n");
                }
                return 0;
            }
            else{
                long long count_2 = 0, count_4 = 0;
                for(long long i = 0; i < 26; i++){
                    if(count[i] == 0){
                        continue;
                    }
                    if(count[i] % 4 == 2){
                        count_2++;
                    }
                    else if(count[i] % 4 == 0){
                        count_4++;
                    }
                    else if(count[i] % 4 == 1){
                        count_1++;
                    }
                    else{
                        count_3++;
                    }
                }

                if(count_1 == 0 and count_3 == 0 and count_2 <= h/2){
                    printf("Yes\n");
                }
                else{
                    printf("No\n");
                }
                return 0;

            }
        }
    }
    return 0;
}