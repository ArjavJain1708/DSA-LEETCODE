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
        return a.key < b.key; 
    });
// int max_area=0;
//     for(i=0;i<n;i++){
//         int current1=0;
//         int current2=0;
//         for(int j=i+1;j<(n-j)/2 + 1;j++){
//             current1=bucket[i].key*abs(bucket[i].idx-bucket[j].idx);
//             current2=bucket[i].key*abs(bucket[i].idx-bucket[n-j].idx);
//             max_area=max(max_area,max(current1,current2));
           
//         }
//     }
//   return max_area;
vector<int> min_idx(n);
        vector<int> max_idx(n);
min_idx[n-1] = bucket[n-1].idx;
        max_idx[n-1] = bucket[n-1].idx;
        
        for(int i = n - 2; i >= 0; i--) {
            min_idx[i] = min(bucket[i].idx, min_idx[i+1]);
            max_idx[i] = max(bucket[i].idx, max_idx[i+1]);
        }

        int max_area = 0;

        // 3. Instead of a nested loop, evaluate the best pairing instantly
        for(int i = 0; i < n - 1; i++){
            // The best pair is either the element furthest to the left or furthest to the right
            int dist1 = abs(bucket[i].idx - min_idx[i+1]);
            int dist2 = abs(bucket[i].idx - max_idx[i+1]);
            
            int current = bucket[i].key * max(dist1, dist2);
            max_area = max(max_area, current);
        }

        return max_area;
    }


};