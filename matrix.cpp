#include <iostream>
#include<bits/stdc++.h>
#define mod 1000000007
#define long long ll
using namespace std;


int main() {
    int n = 8;
    int a[n][n];
    int count = 1;
    for(int i = 0; i< 8; i++){
        for(int j = 0; j<8; j++){
            cin>>a[i][j];
        }
    }
    
    int ans = 1;
    for(int i = 0; i<n-1; i++){
        for(int j = 0; j<n-1; j++){
            cout<<"Sub: "<<ans++<<endl;
            cout<<a[i][j]<<"  "<<a[i][j+1]<<endl;
            cout<<a[i+1][j]<<"  "<<a[i+1][j+1]<<endl;
            int mymin = min(min(a[i][j], a[i][j+1]), min(a[i+1][j+1], a[i+1][j]));
            int x, y;
            if(mymin == a[i][j]){
                x = i; y = j;
            }else if(mymin == a[i][j+1]){
                x = i; y = j+1;
            }
            else if(mymin == a[i+1][j+1]){
                x = i+1; y = j+1;
            }
            else if(mymin == a[i+1][j]){
                x = i+1; y = j;
            }
            j++;
            cout<<"Minimum Element : "<<mymin<<"  axis :"<<x<<" "<<y<<endl;
        }
        i++;
        cout<<endl;
    }
    
	return 0;
}