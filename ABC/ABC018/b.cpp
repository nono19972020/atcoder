#include <iostream>
#include <cstdio>
#include <algorithm>
using namespace std;

string word_reverse(string s, int l, int r){
    string front = s.substr(0, l-1);
    string center = s.substr(l-1, r-l+1);
    string back = s.substr(r);
    reverse(center.begin(), center.end());

    //cout << "front:"<<front << endl;
    //cout << "center:"<<center << endl;
    //cout << "back:"<< back << endl;
    s = front + center + back;
    return s;

}

int main(){
    string s;
    cin >> s;

    int n;
    cin >> n;

    int l[n], r[n];

    for(int i = 0; i < n; i++){ 
        cin >> l[i] >> r[i];
    }

    string g = s;
    for(int i = 0; i < n; i++){ 
       g = word_reverse(g, l[i], r[i]);
       //cout << g << endl;
    }
    
    

    cout << g << endl;

    return 0;
}