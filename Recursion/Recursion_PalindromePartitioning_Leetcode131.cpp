
#include <iostream>
#include <vector> 
#include <algorithm>
using namespace std;
class Solution {
public:
    bool isPalin(string s){
        string s2=s;
        reverse(s2.begin(),s2.end());
        
        return s==s2;
    }
    
    void getAllParts(string s,vector<string>& partitions,vector<vector<string>>&ans){
        if(s.size()==0){
            ans.push_back(partitions);
            return;
        }
    
    for(int i=0; i<s.size();i++){
        string part = s.substr(0,i+1);
        
        if(isPalin(part)){
            partitions.push_back(part);
            getAllParts(s.substr(i+1),partitions, ans);
            partitions.pop_back();
        }
    }
    }

 vector <vector<string>>partition(string s){
     vector <vector<string>>ans;
     vector <string>partitions;
     
     getAllParts(s,partitions, ans);
     return ans;
 }
 
};
 
int main() {
    Solution sol;
    string input = "aab";
    vector<vector<string>> result = sol.partition(input);
    
    cout << "Partitions for "" << input << "":" << endl;
    for (const auto& part : result) {
        cout << "[";
        for (size_t i = 0; i < part.size(); ++i) {
            cout << """ << part[i] << """;
            if (i < part.size() - 1) cout << ", ";
        }
        cout << "]" << endl;
    }
    return 0;
}