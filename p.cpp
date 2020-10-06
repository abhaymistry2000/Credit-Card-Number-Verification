#include<bits/stdc++.h>
using namespace std;
bool isValid(string s){
    int n=s.size();
    if(n<14 || n>19){
        return 0;
    }
    string s1=s.substr(0,n-1);
    cout<<"After removal of last digit : "<<s1<<"\n";
    int xx=s[n-1]-'0';
    reverse(s1.begin(),s1.end());
    cout<<"After reversing the number : "<<s1<<"\n";
    int sum=0;
    for(int i=0;i<n-1;i++){
        if((i+1)%2){
            int k=s1[i]-'0';
            k*=2;
                string x=to_string(k);
                int l=0;
                for(int i=0;i<x.size();i++){
                    l+=(x[i]-'0');
                }
            s1[i]=l+'0';
        }
        sum+=(s1[i]-'0');
    }
    cout<<"After performing the arithmetic operation : "<<s1<<"\n";
    cout<<"SUM : "<<sum<<"\n";
    string ans=to_string(sum);
    int an=ans[ans.size()-1]-'0';
    cout<<"Last digit : "<<xx<<"\n";
    if((10-an)==xx){
        return 1;
    }
    else{
        return 0;
    }
}
int main(){
    string s;
    cin>>s;
    if(isValid(s)){
        cout<<"It's a VALID Credit Card Number.";
    }
    else{
        cout<<"It's NOT a VALID Credit Card Number.";
    }
    return 0;
}