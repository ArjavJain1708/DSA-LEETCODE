class MyHashSet {

    int numBuckets = 1000;
    vector<list<int>> buckets;

    int hash(int key) {
        return key % numBuckets;
    }

public:
    MyHashSet() {
        buckets.resize(numBuckets);
    }
    
    void add(int key) {
        int i = hash(key);
        for (int element : buckets[i]) {
            if (element == key) return;
        }
        buckets[i].push_back(key);
    }
    
    void remove(int key) {
        int i = hash(key);
        buckets[i].remove(key);
    }
    
    bool contains(int key) {
        int i = hash(key);
        for (int element : buckets[i]) {
            if (element == key) return true;
        }
        return false;
    }
};