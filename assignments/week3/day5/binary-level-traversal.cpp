/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    void traverse_tree(TreeNode* node, int depth, map<int,vector<int>>& map_val){
        if(node != NULL){
            map_val[depth].push_back(node->val);
            
            traverse_tree(node->left, depth+1, map_val);
            traverse_tree(node->right, depth+1, map_val);
        }
        
    }
    vector<vector<int>> levelOrder(TreeNode* root) {
       map<int,vector<int>> values;
        traverse_tree(root, 0, values);
        
        vector<vector<int>> res;
        for(auto key : values){
            res.push_back(key.second);
        }
        
        return res;
        
    }
};