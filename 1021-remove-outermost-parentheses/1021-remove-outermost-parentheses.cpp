class Solution {
public:
    string removeOuterParentheses(string s) {
        
 int count {0};
        int count1 {0};
        string s1 {};
        string s2 {};
        for(size_t i{0};i<s.length();i++)
        {      
            
            if(s[i]=='(')
            {
                count++;
                s1=s1+s.at(i);
                count1++;
            }
            else if(s[i]==')')
            {
                count--;
                s1=s1+s.at(i);
                count1++;
            }
            
            if(i!=0&&count==0)
            {
                s2+=s1.substr(1,(count1-2));
                s1.clear();
                count1=0;
            }
            
            
        }
        return s2;
        
    }
};