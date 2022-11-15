class Solution {
public:
    vector<vector<int>> levelOrderBottom(TreeNode* root) {
        vector<vector<int>> hehe;
        queue<TreeNode*> q;
        q.push(root);
        q.push(NULL);
        bool check = false;
        vector<int> temp;
        while(!q.empty()){
            TreeNode* root = q.front();
            q.pop();
            if(root==NULL){
                if(check){
                    hehe.push_back(temp);
                    temp.clear();
                    q.push(NULL);
                    check = false;
                }
                else break;
            }
            else{
                temp.push_back(root->val);
                if(root->left!=NULL){
                    q.push(root->left);
                    check = true;
                }
                if(root->right!=NULL){
                    q.push(root->right);
                    check = true;
                }
            }
        }
        reverse(hehe.begin(),hehe.end());
    }
};
