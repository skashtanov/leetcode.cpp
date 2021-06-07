const int ZERO = [](){
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    return 0;
}();

class Solution {
public:
    int recursive_diameter(TreeNode* node, int& current_diameter){
        if (!node)
            return 0;
        int left_diameter = recursive_diameter(node->left, current_diameter);
        int right_diameter = recursive_diameter(node->right, current_diameter);
        
        current_diameter = std::max(current_diameter, left_diameter + right_diameter + 1);
        
        return std::max(left_diameter, right_diameter) + 1;
    }
    int diameterOfBinaryTree(TreeNode* root) {
        int ans = 1;
        recursive_diameter(root, ans);
        return ans - 1;
    }
};