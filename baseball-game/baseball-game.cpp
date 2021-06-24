class Solution {
public:
    int calPoints(vector<string>& ops) {
      stack<int>st;
        int sum=0;
        for(int i=0;i<ops.size();i++)
        {
            if(ops[i]=="+")
            {
                int a=st.top();
                st.pop();
                int b=st.top();
                st.push(a);
                st.push(a+b);
                
            }
            else if(ops[i]=="D")
            {
                int a=st.top();
                st.push(2*a);
            }
            else if(ops[i]=="C")
            {
                st.pop();
            }
            else
            {
                st.push(stoi(ops[i]));
            }
        }
        while(!st.empty())
        {
            sum+=st.top();
            st.pop();
        }
        return sum;
    }
};

