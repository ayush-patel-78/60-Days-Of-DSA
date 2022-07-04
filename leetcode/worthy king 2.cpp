int Solution::solve(vector<int> &A) {
    int x =1;
    int result = 0;
    sort(A.begin(),A.end());
    for(int i=0;i<A.size();i++){
        int troops = 0;
        int diff=INT_MAX;
         int index=-1;
         int j=i;
        
         if(A[i]%x==0 ){
             result+=A[i]/x;
         }
         else {
             if(i+1<A.size() &&(A[i]/x+1)*x >= A[i+1] ){
                 result+=(A[i]/x+1);
                 A[i+1]=A[i];
             }
             else{
                 
                 result+=(A[i]/x+1);
             }
             
         }
         x++;
    }
    return result;
}
