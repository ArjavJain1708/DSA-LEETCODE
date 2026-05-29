
class Solution {
public:
//ARJAV
    int minDeletionSize(vector<string>& strs) {
        string r;
        vector<string> store;
        int count=0,i=0,j;
        for(i=0;i<strs[0].length();i++){
         for(j=0;j<strs.size();j++){
            r+=strs[j][i];
         }
         store.push_back(r);
         r="";
        }
        for(i=0;i<store.size();i++){
            for(j=0;j<store[i].length()-1;j++){
                if(store[i][j]>store[i][j+1]){
                    count++;
                    break;
                }
            }
        }
        return count;
    }
};