class Solution {
public:
    bool lemonadeChange(vector<int>& bills) {
        int x=0, y = 0;
        for(int &val: bills){
            if(val==5) x++;
            else if(val==10){
                if(x){
                    x--;
                    y++;
                }
                else return false;
            }
            else{
                if(y && x) {
                    x--;
                    y--;
                }
                else if(x>=3) x -= 3;
                else return false;
            }
        }
        return true;
    }

};