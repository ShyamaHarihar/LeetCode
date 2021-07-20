class Solution {
public:
    vector<vector<int>> generate(int numRows) {
    //Create a vector of vectors to store the answers so that we can access previous answers
    vector<vector<int>> res;
    //Now let us start creating each row
    for(int i=0;i<numRows;i++)
    {
        //The number of elements in each row increase by 1 and lets initialise all to 1 
        vector<int> row(i+1,1);
        for(int j=1;j<i;j++)
        {
            //add two values of previous row just above as shown in question
            row[j]=res[i-1][j]+res[i-1][j-1];
        }
        res.push_back(row);//add the row to result vector
    }
        return res;
    }
};