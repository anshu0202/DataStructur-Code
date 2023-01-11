#include<iostream>// Jenny lecture
using namespace std;
/*
Red black tree is a self balancing BST
AVL is also a self balancing tree or height balance tree time complexity in all the
case is (log base2 n) but in BST it is n in worst case as 
a BST can be left or right skewed
Then why Red-Black tree?
Sometimes AVL tree requires many rotation to balance the tree
in Red- Black tree maximum two rotation is required or only recolouring of node is required
it is roughly height balanced tree while AVL is strictly height balanced tree 
in this case time complexity is also  (log base2 n) but insertion and deletion is faster in Red-Black tree as 
it requires only a few rotation and in AVL tree it requires more rotation
****************************************************
Properties of Red- Black tree:-
1)Its a self balancing BST
2)Every node is either Black or Red
3)Root node is always Black
4)Every leaf which is nil is Black  
5)If a node is Red then its children is Black
6)Every path from a node to any of its descendent NIl node has same no.
of Black nodes
7)The longest path from root to leaf cannot be more than 
twice the shortest path from the root to a leaf node
*/
int main(){
	return 0;
}
