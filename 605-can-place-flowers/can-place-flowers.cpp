class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
     int l,i,count=0;
     for(i=0;i<flowerbed.size();i++)
     {
        if(flowerbed[i]==0&&(i==flowerbed.size()-1||flowerbed[i+1]!=1)&&(i==0||flowerbed[i-1]!=1))
        {
            count++;
            flowerbed[i]=1;
        }
     } 
     if(n<=count)
     {
return true;
     } 
     else{
        return false;
     } 
    }
};