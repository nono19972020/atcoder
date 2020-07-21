#include <iostream>
#include <cstdio>
#include <vector>
#include <cstring>
using namespace std;

long long make_index(long long m, long long d){
    if(m == 1) return d;
    else if(m == 2) return d + 31;
    else if(m == 3) return d + 60;
    else if(m == 4) return d + 91;
    else if(m == 5) return d + 121;
    else if(m == 6) return d + 152;
    else if(m == 7) return d + 182;
    else if(m == 8) return d + 213;
    else if(m == 9) return d + 244;
    else if(m == 10) return d + 274;
    else if(m == 11) return d + 305;
    else if(m == 12) return d + 335;

    return -1;
}

int main(){
    vector<char> week(367);

    for(long long i = 1; i <= 366; i++){
        week[i] = 'A' + i % 7;
    }

    vector<char> day_HW(367);

    for(long long i = 1; i <= 366; i++){
        if(week[i] == 'B' || week[i] == 'A') day_HW[i] = 'H';
        else day_HW[i] = 'W';
    }

    /*for(long long i = 1; i <= 366; i++){
        if(week[i] == 'G' || week[i] == 'A') day_HW[i] = 'H';
        else day_HW[i] = 'W';
    }*/

    long long n;
    cin >> n;
    vector<long long> month;
    vector<long long> day;

    for(long long i = 0; i < n; i++){
        string s;
        cin >> s;
        string s1, s2;
        bool find = false;
        for(long long j = 0; j < s.size(); j++){
            if(find == false and s[j] != '/') s1.push_back(s[j]);
            if(find == true) s2.push_back(s[j]);

            if(s[j] == '/') find = true;
        }

        month.push_back(stoll(s1));
        day.push_back(stoll(s2));
    }

    for(long long i = 0; i < n; i++){
        long long index = make_index(month[i], day[i]);
        //printf("index %lld\n", index);
        if(day_HW[index] == 'W') day_HW[index] = 'H';
        else{
            while(index <= 366){
                if(day_HW[index] == 'W'){
                    day_HW[index] = 'H';
                    break;
                }
                else{
                    index++;
                }
            }
        }
    }

    long long length_max = 0;
    long long i = 1;

    while(i <= 366){
        if(day_HW[i] == 'H'){
            long long length = 0;
            while(i <= 366 and day_HW[i] == 'H'){
                length++;
                i++;
            }

            length_max = max(length_max, length);
        }
        i++;
    }

    cout << length_max << endl;
    return 0;
}