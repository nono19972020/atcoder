#include <iostream>
#include <cstdio>
using namespace std;

int main(){
    long long n;
    cin >> n;

    double MT, mt;

    long long count_vvh = 0, count_vh = 0, count_h = 0, count_hn = 0, count_c = 0, count_vc = 0;

    for(long long i = 0; i < n; i++){
        cin >> MT >> mt;

        if(MT < 0){
            count_vc++;
        }
        else{
            if(mt < 0){
                count_c++;
            }
            else if(mt >= 25){
                count_hn++;
            }

            if(25 <= MT and MT < 30){
                count_h++;
            }
            else if(30 <= MT and MT < 35){
                count_vh++;
            }
            else if(MT >= 35){
                count_vvh++;
            }
        }
    }

    cout << count_vvh << " " << count_vh << " " << count_h << " " << count_hn << " " << count_c << " " << count_vc << endl;

    return 0;
}