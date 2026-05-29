class Solution {
public:
    int calPoints(vector<string>& operations) {
        vector<int> performs;
        int i=0,sum=0;
     while(i<operations.size())
     {
       if(operations[i]!="C"&&operations[i]!="D"&&operations[i]!="+")
       {
        performs.push_back(stoi(operations[i]));
       }
       else if(operations[i]=="C")
       {
        performs.erase(performs.begin()+(performs.size()-1));
       }
       else if(operations[i]=="D")
       {
        //performs.erase(performs.begin()+(performs.size()-1));
        performs.push_back(2*(performs[performs.size()-1]));
       }
       else if(operations[i]=="+")
       {
        //performs.erase(performs.begin()+(performs.size()-1));
        performs.push_back((performs[performs.size()-1])+(performs[performs.size()-2]));
       }
       i++;
     }   
for(i=0;i<performs.size();i++)
{
 sum= sum+performs[i];
}   
return sum;  }
};