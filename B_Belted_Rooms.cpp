#include <iostream>
#include<vector>
#include<algorithm>
#include<numeric>
#include<map>

using namespace std;
bool returnable(string str){
    int greater = 0;
    int less = 0;
    for(int i = 0; i<str.length();i++){
        if(str.at(i) == '<'){
            greater++;
        } else if(str.at(i) == '>'){
            less++;
        }
    }
    if(greater > 0 && less > 0){
        return false;
    } else {
        return true;
    }
}

void calculate(int total,string str){
    int worknt = 0;
    string temp;
    int nums = total;
    if(returnable(str) != true){
        if(str.at(0) != '-'){
            if(str.at(str.length()-1) != '-'){
                worknt++;
            }
        }
        for(int i = 1; i<str.length()-1;i++){
            if((str.at(i) == '<' || str.at(i) == '>') && str.at(i-1) != '-'){
                worknt++;
            }
        }
        if(str.at(str.length()-1) != '-' && str.at(str.length()-2) != '-'){
            worknt++;
        }
    }
    nums-=worknt;
    cout<<nums<<endl;
}
   

int main(){
    int n;
    cin >> n;
    for (int i=0;i<n;i++){
        int total;
        cin >> total;
        string path;
        cin >> path;
        calculate(total,path);
    }
}