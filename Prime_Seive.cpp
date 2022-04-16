#include<bits/stdc++.h>
using namespace std;
const int N = 2e5+5;
vector<int> seive(){
    vector<int> primes(N,0);

    for(int i=2;i*i<N;++i){
        for(int j=i*i;j<N;j+=i){
            primes[j]=1;
        }
    }
    vector<int> ans;
    for(int i=0;i<N;++i){
        if(primes[i]==0){
            ans.push_back(i);
        }
    }
    return ans;
}
int main(){
    vector<int> ans=seive();
}
