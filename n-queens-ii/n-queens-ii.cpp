class Solution {
public:
    bool isSafe(vector<vector<int>> arr, int x, int y, int n)
{
    //make a grid and check this for yourself how this works
    //If we have have to place a queen in a cell we need to check if the rows above it in the same column have a queen aldready which makes it unsafe
    //so return false!
    for (int row = 0; row < n; row++)
    {
        if (arr[row][y] == 1)
        {
            return false;
        }
    }
    //We need to check for left diagonal and right diagonal
    int r = x;
    int c = y;
    while (r >= 0 && c >= 0)
    {
        if (arr[r][c] == 1)
        {
            return false;
        }
        r--;
        c--;
        //left diagonal row and column decrease obv
    }
    r = x;
    c = y;
    while (r >= 0 && c < n)
    {
        if (arr[r][c] == 1)
        {
            return false;
        }
        r--;
        c++;
        //right diagonal col increases and row decreases
    }
    return true;
}
void nQueen(vector<vector<int>> arr, int x, int n, int &c)
{
    //we are doing this row wise and we do not need columns as we are using isSafe function anyway
    //reached end of the matrix
    if (x >= n)
    {
        c++;
        return;
    }
    for (int col = 0; col < n; col++)
    {
        if (isSafe(arr, x, col, n))
        {
            arr[x][col] = 1;
            nQueen(arr, x + 1, n, c);
            //backtracking step
            arr[x][col] = 0;
        }
    }
}
    int totalNQueens(int n) {
    vector<vector<int>> arr(n, vector<int>(n, 0));
    int count = 0;
    nQueen(arr, 0, n, count);
    return count;
    }
};