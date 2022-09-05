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
using namespace std;
long long gcd(long long int a, long long int b)
{
  if (b == 0)
    return a;
  return gcd(b, a % b);
}
void calculate(string str1,string str2){
    string orig = str1;
    int divisor = gcd(str1.length(),str2.length());
    int lcm = (str1.length() * str2.length())/divisor;
    while(str1.length() < lcm){
        str1.append(orig);
    }
    orig = str2;
   while(str2.length() < lcm){
        str2.append(orig); 
    }
    if(str1 == str2){
        cout << str1 << endl;
    } else {
        cout << -1 << endl;
    }
}

int main(){
    int x;
    cin >> x;
    for(int i = 0;i<x;i++){
       string str1;
       string str2;
       cin >> str1 >> str2;
        calculate(str1,str2);
    }
}   