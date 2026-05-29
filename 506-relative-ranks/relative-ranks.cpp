class Solution {
public:
    vector<string> findRelativeRanks(vector<int>& score) {
        vector<int>og;
        int i,j,k;
        vector<string>res;
        og=score;
        sort(score.begin(),score.end());
        for(i=0;i<score.size();i++)
        {
            for(j=0;j<score.size();j++)
            {
            if(og[i]==score[j])//&&j>=score.size()-3&&j<=score.size()-1)
            {
                if(j==score.size()-1)
                {
                  res.push_back("Gold Medal");
                }
                else if(j==score.size()-2)
                {
                    res.push_back("Silver Medal");
                }
                else if(j==score.size()-3)
                {
                    res.push_back("Bronze Medal");
                }
                else
                { k= score.size()-j;
                   res.push_back(to_string(k))  ;
                }
            }
            }
        }
   return res;     
    }
};