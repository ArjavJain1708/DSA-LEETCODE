class Solution {
public:
    int minimumIndex(vector<int>& capacity, int itemSize) {
        int i,lowest=0,maxlowest=0;
        vector<int> store;
        store=capacity;
       int  idx=-1;
        sort(store.begin(),store.end());
        maxlowest=store[store.size()-1];
        for(i=0;i<capacity.size();i++)
        {
            if(capacity[i]==itemSize)
            {
                return i;
            }
            else if (capacity[i]>itemSize)
            {
             
              if(capacity[i]<maxlowest||lowest==0)
              {
                 maxlowest=capacity[i];
                 idx=i;
                 lowest=-1;
              }

            }
        }
        if(idx!=-1)
        {
            return idx;
        }
        else{
            return -1;
        }
    }
};