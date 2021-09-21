class Solution {
public:
    vector<vector<int>> generate(int numRows) {
    vector<vector<int>> res;
//a 2d vector array for storing the results
//notice that the number of elements in each element increases by 1 and therefore initialise vector for each row
        for(int i=0;i<numRows;i++)
        {
            vector<int> temp(i+1,1);//initally all are 1 and even the edge elements are 1
            for(int j=1;j<i;j++)//won't run for first two runs
            {
                temp[j]=res[i-1][j]+res[i-1][j-1];//just see the pattern
            }
            res.push_back(temp);//add to final result
        }
        return res;
    }
};