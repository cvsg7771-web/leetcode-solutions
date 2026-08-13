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
class FindElements {
public:
  unordered_set<int> mp; 
    FindElements(TreeNode* root) {
        if(root==nullptr)
         return;
        root->val=0;
      
        traverse(root,mp);
    }
    void traverse(TreeNode *tr,unordered_set<int>&mp)
    {
        
        if(tr==nullptr)
        {
            return;

        }
        mp.insert(tr->val);
        if(tr->left)
        {
            tr->left->val=2*tr->val+1;
           
        }
        if(tr->right)
        {
             tr->right->val=2*tr->val+2;
           

        }
        traverse(tr->left,mp);
        traverse(tr->right,mp);
    }
  
    
    bool find(int target) {
        if(mp.find(target)==mp.end())
        {
            return false;
        }
        return true;
    }
};

/**
 * Your FindElements object will be instantiated and called as such:
 * FindElements* obj = new FindElements(root);
 * bool param_1 = obj->find(target);
 */