class Solution {
public:
    int minimumBoxes(vector<int>& apple, vector<int>& capacity) {
        sort(capacity.begin(), capacity.end(), greater<int>());
        int sum = accumulate(apple.begin(), apple.end(), 0);
        int count = 0,i=0, n=capacity.size();
        while(sum>0 && i<n){
            sum -= capacity[i++];
            count++;
        }
        return count;
    }
};