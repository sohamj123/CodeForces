#include <iostream>
#include<vector>
#include<algorithm>
#include<numeric>
#include<map>
#include <bits/stdc++.h> 
#include <string>
#include <string.h> 
using namespace std;

void calculate(int length,string str){
    int total = length/2;
    int zero1 = 0;
    int one0 = 0;
    for(int i = 0;i<length-1;i++){
        if(str.at(i) == '0' && str.at(i+1) == '1' ){
            zero1++;
        } else if(str.at(i) == '1' && str.at(i+1) == '0'){
            one0++;
        }
    }
    if(one0 > zero1){
        cout << total - one0 << endl;
    } else {
        cout << total - zero1 << endl;
    }
}

int main(){
    int n;
    cin >> n;
    for(int i = 0; i < n; i++){
        int length;
        string s;
        cin >> length >> s;
        calculate(length,s);
    }
}