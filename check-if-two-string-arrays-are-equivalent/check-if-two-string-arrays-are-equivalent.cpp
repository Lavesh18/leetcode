class Solution {
public:
    bool arrayStringsAreEqual(vector<string>& word1, vector<string>& word2) {
        string add1="",add2="";
        for(int i=0;i<word1.size();i++)
        {
            add1=add1+word1[i];
        }
        for(int i=0;i<word2.size();i++)
        {
            add2=add2+word2[i];
}
        
        if(add1==add2)
            return true;
        return false;
    }
};