class Solution {
public:
    int triangularSum(vector<int>& nums) {
        int l=nums.size();
        vector<int>temp;
        for(int i=0;i<l;i++){
            temp.push_back(nums[i]);
        }
        int cnt=l;
        while(cnt>1){
            int start=temp.size()-l;
            int k=temp.size();
            for(int i=start;i<k-1;i++){
                temp.push_back((temp[i]+temp[i+1])%10);
            }
            cnt--;
        }
        return temp[temp.size()-1];
    }
};
