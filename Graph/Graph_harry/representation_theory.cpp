/*
Ways to represent a graph
There are two major type of representation of graph
1)Adjacency list - Mark the nodes with the list of its neighbour
2)Adjacency matrix- A(ij) = 1 for an edge between i and j,0 otherwise
3) Edge set- Store the pair of nodes/ vertices connected with an edge. Eg- [{0,1},{0,4},{1,4}]
4) Other implementations to represent a graph also exits. For e.g. Compact list 
representation, cost adjacency list, cost adjacency matrix e.t.c
-------------------------------------------------------------------------------------

*Adjacency list:-
*Mark the nodes with the list of its neighbour.
*Adjacency matrix:- A(ij) 
1 for an edge between i and j,0 otherwise
*Cost Adjacency list:-
Cost is also stored along with the links
*Compact list Representation:-
The entire graph is stored in a 1d array

*****************************************
          Exploring a Vertex(Node)
1)We have already looked into tree traversal algorithms in Tree
2)In a typical Tree traversal algorithm, we traverse through (or visit)
all the nodes of a graph and add it to the collection of visited nodes
3)Exploring a vertex in a graph means visiting all the connected vertices          
*/
