#include <iostream>
#include<vector>
#include<algorithm>
#include<numeric>
#include<map>
#include <bits/stdc++.h> 
using namespace std;

void calculate(int min,int max){
    if((min * 2) >  max ){
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
}

int main(){
    int n;
    cin >> n;
    for(int i = 0; i < n; i++){
        int min,max;
        cin >> min >> max;
        calculate(min,max);
    }
}