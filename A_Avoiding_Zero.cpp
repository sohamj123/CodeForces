#include <iostream>
#include<vector>
#include<algorithm>
#include<numeric>

using namespace std;

void calculate(vector<int> in){
    int possum=0;
    int negsum=0;
    for(int k=0;k<in.size();k++){
        if (in[k] > 0) {
            possum += in[k];
        } else {
            negsum += in[k];
        }
    }
    if (possum > -1 * negsum) {
        sort(in.begin(),in.end(),greater<int>());
    } else
    {
        sort(in.begin(),in.end());
    
    }
    
    int out = accumulate(in.begin(), in.end(),0);

    if (out == 0){
        cout << "NO" << endl;
    } else {
        cout << "YES" << endl;
        for (int val:in){
            cout << val << " ";
        }
        cout << endl;
    }

}
int main(){
    int n;
    cin >> n;
    for (int i=0;i<n;i++){
        int c;
        cin >> c;
        vector<int> arr;
        for (int j=0;j<c;j++){
            int val;
            cin >> val;
            arr.push_back(val);
        }
        calculate(arr);
        arr.clear();
    }
}