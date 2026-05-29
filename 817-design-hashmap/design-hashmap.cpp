class MyHashMap {
public:
int numBuckets=100;
 
 struct data{
    int cha;
    int val;
 };
  vector<list<data>> buckets;
    MyHashMap() {
    buckets.resize(numBuckets);
    }
     int hash(int key) {
        return key % numBuckets;
    }

    void put(int key, int value) {
        int i = hash(key);
       for (auto& element : buckets[i]) {
            if (element.cha == key) {
                element.val = value; 
                return;
            }
        }
        buckets[i].push_back({key, value});
    }
    
    int get(int key) {
         int i = hash(key);
        for(auto& element : buckets[i]){
             if (element.cha == key) {
                return element.val;
             }
        }
        return -1;
    }
    
    void remove(int key) {
 
        int i = hash(key);
          for (auto it = buckets[i].begin(); it != buckets[i].end(); ) {
            if (it->cha == key) {
                it = buckets[i].erase(it); // Deletes the node and shifts the iterator forward
                return; // Key found and removed, exit early
            } else {
                ++it; // Only increment if we didn't delete the node
            }
        }
    }
        
};






/**
 * Your MyHashMap object will be instantiated and called as such:
 * MyHashMap* obj = new MyHashMap();
 * obj->put(key,value);
 * int param_2 = obj->get(key);
 * obj->remove(key);
 */