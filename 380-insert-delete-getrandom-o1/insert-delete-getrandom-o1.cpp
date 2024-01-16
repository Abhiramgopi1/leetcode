class RandomizedSet {
public:
    vector<int>v;
    RandomizedSet() {
        
    }
    bool insert(int val) {
        if(find(v.begin(),v.end(),val) == v.end()){
            v.push_back(val);
            return true;
        }
        else{
            return false;
        }
        
    }
    
    bool remove(int val) {
        auto it= find(v.begin(),v.end(),val);
        if(it!=v.end()){
            v.erase(it);
            return true;
        }
        else return false;
    }
    
    int getRandom() {
        int c=random()%v.size();
        return v[c];
    }
};

/**
 * Your RandomizedSet object will be instantiated and called as such:
 * RandomizedSet* obj = new RandomizedSet();
 * bool param_1 = obj->insert(val);
 * bool param_2 = obj->remove(val);
 * int param_3 = obj->getRandom();
 */