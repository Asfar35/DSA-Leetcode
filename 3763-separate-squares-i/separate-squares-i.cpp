class Solution {
public:
    double lowerArea(double val, vector<vector<int>>& sq) {
        double area = 0.0;
        for (auto &v : sq) {
            double y = v[1];
            double len = v[2];

            if (y + len <= val) {
                area += len * len;              
            }
            else if (y < val) {
                area += len * (val - y);        
            } 
        }
        return area;
    }

    double separateSquares(vector<vector<int>>& squares) {
        double total = 0.0, l = INT_MAX, r = INT_MIN;
        for(auto &v: squares){
            double len = v[2];
            double y = v[1];
            l = min(l, y);
            r = max(r, y + len);
            total += (len*len); 
        }
        total /= 2;
        double limit = 1e-5;
        while(abs(r-l)>limit){
            double mid = (l + r) / 2;
            if(lowerArea(mid, squares)<total) l = mid;
            else r = mid;
        }
        return l;
    }
};