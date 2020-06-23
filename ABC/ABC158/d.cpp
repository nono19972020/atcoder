#include <iostream>
#include <cstdio> 
#include <algorithm>
using namespace std;

int main(){
    string s;
    long long q;

    cin >> s >> q;

    long long reverse_count = 0;
    string front;
    string back;

    for(long long i = 0; i < q; i++){
        long long t, f;
        char c;

        cin >> t;
        if(t == 1){
            reverse_count++;
            
        }
        else{
            cin >> f >> c;
            if(reverse_count % 2 == 0){
                if(f == 1){
                    //s = c + s;
                    //front = front + c;
                    front.insert(front.begin(), c);

                }
                else{
                    //s = s + c;
                    //back = back + c;
                    back.push_back(c);
                }
            }
            else{
                if(f == 1){
                    //s = s + c;
                    //back = back + c;
                    back.push_back(c);
                }
                else{
                    //s = c + s;
                    //front = front + c;
                    //front.push_back(c);
                    front.insert(front.begin(), c);
                }
            }
        }
    }

    s = front + s + back;

    if(reverse_count %2 != 0){
        //reverse(s.begin(), s.end());
        for(long long i = s.size()-1; i >= 0; i--){
            cout << s[i];
        }
        cout << endl;

    }
    else{

        cout << s << endl;
    }

    return 0;
}