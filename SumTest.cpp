class SumTest
{
  private: 
    BinaryTreeNode* root;
  public:
    void clean_up(BinaryTreeNode* T) 
    {
      if (T == NULL) return;
      clean_up(T->left);
      clean_up(T->right);
      delete T;
    }
    bool test1()
    {
      BinaryTreeNode* child = new BinaryTreeNode(6);
      child->left = new BinaryTreeNode(5)
      BinaryTreeNode* parent = new BinaryTreeNode(8);
      parent->left = child;
      child = new BinaryTreeNode(7);
      child->left = new BinaryTreeNode(8);
      parent->right = child;
      root = new BinaryTreeNode(9);
      root->left = parent;
      parent = new BinaryTreeNode(8);
      child = new BinaryTreeNode(6);
      child->left = new BinaryTreeNode(8);
      child->right = new BinaryTreeNode(7);
      parent->left = child;
      child = new BinaryTreeNode(7);
      child->right = new BinaryTreeNode(5);
      parent->right = child;
      int max = find_max_sum_of_nodes(root);
      clean_up(root);
      return(max == 54);
    }
  
}
