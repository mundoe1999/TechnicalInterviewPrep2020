/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* left;
    Node* right;
    Node* next;

    Node() : val(0), left(NULL), right(NULL), next(NULL) {}

    Node(int _val) : val(_val), left(NULL), right(NULL), next(NULL) {}

    Node(int _val, Node* _left, Node* _right, Node* _next)
        : val(_val), left(_left), right(_right), next(_next) {}
};
*/
class Solution {
public:
    map<int,vector<Node*>> same_gen;
    
    void populate_map(Node* root, int depth){
        if(root != NULL){

            same_gen[depth].push_back(root);
            populate_map(root->left, depth+1);
            populate_map(root->right, depth+1);   
        }
    }
    Node* connect(Node* root) {
        // Populate map first
        if(root == NULL)
            return root;
        
        populate_map(root->left, 0);
        populate_map(root->right,0);
        
        for(auto key : same_gen){
            cout << key.first << endl;
            for(int i = 0; i < key.second.size()-1; i++){
                key.second[i]->next = key.second[i+1];
            }

        }
        return root;
        
    }
};