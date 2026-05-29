class Solution {
public:
    bool lemonadeChange(vector<int>& bills) {
       int current=0;
       int change5=0;
       int change10=0;
       int change20=0;
       int i;
       if((bills[0]>5||bills[1]>10)&&bills.size()>1){
            return false;
        }
       for(i=0;i<bills.size();i++){
    if(bills[i]==5){
        change5++;
    }
    if(bills[i]==10){
        change10++;
        if(change5<=0){
            return false;
        }
        else{
            change5--;
        }
    }
    if (bills[i]==20){
       change20++;
                if(change10 > 0 && change5 > 0){
                    change10--;
                    change5--;
                }
                else if(change5 >= 3){
                    change5 -= 3;
                }
                else {
                    return false;
                }
        
    }
        
       }
        
       
   return true; }
};