class Solution {
    public int evalRPN(String[] tokens) {
        Stack<Integer> st= new Stack<>();

        String op = "+-*/";
        for(String token:tokens)
        {
            int res = 0;
            if(op.indexOf(token)!=-1)
            {
                int d2 = st.pop();
                int d1 = st.pop();

                if(token.equals("+"))
                {
                    res = d1+d2;
                }
                else if(token.equals("-"))
                {
                    res = d1-d2;
                }
                else if(token.equals("*"))
                {
                    res = d1*d2;
                }
                else if(token.equals("/"))
                {
                    res = d1/d2;
                }

                st.push(res);
            }
            else
            st.push(Integer.parseInt(token));
        }

        return st.peek();
    }
}