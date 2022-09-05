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
#include <stdio.h>      /* printf */
#include <math.h>  
using namespace std;
void calculate(vector<int> nums,int len){
    int count = 0;
    int c0 = 0;
    int c1 = 0;
    int c2 = 0;
    for(int i = 0;i<len;i++){
        if(nums[i]%3 == 0){
            c0++;
        } else if(nums[i]%3 == 1){
            c1++;
        } else {
            c2++;
        }
    }
    for(int i = 0;i<6;i++){
        if(c2 > len/3){
            count+=c2 -len/3;          
            c0 += c2-len/3;
            c2 = len/3;
        }
        if(c0 > len/3){
            count+=c0-len/3;
            c1 += c0-len/3;
            c0 = len/3;
        } 
        if(c1 > len/3){
            count+=c1-len/3;
            c2 += c1-len/3;
            c1 = len/3;
        }
        if(c1 == len/3 && c2==len/3 && c0 == len/3){
            break;
        }
    }
    
    cout << count <<  endl;
}

int main(){
    int x;
    cin >> x;
    vector<int> nums;
    for(int i = 0;i<x;i++){
       int y;
       cin >> y;
       for(int j = 0;j<y;j++){
           int z;
           cin >> z;
           nums.push_back(z);
       }
       calculate(nums,y);
       nums.clear();
    } 
}
