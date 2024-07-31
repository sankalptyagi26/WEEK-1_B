#include<bits/stdc++.h>
using namespace std;
int main(){
    int n , m , i , j;
    cin>>n>>m;
    vector<vector<int>> mat(n , vector<int>(m));
    for(i = 0 ; i < n ; i++){
        for(j = 0 ; j < m ; j++){
            cin>>mat[i][j];
        }
    }
    vector<vector<int>> trnsp(n , vector<int>(m));
    int p = 0 , q = 0;
    for(i = 0 ; i < n ; i++){
        for(j = 0 ; j < m ; j++){
            trnsp[p][q] = mat[i][j];
            p++;
        }
        p = 0;
        q++;
    }
    cout<<endl;
    for(i = 0 ; i < n ; i++){
        for(j = 0 ; j < m ; j++){
            cout<<trnsp[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}
