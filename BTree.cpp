/*
 * Binary Tree - source file (functions implementation)
 */

#include "BTree.h"
#include<fstream>
#include<queue>

ostream& operator<<(ostream&out, BTree& tree)
{
	tree.print_level_by_level(out);
	return out;
}

ostream& operator<<(ostream& out, Node& node)
{
	out << "( "
		<< node.value
		<< ", "
		<< node.search_cost
		<< " )";
	return out;
}

istream& operator>>(istream& in, BTree& tree)
{
	/*
	  take input from the in stream, and build your tree

	  input will look like
	  4
	  2
	  6
	  1
	  3
	  5
	  7
	*/
	int val;
	while(!in.eof())
	{
		in >> val;
		tree.insert(val);
	}
	return in;
}

BTree::BTree(const BTree& other)
{
	Node *tempNode = other.root;
	if (other.root == nullptr)
	{
		set_root(nullptr);
	}
	else
	{
		copyHelper(this->root, tempNode);
	}
	/*
	  complete this copy constructor
	  make sure when copying nodes to copy
	  - value
	  - left and right children
	*/
	
}

BTree::BTree(BTree&& other)
{
	/*
	  complete this move constructor
	*/
	if (other.root == nullptr)
	{
		root = nullptr;
	}
	else
	{
		size = other.size;
		root = other.root;
		other.size = 0;
		other.root = nullptr;
	}
}

BTree& BTree::operator=(const BTree& other)
{
	if (this != &other)
	{
		Node *tempNode = other.root;
		this->root = tempNode;
		this->size = other.size;
		copyHelper(this->root, tempNode);
		
		/*
		  complete this assignment operator
		  make sure when copying nodes to copy
		  - value
		  - left and right children
		*/
	}
	return *this;
}

BTree& BTree::operator=(BTree&& other)
{
	if (this != &other) {
		Node *tempNode = other.root;
		this->root = tempNode;
		this->size = other.size;
		other.root = nullptr;
		other.size = NULL;
	}
	return *this;
}

Node* BTree::insert(int obj)
{
	/*
	  insert a node into the tree
	  - first find where the node should go
	  - then modify pointers to connect your new node
	*/
	Node* tempNode = get_root();
	Node* LR = nullptr;
	Node* newNode = new Node(obj);
	while (tempNode != nullptr)
	{
		LR = tempNode;
		if (tempNode->value > newNode->value)
		{
			tempNode = tempNode->left;
		}
		else
		{
			tempNode = tempNode->right;
		}
	}
	if(LR == nullptr)
	{
		set_root(newNode);
	}
	else if(LR->value > newNode->value)
	{
		LR->left = newNode;
	}
	else
	{
		LR->right = newNode;
	}
	update_search_cost();
	return newNode;
}

Node* BTree::search(int obj)
{
	/*
	  recursivly search down the tree to find the node that contains obj
	  - if you don't find anything return nullptr
	*/
	Node* tempNode = get_root();
	while (tempNode != nullptr)
	{
		if (tempNode->value == obj)
		{
			return tempNode;
		}
		else if(tempNode->value < obj)
		{
			tempNode = tempNode->right;
		}
		else
		{
			tempNode = tempNode->left;
		}
	}


	return nullptr;
}

void BTree::update_search_cost()
{
	/*
	  do a BFS of your tree and update the search cost of all nodes
	*/
	queue<Node*> qNode;
	if (root == nullptr)
	{
		return;
	}
	root->search_cost = 1;
	for (qNode.push(root); !qNode.empty(); qNode.pop())
	{
	    Node* tempNode = qNode.front();
		if (tempNode->left)
		{
			tempNode->left->search_cost = tempNode->search_cost + 1;
			qNode.push(tempNode->left);
		}
		if (tempNode->right)
		{
			tempNode->right->search_cost = tempNode->search_cost + 1;
			qNode.push(tempNode->right);
		}
	}
}

double BTree::average_search_cost()
{
	
	if (root == nullptr)
	{
		return 0;
	}
	queue<Node*> qNode;
	double sumNode = 1;
	int size = 0;
	root->search_cost = 1;
	for (qNode.push(root); !qNode.empty(); qNode.pop())
	{
		++size;
		Node* tempNode = qNode.front();
		if (tempNode->left)
		{
			tempNode->left->search_cost = tempNode->search_cost + 1;
			sumNode = sumNode + tempNode->search_cost + 1;
			qNode.push(tempNode->left);
			
		}
		if (tempNode->right)
		{
			tempNode->right->search_cost = tempNode->search_cost + 1;
			sumNode = sumNode + tempNode->search_cost + 1;
			qNode.push(tempNode->right);
		}
	}
	
	return sumNode / size;
}

void BTree::inorder(ostream& out, const Node& tree)
{
	/*
	  print your nodes in infix order

	  if our tree looks like

	  4
	  2 6
	  1 3 5 7

	  we should get

	  1 2 3 4 5 6 7
	*/
	if (&tree != nullptr)
	{
		inorder(out, *(tree.left));
		out << tree.value << " ";
		inorder(out, *(tree.right));
	}
	else
	{
		return;
	}
}

void BTree::print_level_by_level(ostream& out)
{
	/*
	  print the tree using a BFS

	  output should look like this if we dont have a full tree

	  4
	  2 6
	  1 X 5 7
	  X X X X X X X 9

	  it will be helpfull to do this part iterativly,
	  so do the BFS with the std stack data structure.

	  it may also be helpfull to put the entire tree into a vector
	  (probably google this if you dont know how to do it)
	*/
	if (get_root() == NULL)
	{
		return;
	}
	queue<Node*> qNode;
	Node* qRoot = get_root();
	qNode.push(qRoot);
	while (qNode.empty() == false)
	{
		int sizeNode = qNode.size();
		while (sizeNode != 0)
		{
			Node* frontNode = qNode.front();
			qNode.pop();
			if (frontNode != nullptr)
			{
				out << frontNode->value << "[" << frontNode->search_cost << "]" << " ";
				qNode.push(frontNode->left);
				qNode.push(frontNode->right);
			}
			else
			{
				out << "X" << " ";
			}
			--sizeNode;
		}
		out << endl;
	}
	
	return;

}
void BTree::copyHelper( Node* &newRoot, Node* &originRoot)
{
	if (originRoot != nullptr)
	{
		newRoot = new Node();
		newRoot->value = originRoot->value;
		copyHelper(newRoot->right, originRoot->right);
		copyHelper(newRoot->left, originRoot->left);
	}
	else
	{
		newRoot = nullptr;
	}
}
