class Solution {
public:
    // My solution O(n^2)
    // string makeGood(string s) {
    //     if(s.size()==1) return s;
    //     bool changes = true;
    //     char prev;
    //     int prev_index =0;
    //     while(changes){
    //         prev = s[0];
    //         prev_index = 0;
    //         for(int i=1;i<s.size();i++){
    //             if(s[i]==' '){
    //                 changes = false;
    //                 continue;
    //             }
    //             else if(s[i] + 32 == prev || s[i]-32 == prev){
    //                s[prev_index] =' ';
    //                s[i] = ' ';
    //                changes = true;
    //                break;
    //            }
    //            prev = s[i];
    //            prev_index = i;
    //            changes = false;
    //         }
            
    //     }
    //     string ans = "";
    //     for(int i=0;i<s.size();i++){
    //         if(s[i] != ' ') ans += s[i];  
    //     }
    //     return ans;
    // }


    // Best soln O(n)
    string makeGood(string s) {
        for(int i=0;i<s.size();i++)
            if(abs(s[i]-s[i+1])==32)
                s.erase(i,2),i=max(-1,i-2);
        return s;
    }
};