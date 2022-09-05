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
void calculate(long long a, long long b){
    long long count1 = 0;
    long long min;
    long long power = 1;
    int baseOrig = b;
    if(b == 1){
        b++;
    }
    while(pow(b,power) <= a){
        power++;
    }
    min = power + b - baseOrig;
    b++;
    count1++;
    power-=2;
    while(power>0){
        if(pow(b,power) > a){
            while(pow(b,power) > a){
                power--;
            }
            power++;
            if(min > power + b -baseOrig){
                min = power + b - baseOrig;
            }
            power--;
        }
        power--;
        b++;
        count1++;
    }   
    cout << min << endl;
}

int main(){
    int x;
    cin >> x;
    for(int i = 0;i<x;i++){
        long long y,z;
        cin >> y >> z;
        calculate(y,z);
    }
}  