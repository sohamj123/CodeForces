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
void calculate(vector<string> str,int y){
    int pos1=-1;
    int pos2 = -1;
    int line1 = -1;
    int line2 = -1;
    for(int i = 0;i<y;i++){
        string check = str[i];
        for(int j=0;j<y;j++){
            if(check.at(j) == '*'){
                if(pos1 == -1){
                    pos1=j;
                    line1=i;
                } else {
                    pos2 = j;
                    line2 = i;
                }
            }
        }
        if(pos2 != -1){
            break;
        }
    }
    if(pos1==pos2){
        if(pos1 == 0){
            str[line1].at(1) = '*';
            str[line2].at(1) = '*';
        } else {
        str[line1].at(0) = '*';
        str[line2].at(0) = '*';
        }
    } else if(line1 == line2){
        if(line1 == 0){
            str[1].at(pos1) = '*';
            str[1].at(pos2) = '*';
        } else {
            str[0].at(pos1) = '*';
            str[0].at(pos2) = '*';
        }
    } else {
        str[line1].at(pos2) = '*';
        str[line2].at(pos1) = '*';
    }
    for(int i = 0;i<y;i++){
        cout << str[i] << endl;
    }
}

int main(){
    int x;
    cin >> x;
    for(int i = 0;i<x;i++){
       int y;
       vector<string> str;
       cin >> y;
       for(int i = 0;i<y;i++){
           string orders;
           cin >> orders;
           str.push_back(orders);
       }
       calculate(str,y);
    }
}   