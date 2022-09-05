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
using namespace std;
void calculate(string x){
    int atCounter = 0;
    string str = "";
    if(x.length()>0){
        str.append(x,0,1);
        int i = 1;
        while(i < x.length()-3){
            if(x.substr(i,2) == "at" && atCounter == 0){
                str.append("@");
                atCounter++;
                i+=2;
            } else if(x.substr(i,3) == "dot"){
                str.append(".");
                i+=3;
            } else {
                str.append(x,i,1);
                i++;
            } 
        }
        if(i > x.length() - 3){
            str.append(x,i,x.length()-i);
        } else 
        if(x.substr(x.length()-3,2) == "at" && atCounter == 0){
            str.append("@");
            str.append(x,x.length()-1,1);
        } else {
             str.append(x,x.length()-3,3);
        }
    }    
    cout << str;
}
int main(){
    string x;
    cin >> x;
    calculate(x);
}   