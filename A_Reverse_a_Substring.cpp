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
    int first;
    int last;
    bool isTrue = false;
    for(int i = 0;i<num-1;i++){
        if(int(str.at(i)) > int(str.at(i+1))){
            first = i+1;
            last = i+2;
            isTrue = true;
            break;
        }
    }
    if(isTrue){
        cout << "YES" << endl << first << " " << last;
    }  else {
        cout << "NO";
    }
}

int main(){
    string str; 
    int num;
    cin >> num;
    cin >> str;
    calculate(num,str);
}   