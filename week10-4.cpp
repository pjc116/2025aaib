// week10-4 今天的挑戰題
// LeetCode 1399. Count Group
class Solution {
public:
    int countLargestGroup(int n) {
        int max_count = 0;
        int a[100] = {}; // 陣列宣告，放「加總的total」有出現幾次
        for(int i=1; i<=n; i++){
            int total = 0, now = i;
            while(now > 0){
                total += now % 10;
                now = now / 10;
            }
            a[total]++; // total 拿來用
            if(a[total] > max_count) max_count = a[total];
        }
        int ans = 0;
        for(int i=0; i<100; i++){
            if(a[i] == max_count) ans++;
        }
        return ans;
    }
};
