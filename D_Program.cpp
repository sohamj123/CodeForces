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
void calculate(string str,vector< vector<int> > q,int y){
    int x = 0;
    int max = 0;
    int min = x;
    for(int i = 0;i<str.length();i++){
        if(str.at(i) == '+'){
            x++;
        } else {
            x--;
        }
        if(x > max){
            max = x;
        } else if(x < min){
            min = x;
        }
    }
    for(int i = 0;i<y;i++){
        int sum = 0;
        for(int j = q[i][0] - 1;j<q[i][1];j++){
            if(str.at(i) == '+'){
                sum++;
            } else {
                sum--;
            }
        }
        if(sum < 0){
            min -= sum;
            if(min > 0){
                min = 0;
            }
        } else if(sum > 0){
            max -= sum;
            if(max < 0){
                max = 0;
            }
        }
        cout << max - min + 1 << endl;
    }
}

int main(){
    int x;
    cin >> x;
    for(int i = 0;i<x;i++){
       int y;
       int z;
       string orders;
       cin >> y >> z >> orders;
       vector< vector<int> > q;
       for(int i = 0;i<z;i++){
           vector<int> nums;
           int l,m;
           cin >> l >> m;
           nums.push_back(l);
           nums.push_back(m);
           q.push_back(nums);
       }
       calculate(orders,q,z);
    }
}   