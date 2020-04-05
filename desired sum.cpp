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
void find_and_print_sum_of_nodes (BinaryTreeNode* T, int desired_sum, int cur_sum, string buffer)
{
	// exit if T is NULL 
	 if (!T ) return; 
	    // update the ongoing sum with the current value for T 
	int new_sum = cur_sum + T->value; 
	    // update the current path string 
	string new_buffer = buffer + " " + int2ascii(T->value); 
	    // if the desired sum is found, print the corresponding path  
	 if (new_sum == desired_sum) 
	        cout << new_buffer << endl; 
	        
	//continue down the left subtree 
	find_and_print_sum_of_nodes (T->left, desired_sum, new_sum, new_buffer);
	// continue down the right subtree 
	find_and_print_sum_of_nodes (T->right, desired_sum, new_sum, new_buffer);
	// TODO: restart from the left subtree if buffer ? “” 
	if (cur_sum == desired_sum)
	{
	(T->left, desired_sum, 0, "");
	// TODO: restart from the right subtree if buffer ? “”
	(T->right, desired_sum, 0, "");
	}
}
    
