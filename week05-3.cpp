// week05-3.cpp
// LeetCode 2206 divide Array Into Equal Pairs
class Solution {
public:
    bool divideArray(vector<int>& nums) {
        int a[501] = {}; //秨501皚⊿穦干0
        int odd = 0;
        for(int i=0; i<nums.size(); i++)
        {
            int now = nums[i];
            a[now]++;
            if(a[now] % 2 == 0) odd--; //Чぇ琌案计ぶ计
            else odd ++; //计
        }
        if(odd == 0) return true;
        else return false;
    }
};
