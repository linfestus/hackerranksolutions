#include<iostream>
#include<string>
#include<algorithm>
#include<stdlib.h>
#include<sstream>
#include<bits/stdc++.h>

using namespace std;


int main(){

    int n;
    cin>>n;

    vector<int> res;
    res.push_back(1);

    int prod = 1;
    int carry = 0;
    for(int i=n;i>0;i--){
        for(int j=0;j<res.size();j++){
            prod=(res[j]*i)+carry;
            res[j]=prod%10;
            carry = prod/10;
        }
        while(carry){
            res.push_back(carry%10);
            carry/=10;
        }
    }
    for(int i=res.size()-1;i>=0;i--)
        cout<<res[i];
    return 0;
}
