/*
 * CSC-301
 * project2.cpp
 * Fall 2022
 *
 * Partner 1: Gabriela Roznawska
 * Partner 2: No partner :(
 * Date: October 11th, 2024
 */

#include "project2.hpp"
#include <stack>
using namespace std;

/*
 * Depth First Search
 */
vector<int> DFS(vector<Vertex> &adjList, Vertex &start, Vertex &exit) {
  std::stack<int> stq;
  std::vector<int> path;
  int current = 0;
  int previous = 0;
   stq.push(start.label);
   start.visited = true;

   while (!stq.empty()){
      current = stq.top();
      stq.pop();
      for (int i=0; i < adjList[current].neighbors[i]; i++){
        if (adjList[current].visited == false){
          adjList[current].visited == true;
          stq.push(adjList[current].neighbors[i]);
          adjList[previous] = current;
        } //if
      } // for
    } //while
   /**/
    return path;
}

/*
 * Breadth First Search
 */
vector<int> BFS(vector<Vertex> &adjList, Vertex &start, Vertex &exit) {
    vector<int> path;
    return path;
}
