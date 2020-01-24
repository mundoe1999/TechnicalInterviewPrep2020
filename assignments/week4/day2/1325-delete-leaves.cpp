#include <vector>
using namespace std;

struct TreeNode
{
  int val;
  TreeNode* left;
  TreeNode* right;
};

class Solution {
public:
    TreeNode* removeLeafNodes(TreeNode* root, int target) {
        // Go to leaf
        if(root != NULL){
            root->left = removeLeafNodes(root->left, target);
            root->right = removeLeafNodes(root->right,target);
            if(root->left == NULL && root->right == NULL && root->val == target){
                root = NULL;
            }
        }
        return root;
        
    }
};