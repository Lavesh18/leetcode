class Solution {
public:
    int countMatches(vector<vector<string>>& items, string ruleKey, string ruleValue) {
       int val;
        if(ruleKey=="type")
            val=0;
        else if(ruleKey=="color")
            val=1;
        else if(ruleKey=="name")
            val=2;
            
        int count=0;
        
        for(int i=0;i<items.size();i++)
        {
            if(items[i][val]==ruleValue)
                count++;
        }
         return count;
    }
   
    
};
