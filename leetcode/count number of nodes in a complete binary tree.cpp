/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    int find_level(TreeNode* root,int level){
        if(root==NULL) return level;
        return find_level(root->left,level+1);
    }
    void solve(TreeNode* root,int & count,int level,int curr_height){
        if(root == NULL) return ;
        if(root->left==NULL && root->right==NULL && curr_height==level-1)
        {
            count+=1;
            cout<<count;
        }
        if(root->left) solve(root->left,count,level,curr_height+1);
        if(root->right) solve(root->right,count,level,curr_height+1);
        
    }
    int countNodes(TreeNode* root) {
        int level = find_level(root,0);
        int count = 0;
        solve(root,count,level,0);
        // cout<<count;
        int nodes = pow(2,level-1) + count -1;
        return nodes;
    }
};