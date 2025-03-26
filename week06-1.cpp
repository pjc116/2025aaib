class Solution {
public:
    int minOperations(vector<vector<int>>& grid, int x) {
        int M = grid.size(), N = grid[0].size(), MN = M*N;
        vector<int> a(MN); // C++的陣列, 大小是M*N
        for(int i=0; i<M; i++)
        {
            for(int j=0; j<N; j++)
            {
                int k = i * N + j; // 單位換算
                a[k] = grid[i][j]; // 把原陣列放入a[]
            }
        } // 前面, 把grid[i][j] 的資料, 放入a[k]
        sort(a.begin(), a.end());
        int mid = a[MN/2];
        int ans = 0;
        for(int k=0; k<MN; k++)
        {
            int diff = abs(mid-a[k]);
            if(diff % x != 0) return -1;// 有個小陷阱
            ans += diff / x;
        }
        return ans;
    }
};
