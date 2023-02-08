class Solution {
public:
    void merge(vector<int>& nums,int left,int right,int mid){
        int leftsize=mid-left+1;
        int rightsize=right-mid;
        int leftar[leftsize+1],rightar[rightsize+1];
        for(int i=0;i<leftsize;i++){
            leftar[i]=nums[i+left];
        }
        for(int i=0;i<rightsize;i++){
            rightar[i]=nums[i+mid+1];
        }
        int l=0,r=0;
        leftar[leftsize]=INT_MAX;
        rightar[rightsize]=INT_MAX;
        for(int i=left;i<=right;i++){
            if(leftar[l]<=rightar[r]){
                nums[i]=leftar[l];
                l++;
            }
            else{
                nums[i]=rightar[r];
                r++;
            }
        }
    }
    
    void mergesort(vector<int>& nums,int left,int right){
        if(left==right) {
            return;
        }
        int mid=left+(right-left)/2;
        mergesort(nums,left,mid);
        mergesort(nums,mid+1,right);
        merge(nums,left,right,mid);
    }
    
    vector<int> sortArray(vector<int>& nums) {
        int n=nums.size();
        mergesort(nums,0,n-1);
        return nums;
    }
};
