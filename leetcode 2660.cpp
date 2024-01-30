class Solution {
public:
    int isWinner(vector<int>& p1, vector<int>& p2) {
        int score1=p1[0];
        int score2=p2[0];
        for(int i=1;i<p1.size();i++){
            if(i==1){
                if(p1[i-1]==10)
                    score1+=p1[i]*2;
                else score1+=p1[i];
                if(p2[i-1]==10)
                    score2+=p2[i]*2;
                else score2+=p2[i];
            }
            else {
                if(p1[i-1]==10 || p1[i-2]==10)
                    score1+=p1[i]*2;
                else score1+=p1[i];
                if(p2[i-1]==10 || p2[i-2]==10)
                    score2+=p2[i]*2;
                else score2+=p2[i];
            }
        }
        if(score1>score2) return 1;
        else if(score2>score1) return 2;
        return 0;
    }
};