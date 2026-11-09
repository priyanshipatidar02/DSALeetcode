class Solution {
public:
    vector<int> getRow(int rowIndex) {
        vector<int>row;
        for(int i=0;i<=rowIndex;i++){
            long long ans=1;
            for(int j=0;j<i;j++){
                ans=ans*(rowIndex-j)/(j+1);
            }
            row.push_back(ans);
        }
        return row;
    }
};