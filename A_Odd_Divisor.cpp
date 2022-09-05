#include <iostream>
#include<vector>
#include<algorithm>
#include<numeric>
#include<map>
#include <bits/stdc++.h> 
#include <cmath>   
#include <unordered_set>
#include <iostream>     
#include <algorithm>  
#include <vector>
#include <stdio.h>
#include <ctype.h>
#include <iostream>     
#include <algorithm>    
#include <vector>
#include <set>
using namespace std;
void calculate(long long n){
    bool isTrue = false;
    while(n > 2){
        if(n % 2 == 1){
            isTrue = true;
            break;
        } else {
            n /= 2;
        }

    }
    if(isTrue){
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
}

int main(){
    int x;
    cin >> x;
    for(int i = 0;i<x;i++){
       long long y;
       cin >> y;
       calculate(y);
    } 
}
