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
void calculate(int num,string str){
    int num8 = 0;
    for(int i = 0;i<num-10;i++){
        if(str.at(i) == '8'){
            num8++;
        }
    }
    if(num8<=(num-11)/2){
        cout << "NO";
    } else {
        cout << "YES";
    }
}

int main(){
    string str; 
    int num;
    cin >> num;
    cin >> str;
    calculate(num,str);
}   