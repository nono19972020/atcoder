#include <iostream>
#include <cstdio>
#include <map>
using namespace std;

int main(){
    int n, m;
    cin >> n >> m;

    map<char, int> name;
    map<char, int> kit;

    string s;
    string k;
    cin >> s;
    cin >> k;

    for(int i = 0; i < k.size(); i++){
        if(kit.find(k[i]) == kit.end()){
            kit[k[i]] = 1;
        }
        else{
            kit[k[i]]++;
        }
    }


    for(int i = 0; i < s.size(); i++){
        if(kit.find(s[i]) == kit.end()){
            printf("-1\n");//作れない
            return 0;
        }

        if(name.find(s[i]) == name.end()){
            name[s[i]] = 1;
        }
        else{
            name[s[i]]++;
        }
    }

    //作れる場合
    map<char, int>::iterator it;
    
    int name_v;
    int kit_v;
    int count_max = 1;
    for(it = name.begin(); it != name.end(); it++){
        if((it->second - kit[it->first]) > 0){
            name_v = it->second;
            kit_v = kit[it->first];
            //max_dis = it->second - kit[it->first];
            int count = 1;
            int first_kit_v = kit_v;
            //printf("name_v %d kit_v %d\n", name_v, kit_v);
            while(kit_v < name_v){
                //printf("a\n");
                count++;
                kit_v += first_kit_v;
            }
            //printf("count_max %d char %c\n", count_max, it->first);
            count_max = max(count_max, count);
        }
    }

   

    printf("%d\n", count_max);

    return 0;

    

}