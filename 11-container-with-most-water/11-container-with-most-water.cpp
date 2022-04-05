class Solution {
public:
    int maxArea(vector<int>& height) {
    int res=0;
        int n=height.size();
        int l=0;
        int r=n-1;
        while(l<r)
        {
            int w=(r-l);
            res=max(res,w*min(height[l],height[r]));
            if(height[l]<height[r])
            {
                l++;
            }
            else{
                r--;
            }
        }
        return res;
    }
};