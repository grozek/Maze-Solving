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
#include "maze.hpp"
/*
 * Depth First Search
 */
vector<int> DFS(vector<Vertex> &adjList, Vertex &start, Vertex &exit) {
  std::stack<int> stq;
  std::vector<int> path;
  
  int current = 0;
  int previous = 0;
   stq.push(start.label);
   adjList[start.label].visited = true;
   while (!stq.empty()){
     current = stq.top();
     stq.pop();
      path.push_back(current);
      std::cout << "Current vertex: " << current << std::endl;
      if (current == exit.label){
        break;
      }
      for (int neighbor : adjList[current].neighbors){
        if (!adjList[neighbor].visited){
          adjList[neighbor].visited = true;
          adjList[neighbor].previous = current;
          stq.push(neighbor);
        } //if
      } // for
    } //while   /**/
    return path;
}

/*
 * Breadth First Search
 */
vector<int> BFS(vector<Vertex> &adjList, Vertex &start, Vertex &exit) {
  std::stack<int> que;
  std::vector<int> path;
  int current = 0;
  int previous = 0;
   que.push(start.label);
   adjList[start.label].visited = true;
   while (!que.empty()){
     current = que.top();
     que.pop();
      path.push_back(current);
      std::cout << "Current vertex: " << current << std::endl;
      if (current == exit.label){
        break;
      }
      for (int neighbor : adjList[current].neighbors){
        if (!adjList[neighbor].visited){
          adjList[neighbor].visited = true;
          adjList[neighbor].previous = current;
          que.push(neighbor);
        } //if
      } // for
    } //while 
    return path;
}
