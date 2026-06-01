class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
          int j=0;
          int i;
          if(nums2.empty()){
            if(nums1.size()%2==0){
                   return (double)(nums1[nums1.size()/2]+nums1[nums1.size()/2 -1])/2;
            }
            else if(nums1.size()%2!=0){
                   return nums1[(nums1.size())/2];
            }
          }
        for( i=0;i<nums1.size();i++){
        if(nums1[i]>=nums2[j]){
            int temp=nums1[i];
            nums1[i]=nums2[j];
            nums2[j]=temp;
            sort(nums2.begin(),nums2.end());
        }
     }
        nums1.resize(nums1.size()+nums2.size());
        while(j<nums2.size()){
        nums1[i++]=nums2[j];
         j++;
     } 

     if(nums1.size()%2==0){
       return (double)(nums1[nums1.size()/2]+nums1[nums1.size()/2 -1])/2;
     }
     else if(nums1.size()%2!=0){
        return nums1[(nums1.size())/2];
     }
    return 0 ;}
};