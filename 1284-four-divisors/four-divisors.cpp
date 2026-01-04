class Solution {
public:
    int sumFourDivisors(vector<int>& nums) {
    int sum = 0;
    for(int num: nums) {
        int divisorCount = 0;
        int divisorSum = 0;
        
        for(int i = 1; i * i <= num; i++) {
            if(num % i == 0) {
                divisorCount++;
                divisorSum += i;
                
                // Check if num/i is different from i (not a perfect square case)
                if(i != num / i) {
                    divisorCount++;
                    divisorSum += num / i;
                }
            }
            
            // Early exit if more than 4 divisors found
            if(divisorCount > 4) break;
        }
        
        if(divisorCount == 4) {
            sum += divisorSum;
        }
    }
    return sum;
}

};