#include <iostream>
#include <vector>
#include <queue>

using namespace std;

class BinaryTreeNode {
	int val;
	BinaryTreeNode* left, * right;
public:
	BinaryTreeNode(int new_val) : val(new_val), left(NULL), right(NULL) {}
	void print() { cout << val << " "; }

	friend class BinaryTree;
	friend class BinaryTreeTest;	
}; 
int find_max_sum_of_nodes (BinaryTreeNode* T,  int &temp_max_sum )
{
    // exit if T is NULL 
	if (!T)return 0; 
    // derive the maximum sum for the left subtree 
    int left_sum = find_max_sum_of_nodes(T->left, temp_max_sum);   
    // derive the maximum sum for the right subtree 
    int right_sum = find_max_sum_of_nodes(T->right, temp_max_sum);  
		  
	// TODO: compare T->value, left_sum + T->value, and right_sum > T-?value; store as max1
	// TODO: compare max1, left_sum + right_sum + T->value; store as max2 
    // TODO: update temp_max_sum with the new max 
    // TODO: return max1 
}
int find_max_sum_of_nodes(BinaryTreeNode *T)
{
	int temp_max_sum = INT_MIN;   
    find_max_sum_of_nodes(T, temp_max_sum); 
   	return temp_max_sum;
} 
    
