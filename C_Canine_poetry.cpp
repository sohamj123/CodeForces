#include <iostream>
#include<vector>
#include<algorithm>
#include<numeric>
#include<map>
#include <bits/stdc++.h> 
#include <cmath>   
#include <unordered_set>
using namespace std;

void calculate(string str){
    int count = 0;
    if(str.length() <= 1){
        
    } else {
        for(int i = 0;i<str.length()-2;i++){
            if(str.at(i) == '!'){
            
            } else
            if(str.at(i) == str.at(i+2) && str.at(i) == str.at(i+1)){
                count+=2;
                str.at(i+2) = '!';
                str.at(i+1) = '!';
                str.at(i) = '!';
            }else  if(str.at(i) == str.at(i+1)){  
                count++;
                str.at(i) = '!';
                str.at(i+1) = '!';
            } else 
            if(str.at(i) == str.at(i+2)){
                count++;
                str.at(i+2) = '!';
                str.at(i) = '!';
            } 
        
        }
        if(str.at(str.length()-2) == str.at(str.length()-1)){
            if(str.at(str.length()-1) != '!')
            count++;
        }
    }
    
    cout << count << endl;
}
int main(){
    int n;
    cin >> n;
    for(int i = 0;i<n;i++){
        string str;
        cin >> str;
        calculate(str); 
    }
}   
