class Solution {
public:
    int findJudge(int n, vector<vector<int>>& trust) {
        vector<int>res(n+1,0);
        for(int i=0;i<trust.size();i++){
            res[trust[i][1]]++;
            res[trust[i][0]]--;
        }
        for(int i=1;i<=n;i++){
            if(res[i]==n-1) return i;
        }
        return -1;
    }
};
