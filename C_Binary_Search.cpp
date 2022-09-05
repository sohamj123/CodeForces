#include <iostream>
#include<vector>
#include<algorithm>
#include<numeric>
#include<map>
#include <bits/stdc++.h> 
#include <cmath>
using namespace std;

void calculate(int num,int x,int pos){
    long long val = 1;
    int greater = num - x;
    int less = x-1;
    int left = 0;
    int right = num;
    
    int center = (right + left)/2;
    while(pos != center){
        if(pos < center){
            val *= greater;
            greater--;
            right = center;
            center = (right + left)/2;
        } else if(pos > center){
            val *= less;
            less--;
            left = center + 1;
            center = (left + right)/2;
        }
        if(val > (power + 7)){
            val %= (power + 7);
        }
    }
    
    for(int i = 1; i<=(less+greater);i++){
        val *= i;
        if(val > (power + 7)){
            val %= (power + 7);
        }
    }
    cout << val << endl;
}


int main(){
    int n;
    int x;
    int pos;
    cin >> n >> x >> pos;
    calculate(n,x,pos);
}
