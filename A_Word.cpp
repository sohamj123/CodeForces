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
using namespace std;
void calculate(string x){
    int upper = 0;
    int lower = 0;
    string str = "";
    for(int i = 0;i<x.length();i++){
        if((int)x.at(i) > 90){
            lower++;
        } else {
            upper++;
        }
    }
    if(upper > lower){
        for(int i = 0;i<x.length();i++){
            str += toupper(x.at(i));
        }
    } else {
        for(int i = 0;i<x.length();i++){
            str += tolower(x.at(i));
        }
    }
    cout << str;
}

int main(){
    string x;
    cin >> x;
    calculate(x);
}   