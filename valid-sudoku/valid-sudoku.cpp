class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
//So first get the fact that valid soduko here means that the numbers in each row, column and sub-box(grid) should not have duplicates and they can only have each number once and there will be empty cells too 
//here N is 9 so we can initiliase it
    int N=9;
    unordered_set<char> row[N];
    unordered_set<char> col[N];
    unordered_set<char> subbox[N];
        
        for(int i=0;i<N;i++)
        {
            for(int j=0;j<N;j++)
            {
                //iterating all cells 
                char val=board[i][j];//the value
                if(val=='.')
                {
                    continue;//skip and move to next
                }
                int subboxIndex=(i/3)*3+(j/3);
                if(row[i].count(val) || col[j].count(val) || subbox[subboxIndex].count(val))
                {
//if the value aldready exists at row or column or subbox then we found a duplicate and we need to stop right now
                    return false;
                }
                //not the case
                row[i].insert(val);
                col[j].insert(val);
                subbox[subboxIndex].insert(val);
            }
        }
        return true;
    }
    
};