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
    vector<int> preorderTraversal(TreeNode* root) {
        vector<int> v;
        stack<struct TreeNode *> S;
        while(1){
            while(root){
                S.push(root);
                v.push_back(root->val);
                root=root->left;
            }
            if(root==nullptr){
                break;
            }
            else{
                root=root->right;
            }
        }      
        return v;  
    }
};