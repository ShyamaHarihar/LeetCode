class Solution {
public:
    int maxArea(vector<int>& height) {
    
        int s=0;
        int e=height.size()-1;
        int res=INT_MIN;
        while(s<e)
        {
            int h=min(height[s],height[e]);
            int w=e-s;
            res=max(res,w*h);
            if(height[s]<height[e])
            {
                s++;
            }
            else{
                e--;
            }
        }
        return res;
    }
};