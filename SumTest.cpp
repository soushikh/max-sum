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
    bool test2()
    {
      BinaryTreeNode* child = new BinaryTreeNode(-3);
      child->left = new BinaryTreeNode(6);
      BinaryTreeNode* parent = new BinaryTreeNode(1);
      parent->left = child;
      child = new BinaryTreeNode(2);
      child->left = new BinaryTreeNode(7);
      parent->right = child;
      root = new BinaryTreeNode(8);
      root->left = parent;
      parent = new BinaryTreeNode(-7);
      child = new BinaryTreeNode(2);
      child->right = new BinaryTreeNode(5);
      child->left = new BinaryTreeNode(1);
      parent->right = child;
      int max = find_max_sum_of_nodes(root);
      clean_up(root);
      return(max == 12);
    }
    bool test3()
    {
      BinaryTreeNode* child = new BinaryTreeNode(-3);
      child->left = new BinaryTreeNode(-7);
      child->right = new BinaryTreeNode(-6);
      BinaryTreeNode* parent = new BinaryTreeNode(-4);
      parent->left = child;
      child = new BinaryTreeNode(2);
      child->left = new BinaryTreeNode(2);
      child->rightt = new BinaryTreeNode(3);
      parent->right = child;
      root = new BinaryTreeNode(-2);
      root->left = parent;
      parent = new BinaryTreeNode(-1);
      child = new BinaryTreeNode(0);
      child->right = new BinaryTreeNode(-3);
      child->left = new BinaryTreeNode(4);
      parent->right = child;
      int max = find_max_sum_of_nodes(root);
      clean_up(root);
      return(max == 7);
    }
}
