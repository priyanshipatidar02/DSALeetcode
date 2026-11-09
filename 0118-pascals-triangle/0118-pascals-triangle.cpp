class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>>pascal;
        for(int i=1;i<=numRows;i++){
            vector<int>row;
            for(int j=1;j<=i;j++){
                if(j==1||j==i){
                   row.push_back(1);
                }else{
                    row.push_back(pascal[i-2][j-2] + pascal[i-2][j-1]);
                }
            }
            pascal.push_back(row);
        }
        return pascal;
    }
};