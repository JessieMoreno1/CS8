#include <iostream>
#include "BinaryTree.h"
#include "A.h"
int main() {
    A a;
    BinaryTree<int> t(5);

    for (int i = 10; i >= 1; --i) {
        t.push(i);
    }

    std::cout << "Preorder: ";
    t.preorder(&A::f, a);

   //std::cout << "Postorder: ";
   //t.postorder(&A::f, a);
   //
   //std::cout << "Inorder: ";
   //t.inorder(&A::f, a);

    return 0;
}
