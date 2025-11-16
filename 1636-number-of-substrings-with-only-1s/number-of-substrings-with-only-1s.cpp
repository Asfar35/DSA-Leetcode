class Solution {
public:
    int numSub(string s) {
        int count = 0;
        int c1 = 1e9+7;
        int l = -1, r = -1;
        for(int i = 0; i<s.size(); i++){
            if(s[i] == '0'){
                l=r=-1;
            }
            else if(s[i]=='1' && l == -1){
                l=r=i;
                count =(count % c1) + (r-l+1);
            }
            else{
                r = i;
                count =(count % c1) + (r-l+1);
            }
        }
        return count;
    }
};