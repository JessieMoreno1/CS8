#include <iostream>
#include "BinaryTree.h"
#include "A.h"
int main() {
    A a;
    BinaryTree<int> t(5);
    for (int i = 10; i >= 1; --i) {
        t.push(i);
    }
    t.preorder(&A::f, a);
    return 0;
}
