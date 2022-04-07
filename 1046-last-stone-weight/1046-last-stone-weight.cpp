class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
    priority_queue<int> p(begin(stones),end(stones));
        while(p.size()>1)
        {
            int y=p.top();
            p.pop();
            int x=p.top();
            p.pop();
            if(y>x)
            {
                p.push(y-x);
            }            
        }
        if(p.size()==0) return 0;
        return p.top();
    }
};