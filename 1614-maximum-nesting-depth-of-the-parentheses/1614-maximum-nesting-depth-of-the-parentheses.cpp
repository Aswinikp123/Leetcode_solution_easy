class Solution {
public:
    int maxDepth(string s) {
        int top {0};
        int count {0};
        for(int i=0;i<s.length();i++)
        {
            if(s[i]=='('){
                top++;
            count=count>top?count:top;
            }
            else if(s[i]==')')
            {
                top--;
            }
         } 
        return count;
        
    }
};