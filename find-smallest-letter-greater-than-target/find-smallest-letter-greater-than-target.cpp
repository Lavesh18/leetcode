class Solution {
public:
    char nextGreatestLetter(vector<char>& letters, char target) {
        int start=0;
        int end=letters.size()-1;
        char c=letters[0];
        
        while(start<=end)
        {
            int mid =(start+end)/2;
            if(letters[mid]>target){
                end=mid-1;
                c=letters[mid];
                
            }
            else
                start=mid+1;
            
        }
        return c;
    }
};
