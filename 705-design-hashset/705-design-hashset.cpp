class MyHashSet {
public:
    vector<list<int>> t;
    int size;
    MyHashSet() {
    size=100;
    t.resize(100);
    }
    int hash(int key)
    {
        return key%size;//modulo
    }
    //search function 
    list<int>:: iterator search(int key)
    {
        int i=hash(key);//the key at which it will be hashed or chained
        return find(t[i].begin(),t[i].end(),key);
    }
    void add(int key) {
    if(contains(key))
    {
        return;
    }
        int i=hash(key);
        t[i].push_back(key);
    }
    
    void remove(int key) {
    int i=hash(key);
        if(contains(key))
        {
            t[i].erase(search(key));
        }
    }
    
    bool contains(int key) {
    int i=hash(key);
        if(search(key)!=t[i].end())
        {
            return true;
        }
        return false;
    }
};

/**
 * Your MyHashSet object will be instantiated and called as such:
 * MyHashSet* obj = new MyHashSet();
 * obj->add(key);
 * obj->remove(key);
 * bool param_3 = obj->contains(key);
 */