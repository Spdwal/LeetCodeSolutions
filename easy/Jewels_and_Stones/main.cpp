#include<string>
#include<algorithm>
#include<iostream>
using namespace std;

int main()
{
    string J = "aA";
    string S = "aAAbbbb";
    int sum = 0;
    for(int i = 0; i < J.size(); ++i){
        for(int j = 0; j < S.size(); ++j){
            if(J[i] == S[j]){
                sum+=1;
            }
        }
    }

    cout << sum << endl;
}
