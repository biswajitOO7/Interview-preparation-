#include<bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin>>n;
    string s;
    getline(cin,s); // to erase null string after n
    vector<string> ac;
    for(int i = 0;i<n;i++){
        string str;
        getline(cin,str);
        ac.push_back(str);
        
    }
    for(auto a:ac){
        cout<<a<<endl;
    }
    cin>>n;
    int bills[n];
    for(int i =0;i<n;i++){
        cin>>bills[i];
    }
    map<string,int> mp1;
    for(int i = 0;i<n;i++){
        mp1.insert({ac[i],bills[i]});
    }
    for(auto a:mp1){
        cout<<a.first<<"->"<<a.second<<endl;
    }
    int m;
    cin>>m;
    vector<string> acPayingCheks;
    getline(cin,s);
    for(int i = 0;i<n;i++){
        string str;
        getline(cin,str);
        //cout<<str<<endl;
        acPayingCheks.push_back(str);
        
    }
    cin>>m;
    int checkAmount[m];
    for(int i =0;i<m;i++){
        cin>>checkAmount[i];
    }
    map<string,int> mp2;
    for(int i = 0;i<m;i++){
        mp2.insert({acPayingCheks[i],checkAmount[i]});
    }
    for(auto a:mp2){
        cout<<a.first<<"->"<<a.second<<endl;
    }
    int count = 0;
    for(auto a:mp2){
        /*auto it=mp1.find(a.first);
        cout<<it->first<<endl;*/
        if(mp1.find(a.first) != mp1.end()){
            auto it=mp1.find(a.first);
            if(a.second != it->second) count++;
        }
    }
    cout<<count;
    return 0;
}