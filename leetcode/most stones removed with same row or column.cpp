// class DisjointSet {
//     private: 
//           vector<int> rank,parent,child;
//     public: 

//           DisjointSet(int n){
//               parent.resize(n+1);
//               rank.resize(n+1,0);
//               child.resize(n+1,1);

//               for(int i=0;i<=n;i++){
//                   parent[i]=i;
//               }
//           }
//           int findUPar(int node){
//               if(node == parent[node]) return node;
//               return parent[node] = findUPar(parent[node]);
//           }

//           void unionByRank(int v,int u){
//               int parV = findUPar(v);
//               int parU = findUPar(u);
//               if(parV == parU) return;

//               if(rank[v] >= rank[u]){
//                   parent[u] = parV;
//               }
//               else if(rank[u] > rank[v]){
//                   parent[v] = parU;
//               }
//               else{
//                   parent[u] = parV;
//                   rank[v]++;
//               }
              

//           }

//           void unionBySize(int v,int u) {
//               int parV = findUPar(v);
//               int parU = findUPar(u);
//               if(parV == parU) return;
//               if(child[v] <= child[u]){
//                   parent[v] = parU;
//                   child[u]+=child[v];
//               }
//               else if(child[u]<child[v]){
//                   parent[u] = parV;
//                   child[v]+=child[u];
//               }
              
//           }
// };
// class Solution {
// public:
//     int removeStones(vector<vector<int>>& stones) {
//         int maxRow = 0;
//         int maxCol = 0;

//         for(auto it: stones){
//             maxRow = max(maxRow,it[0]);
//             maxCol = max(maxCol,it[1]);
//         }
//         DisjointSet ds(maxRow + maxCol + 2);
//         unordered_map<int,int> vis;
//         // col = col + maxRow + 1
//         for(auto it: stones){
//             int nodeRow = it[0];
//             int nodeCol = it[1]+maxRow +1;
//             ds.unionByRank(nodeRow,nodeCol);
//             vis[nodeRow]=1;
//             vis[nodeCol] = 1;
//             // cout<<it[0]<<":"<<ds.findUPar(it[0])<<"  "<<it[1]+maxRow+1<<":"<<it[1]+maxRow+1<<endl;

//         }
//         int components = 0;
//         for(auto it:vis){
//             // cout<<it.first<<": "<<ds.findUPar(it.first)<<endl;
//             if(ds.findUPar(it.first)==it.first) components++;
//         }
        
//         return stones.size() - components;
//     }
// };



class Solution {
public:
    int removeStones(vector<vector<int>>& stones) {
        const int n = stones.size();
        vroot = vector<int>(n);
        for(int i=0;i<n;i++) vroot[i] = i;
        for(int i=0;i<n;i++){
            for(int j=0;j<i;j++){
                if(stones[i][0] == stones[j][0] || stones[i][1] == stones[j][1])
                    connect(i,j);
            }
        }
        int cnt = 0;
        for(int i=0;i<n;i++) 
            if(vroot[i] == i) cnt++;
        return n - cnt;
    }
    
    int getRoot(int i){
        if(vroot[i] != i){
            vroot[i] = getRoot(vroot[i]);
        }
        return vroot[i];
    }
    
    void connect(int i, int j){
        vroot[getRoot(i)] = getRoot(j); 
    }
    
    vector<int> vroot;
};