// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
        int i=1,j=n,m;
        while(i<j){
            m=i+(j-i)/2;
            if(isBadVersion(m)) j=m;
            else i=m+1;
        }
        return i;
    }
};
