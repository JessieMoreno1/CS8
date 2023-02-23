#include <iostream>
#include "BinaryTree.h"
#include "A.h"
int main() {
    A a;
    BinaryTree<int> t;
    t.preorder(&A::f, a);
    return 0;
}
