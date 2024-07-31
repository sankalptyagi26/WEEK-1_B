#include<bits/stdc++.h>
using namespace std;
int main(){
    string str , temp = "";
    getline(cin , str);
    unordered_map<string , int> m;
    int i;
    for(i = 0 ; i < str.size() ; i++){
        if(str[i] == ' '){
            m[temp]++;
            temp = "";
        }
        temp.push_back(str[i]);
    }
    for(auto &it : m){
        cout<<it.first<<" : "<<it.second<<endl;
    }
    return 0;
}
