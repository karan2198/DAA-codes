#include<bits/stdc++.h>
using namespace std;

class Solution {
  public:
    int countWaystoDivide(int N, int K) {
        // Code here
        vector<int> v;
        
        for(int i =0;i<K;i++){
            if(i == (K-1))
             v.push_back(N-(K-1));
             else v.push_back(1);
        }
        for(auto x :v)
        cout<<x<<" ";
        
        int last = K-1;
        int curr = K-2;
        int count = 1;
        while(curr > 0){
            if((v[last] > v[curr]) && ((v[last]-1)>=(v[curr]+1))){
                count++;
                v[last]-=1;
                v[curr]+=1;
                    
            }
            else{    
                if(v[last]>v[curr])
                curr--;
                else if(v[last] == v[curr]){
                    curr--;
                    last--;
                }
            }
        }
        return count;
    }
};

int main(){
    int N,K;
    cin>>N>>K;
    Solution ob;
    cout<<ob.countWaystoDivide(N,K)<<endl;

    return 0;
}