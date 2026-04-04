class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int right = numbers.size() - 1;
        int left =  0 ;
        vector<int> res;
        while(left < right){
            int mid = numbers[left] + numbers[right] ;
            if(mid == target){
                res.push_back(++left);
                res.push_back(++right);
                break;
            }else if(mid < target){
                left++;
            }else if(mid > target ){
                right--;
            }
            
        }

        return res;
        
    }
};
