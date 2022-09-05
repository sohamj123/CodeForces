#include <iostream>
#include<vector>
#include<algorithm>
#include<numeric>
#include<map>
#include <bits/stdc++.h> 
using namespace std;

void calculate(int num){
    int digits = 0;
    digits = (num%10-1)*10;
    int count =  floor(log10(num) + 1);
    while(count > 0){
        digits += count;
        count--;
    }
    cout<<digits<<"\n";
}


int main(){
    int n;
    cin >> n;
    for (int i=0;i<n;i++){
        int num;
        cin >> num;
        calculate(num);
    }
}