class KthLargest {
public:
    int size;
    priority_queue<int,vector<int>,greater<int>> minheap;
    KthLargest(int k, vector<int>& nums) {
    size=k;
        for(int i=0;i<nums.size();i++)
        {
            minheap.push(nums[i]);//We want to store only k elements in the heap
            //normal sorting takes nlogn here the optimisation is using minheap by storing k elements at a time
            if(minheap.size()>size)
            {
                minheap.pop();//remove the element
            }
        }
    }
    
    int add(int val) {
        minheap.push(val);//we added one element more than k
        if(minheap.size()>size)
        {
            minheap.pop();//now readjust the heap or remove one element
        }
        return minheap.top();//return the top element
    }
};

/**
 * Your KthLargest object will be instantiated and called as such:
 * KthLargest* obj = new KthLargest(k, nums);
 * int param_1 = obj->add(val);
 */