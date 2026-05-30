class Solution {
public:
struct area {
int key;
int idx;
};
    int maxArea(vector<int>& height) {
   // list me idx aur value ko sort karke fir last se max area calculate karte chalenge  aur jahan milega waha   }
   int n=height.size();
   int i;
       vector<area>bucket(n);
       for(i=0;i<height.size();i++){
        bucket[i].key=height[i];
        bucket[i].idx=i;
       }
       std::sort(bucket.begin(), bucket.end(), [](const area& a, const area& b) {
        return a.key < b.key;   });
 /*int max_area=0;
     for(i=0;i<n;i++){
         int current1=0;
         int current2=0;
         for(int j=i+1;j<(n-j)/2 + 1;j++){
             current1=bucket[i].key*abs(bucket[i].idx-bucket[j].idx);
             current2=bucket[i].key*abs(bucket[i].idx-bucket[n-j].idx);
             max_area=max(max_area,max(current1,current2));         
         }
     }
   return max_area;
}
};*/

        int max_area = 0;

        int global_min_idx = bucket[n - 1].idx;
        int global_max_idx = bucket[n - 1].idx;

        // 3. Loop backwards from the second-to-last element down to 0
        for (int i = n - 2; i >= 0; i--) {
            // Calculate distance to the furthest elements that are taller than bucket[i]
            int dist1 = abs(bucket[i].idx - global_min_idx);
            int dist2 = abs(bucket[i].idx - global_max_idx);
            
            int current = bucket[i].key * max(dist1, dist2);
            max_area = max(max_area, current);
            
            // Update the global min and max original indices to include the current one
            global_min_idx = min(global_min_idx, bucket[i].idx);
            global_max_idx = max(global_max_idx, bucket[i].idx);
        }

        
 return max_area;
    }


};