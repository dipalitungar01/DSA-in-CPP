#include <iostream>

using namespace std;

template <class T>
class Node {
  public:
    T   data;
    Node* left;
    Node* right;

  Node(T val) {
    data = val;
    left = nullptr;
    right = nullptr;
  }

  friend ostream& operator<<(ostream& out, const Node& n) {
    out << n.data;
    return out;
  }

  void preorder() {
    cout << " " << data << " ";
    if (left) left->preorder();
    if (right) right->preorder();
  }

  void inorder() {
    if (left) left->inorder();
    cout << " " << data << " ";
    if (right) right->inorder();
  }
 void postorder() {
    if (left) left->postorder();
    if (right) right->postorder();
    cout << " " << data << " ";
  }
};

int main() {
  Node<char> *a = new Node<char>('a');
  Node<char> *c = new Node<char>('c');
  a->left = c;
  Node<char> *f = new Node<char>('f');
  c->right = f;

  Node<char> *d = new Node<char>('d');
  Node<char> *g = new Node<char>('g');
  Node<char> *h = new Node<char>('h');
  a->right = d;
  d->left = g;
  d->right = h;
  
  cout << "preorder: ";
  a->preorder();
  cout << endl;

  cout << "inorder: ";
  a->inorder();
  cout << endl;

  cout << "postorder: ";
  a->postorder();
  cout << endl;

  return 0;
}


