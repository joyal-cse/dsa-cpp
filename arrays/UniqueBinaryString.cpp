//Leetcode-1980
//program to find unique binary string in an array
class Solution {
public:
    string findDifferentBinaryString(vector<string>& nums) {
        int n=nums.size();
        string s=""; //a string to store new binary number
        for(int i=0;i<n;i++){
           
            if(nums[i][i]=='0'){
                s +='1'; //flips 0 to 1
            }
             if(nums[i][i]=='1'){
                s +='0';//flips 1 to 0
            }
           
        }
        
        return s;
        
    }
};
