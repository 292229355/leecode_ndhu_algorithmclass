class Solution {
public:
   int  MAX = INT_MAX;
    vector<int> sortArray(vector<int>& nums) {
        std::vector<int> arr = nums;
        mergesort(arr,0,arr.size() -1);
        return arr;
    }

    void mergesort(std::vector<int>& arr,int front,int end){
        if (front >= end) return;
        int mid = (front + end) / 2;
        mergesort(arr,front,mid);
        mergesort(arr,mid + 1,end);
        merge(arr,front,mid,end);
    }

    void merge(std::vector<int>& arr,int left,int mid,int right){
        std::vector<int> leftarr(arr.begin() + left ,arr.begin()+ mid + 1);
        std::vector<int> rightarr(arr.begin()+ mid +1,arr.begin()+ right + 1);

        leftarr.insert(leftarr.end(),MAX);
        rightarr.insert(rightarr.end(),MAX);

        int LI = 0,RI = 0;
        for (int i = left ;i <= right ; i++){
            if(leftarr[LI] < rightarr[RI]){
                arr[i] = leftarr[LI];
                LI++; 
            }else{
                arr[i] = rightarr[RI];
                RI++;
            }
        }
    }
};
