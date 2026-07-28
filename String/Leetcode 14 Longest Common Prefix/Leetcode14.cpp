class Solution {
public:
    string longestCommonPrefix(vector<string>& s) {
        
        int n= s.size();
        string prefix = s[0];
        for(int i=1;i<n;i++){
            while(s[i].find(prefix)!=0){
                prefix = prefix.substr(0,prefix.length()-1);
                if(prefix.empty()){
                    cout<<"";
                }
            }
            
        }
        return prefix;
    }
};