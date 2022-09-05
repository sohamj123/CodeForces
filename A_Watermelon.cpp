#include <iostream>
#include<vector>
#include<algorithm>
#include<numeric>
#include<map>
#include <bits/stdc++.h> 
using namespace std;

void calculate(int n){
    if(n < 4){
        cout << "NO";
    }
    else if(n%2 == 0){
        cout << "YES";
    } else {
        cout << "NO";
    }
}

int main(){
    int n;
    cin >> n;
    calculate(n);
}