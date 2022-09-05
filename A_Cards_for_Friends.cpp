#include <iostream>
#include<vector>
#include<algorithm>
#include<numeric>
#include<map>
#include <bits/stdc++.h> 
#include <cmath>   
#include <unordered_set>
using namespace std;

void calculate(int j, int k, int l){
    int numPaper = 1;
    while(j%2 == 0){
        numPaper*=2;
        j /= 2;
    }
    while(k%2 == 0){
        numPaper*=2;
        k /= 2;
    }
    if(numPaper >= l){
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
}
int main(){
    int n;
    cin >> n;
    for(int i = 0;i<n;i++){
        int j;
        int k;
        int l;
        cin >> j >> k >> l;
        calculate(j,k,l); 
    }
}   