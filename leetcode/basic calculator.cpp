
class Solution {
public:
    int calculate(string s) {
        stack<int> st;
        stack<int> sign;
        int sum = 0;
      
        sign.push(1);
        int i = 0;
        while(i<s.size()){
             int val = 0;
             if(s[i]-'0'>= 0 && s[i]-'0'<=9){
                while(i<s.size() && s[i]-'0'>= 0 && s[i]-'0'<=9){
                  val = val * 10 + (s[i]-'0');
                  i++;
                }
                val = sign.top()*val;
                sign.pop();
                sum += val;
                cout<<sum<<endl;
                sign.push(+1);
             }
             else if(s[i]=='+' || s[i]=='-'){
                 if(s[i]=='+') i++;
                 else{
                     if(sign.top()==1){
                         sign.push(-1);
                     }
                     else {
                         sign.push(+1);
                     }
                     i++;
                 }
             }
             else if(s[i]=='('){
                 int x = sign.top();
                 st.push(sum);
                 st.push(x);
                 sign.push(1);
                 sum = 0;
                 i++;
             }
             else if(s[i]==')'){
                 sum = st.top()*sum;
                 st.pop();
                 sum += st.top();
                 st.pop();
                 i++;
             }
             else i++;
             
        }
        return sum;
    }
};