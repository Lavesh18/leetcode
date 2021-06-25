class Solution {
public:
    int busyStudent(vector<int>& startTime, vector<int>& endTime, int queryTime) {
      /*  int i;
        int count=0;
        for(i=0;i<startTime.size();i++)
        {
            int j=i;
            if(endTime[j]-startTime[j]==queryTime)
                count++;
            else
                count=0;
            if(endTime[j]==startTime[j])
                count=0;
            if(endTime[j]==startTime[j]==queryTime)
                count=1;
        }
        return count;*/
        int count = 0;
		for(int i = 0; i < startTime.size(); i++){
			if(startTime[i] <= queryTime and queryTime <= endTime[i]){
				count++;
			}
		}
		return count;
    }
    
};

