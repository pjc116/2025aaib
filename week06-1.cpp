class Solution {
public:
    int minOperations(vector<vector<int>>& grid, int x) {
        int M = grid.size(), N = grid[0].size(), MN = M*N;
        vector<int> a(MN); // C++���}�C, �j�p�OM*N
        for(int i=0; i<M; i++)
        {
            for(int j=0; j<N; j++)
            {
                int k = i * N + j; // ��촫��
                a[k] = grid[i][j]; // ���}�C��Ja[]
            }
        } // �e��, ��grid[i][j] �����, ��Ja[k]
        sort(a.begin(), a.end());
        int mid = a[MN/2];
        int ans = 0;
        for(int k=0; k<MN; k++)
        {
            int diff = abs(mid-a[k]);
            if(diff % x != 0) return -1;// ���Ӥp����
            ans += diff / x;
        }
        return ans;
    }
};
