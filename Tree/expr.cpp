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

  bool isleaf() {
    return !left && !right;
  }

  friend ostream& operator<<(ostream& out, const Node& n) {
    out << n.data;
    return out;
  }
int eval() {
    if (isleaf()) return stoi(data);

    int lval = left->eval();
    int rval = right->eval();

    if (data == "*") {
      return lval * rval;
    }
    else if (data == "+") {
      return lval + rval;
    }
  }

  void postorder() {
    if (left) left->postorder();
    if (right) right->postorder();
    cout << " " << data << " ";
  }
};

int main() {
  Node<string>* p1 = new Node<string>("+");
  Node<string>* p2 = new Node<string>("+");
  Node<string>* p3 = new Node<string>("2");
  Node<string>* p4 = new Node<string>("*");
  Node<string>* p5 = new Node<string>("3");
  Node<string>* p6 = new Node<string>("9");
  p2->left = p3;
  p2->right = p4;
  p4->left = p5;
  p4->right = p6;

  Node<string>* p7 = new Node<string>("6");

  p1->left = p2;
  p1->right = p7;

  p1->postorder();
  cout << endl;

  cout << "value = ";
  cout << p1->eval();
  cout << endl;

  return 0;
}


