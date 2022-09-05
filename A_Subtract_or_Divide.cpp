#include <iostream>
#include<vector>
#include<algorithm>
#include<numeric>
#include<map>
#include <bits/stdc++.h> 
using namespace std;

void calculate(int n){
    if(n == 1){
        cout << 0;
    } else if(n == 2){
        cout << 1;
    }else if(n == 3){
        cout << 2;
    } 
    else if(n%2 == 0){
        cout << 2;
    } else {
        cout << 3;
    }
    cout << endl;
}
int main(){
    int n;
    cin >> n;
    for(int i = 0;i<n;i++){
         int j;
         cin >> j;
         calculate(j);
    }
}