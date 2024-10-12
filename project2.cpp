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

using namespace std;

/*
 * Depth First Search
 */
vector<int> DFS(vector<Vertex> &adjList, Vertex &start, Vertex &exit) {
    vector<int> path;
    stack<vector> stq = path;
    vector<int> current;
    stq.push(start);
    start.visited = true;
    while (!stq.empty){
      current = stq.pop();
      for (int i=0; i < current.neighbors<i>; i++){
        if (current.visited == false){
          current.visited == true;
          stack.push(current.neighbors<i>);
          neighbours<i>.prev = current;
        } //if
      } // for
    } //while
    
    return path;
}

/*
 * Breadth First Search
 */
vector<int> BFS(vector<Vertex> &adjList, Vertex &start, Vertex &exit) {
    vector<int> path;
    return path;
}
