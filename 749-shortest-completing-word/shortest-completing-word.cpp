class Solution {
public:
    string shortestCompletingWord(string licensePlate, vector<string>& words) {
     vector<char> present;
     vector<char>restore;
     vector<string> store;
     store=words;
     vector<string> potential;
     int i=0,k,j;
     for(i=0;i<licensePlate.length();i++)
     {
        if((licensePlate[i]>='A'&&licensePlate[i]<='Z')||(licensePlate[i]>='a'&&licensePlate[i]<='z'))
        {
            present.push_back(tolower(licensePlate[i]));
        }
     } 
     restore=present;
     int b=0;  
     for(i=0;i<words.size();i++)
     { b=0;
     present=restore;
        for(j=0;j<words[i].length();j++)
        {
            for(k=0;k<present.size();k++)
            {
                if(present[k]==tolower(words[i][j]))
                {
                    words[i][j]='0';
                    b++;
                    present.erase(present.begin()+k);
                    break;
                }
                
            }

        }
        if(b==restore.size())
        {
            potential.push_back(store[i]);
        }
     }
     string s=potential[0];
     if (potential.empty()) return "";
        
       

     int maxlength=potential[0].length();
     int length;
     for(i=1;i<potential.size();i++)
     {
       length=potential[i].length();
        if(length<maxlength)
        {
            maxlength=length;
            s=potential[i];

        }
     }
   return s; }
};