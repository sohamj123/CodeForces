#include <iostream>
#include<vector>
#include<algorithm>
#include<numeric>
#include<map>
#include <bits/stdc++.h> 
using namespace std;

void calculate(int num){
    int ans;
    int factorial = 1;
    num--;

    while(num > 0){
        factorial =factorial * num;
        num--;
    }

    ans = (2 * factorial);

    cout << ans << endl;
}

int main(){
    int n;
    cin >> n;
    calculate(n);
}