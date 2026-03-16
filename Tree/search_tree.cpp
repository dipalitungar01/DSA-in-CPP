#include <iostream>

using namespace std;

class BinSearchTree {
  private:
    class BSTNode {
      public:
        int      data;
        BSTNode* left;
        BSTNode* right;

        BSTNode(int val) {
          data = val;
          left = nullptr;
          right = nullptr;
        }

      void inorder() {
        if (left) left->inorder();
        cout << " " << data << " ";
        if (right) right->inorder();
      }
    };

    BSTNode* root;

  public:
    BinSearchTree() {
      root = nullptr;
    }

bool search(int val) {
      BSTNode* curr = root;
      while(curr) {
	if (curr->data == val) return true;
        if (curr->data < val) {
          curr = curr->right;
        }
        else {
          curr = curr->left;
        }
      }
      return false;
    }

    void insert(int val) {
      if (!root) {
        root = new BSTNode(val);
        return;
      }
      BSTNode* curr = root;
      BSTNode* parent = nullptr;
while(curr) {
        if (curr->data == val) return;
        parent = curr;
        if (curr->data < val) {
          curr = curr->right;
        }
        else {
          curr = curr->left;
        }
      }

      if (parent->data < val) {
        parent->right = new BSTNode(val);
      }
      else {
        parent->left = new BSTNode(val);
      }
    }

    void inorder() {
      root->inorder();
    }
  };

int main() {
  BinSearchTree  bst;
  bst.insert(7);
  bst.insert(6);
  bst.insert(2);
  bst.insert(4);
  bst.insert(26);

  bst.inorder();
  cout << endl;

  cout << "Search 5: " << bst.search(5) << endl;
  cout << "Search 4: " << bst.search(4) << endl;
  return 0;
}



