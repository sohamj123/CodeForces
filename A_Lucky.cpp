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
using namespace std;
void calculate(string z){
    int sum = 0;
    for(int i = 0;i<z.length();i++){
        if(i<3){
            sum += z.at(i) - '0';
        } else {
            sum -= z.at(i) - '0';
        }
    }
    if(sum == 0){
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
}

int main(){
    int x;
    cin >> x;
    for(int i = 0;i<x;i++){
        string z;
        cin >> z;
        calculate(z);
    }
        
}   