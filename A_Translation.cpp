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
using namespace std;

void calculate(string x,string y){
    int i = 0;
    bool isTrue = true;
    while(i < y.length()){
        if(x.at(i) != y.at(y.length()-1-i)){
            isTrue = false;
            break;
        }
        i++;
    }
    if(isTrue){
        cout << "YES";
    } else {
        cout << "NO";
    }
}
int main(){
        string x;
        string y;
        cin >> x >> y;
        calculate(x,y);
}   