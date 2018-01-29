#include<map>
#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> v1{12, 28, 46, 32, 50};
    vector<int> v2{50, 12, 32, 46, 28};
    vector<int> ivec;
    map<int, int> imap;
    for(int i = 0; i < v1.size(); ++i){
        imap[v2[i]] = i;
    }

    for(int i = 0; i < v1.size(); ++i){
        ivec.push_back(imap[v1[i]]);
    }

    for(auto c : ivec){
        cout << c << endl;
    }
}
