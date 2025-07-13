// Last updated: 7/12/2025, 6:30:01 PM
class NumberContainers {
public:
    unordered_map<int, int> idxs;
    unordered_map<int, set<int>> val_to_idxs;
    NumberContainers() {

    }
    
    void change(int index, int number) {
        if(idxs.count(index)){
         int old_num = idxs[index];
            // need to remove this index from the old number
            val_to_idxs[old_num].erase(index);
            if(val_to_idxs[old_num].empty()) val_to_idxs.erase(old_num);

        }
        idxs[index] = number;
        val_to_idxs[number].insert(index);
    }
    
    int find(int number) {
        if(val_to_idxs.count(number) && !val_to_idxs[number].empty()){
            return *val_to_idxs[number].begin();
        }
        return -1;
    }
};

/**
 * Your NumberContainers object will be instantiated and called as such:
 * NumberContainers* obj = new NumberContainers();
 * obj->change(index,number);
 * int param_2 = obj->find(number);
 */