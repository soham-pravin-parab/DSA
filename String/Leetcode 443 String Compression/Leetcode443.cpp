class Solution {
public:
    int compress(vector<char>& chars) {
        int idx=0;
        int n= chars.size();
    
        for(int i =0;i<n;i++){
            int count=0;
           int ch= chars[i];
            while(i<n&&chars[i]==ch){
               count++;  i++;
            }
            if(count==1){
                chars[idx++]=ch;
            }
            else{
                chars[idx++]=ch;
                string s = to_string(count);
                
                for(char dig:s){
                    chars[idx++]=dig;
                }
            }
            i--;
        }
        chars.resize(idx);
        return idx;
        
    }
};