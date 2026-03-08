//Leetcode-34.
//program to find first and last position of element in sorted array
class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int n=nums.size();
        int s=0,e=n-1;
        int s1=-1,e1=-1; //s1=first occurence , e1=last occurence
        
        while(e>=s){
            int mid=(s+e)/2;
            if(nums[mid]==target){
                 s1=mid;//stores the current occurence
                e=mid-1;//for traversing through left side

            }
            else if(nums[mid]<target){
                s=mid+1;
            }
            else if(nums[mid]>target){
                e=mid-1;
            }
        }
            s=0;
            e=n-1;
            while(e>=s){
            int mid=(s+e)/2;
            if(nums[mid]==target){
                 e1=mid;//stores the current occurence
                s=mid+1; //for traversing through right side

            }
            else if(nums[mid]<target){
                s=mid+1;
            }
            else if(nums[mid]>target){
                e=mid-1;
            }

            } 
            return{s1,e1};
        
    }
};
