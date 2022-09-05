#include <iostream>
#include<vector>
#include<algorithm>
#include<numeric>
#include<map>
#include <bits/stdc++.h> 
using namespace std;

void calculate(string str){
    int numT = 0;
    string replace;
    for(int i = 0; i<str.length();i++){
        if(str.at(i) == 't'){
            numT++;
        } else {
            replace += str.at(i);
        }
    }
    for(int i = 0; i < numT; i++){
        replace += 't';
    }    
    cout << replace << endl;
}
int main(){
    int n;
    cin >> n;
    for(int i = 0;i<n;i++){
         int j;
         cin >> j;
         string str;
         cin >> str;
         calculate(str); 
    }
}