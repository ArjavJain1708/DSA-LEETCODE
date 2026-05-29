class Solution {
public:
    vector<string> findRestaurant(vector<string>& list1, vector<string>& list2) {
     int l1=list1.size();
     int l2=list2.size();
     int i,j;
     vector<string> result;
     vector<vector<int>> store;
     vector<int> temp;
     int sum=l1+l2;
     for(i=0;i<l1;i++)
     {
        for(j=0;j<l2;j++)
        {
            if(list1[i]==list2[j])
            {
                
                if(i+j<=sum)
                {   sum=i+j;
                    temp.push_back(i);
                    temp.push_back(j);
                     store.push_back(temp);
                     temp.clear();
                }
            }
           
        }
     }
     for(i=0;i<store.size();i++)
     {
        if(sum==(store[i][0]+store[i][1]))
        {
            result.push_back(list1[store[i][0]]);
        }
     }   
     return result;
    }
};