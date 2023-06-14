#include <bits/stdc++.h>
#include "graphtype.h"
#include "graphtype.cpp"
using namespace std;

int main()
{
  GraphType<char> graph;
  graph.AddVertex('A');
  graph.AddVertex('B');
  graph.AddVertex('C');
  graph.AddVertex('D');
  graph.AddVertex('E');
  graph.AddVertex('F');
  graph.AddVertex('G');
  graph.AddVertex('H');
  graph.AddEdge('A', 'B', 1);
  graph.AddEdge('B', 'E', 1);
  graph.AddEdge('A', 'D', 1);
  graph.AddEdge('B', 'C', 1);
  graph.AddEdge('D', 'C', 1);
  graph.AddEdge('B', 'G', 1);
  graph.AddEdge('H', 'G', 1);
  graph.AddEdge('G', 'F', 1);
  graph.AddEdge('E', 'H', 1);
  graph.AddEdge('C', 'A', 1);
  graph.AddEdge('H', 'F', 1);
  graph.DepthFirstSearch('A', 'F');


  return 0;
}