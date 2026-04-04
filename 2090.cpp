class Solution {
public:
    vector<int> getAverages(vector<int>& nums, int k) {
        int n = nums.size();
        int size = 2 * k + 1;
        vector<int> v1(n,-1);
        long long int sum = 0;
        if(n < size) return v1;
        for(int i = 0; i< size;i++){
            sum = sum + nums[i];
        }
        v1[k] = sum / size;
        for(int w = size; w <n;w ++){
            sum  += nums[w];
            sum -= nums[w - size];
            v1[w - k] = sum / size;
        }
        return v1;
    }
};
