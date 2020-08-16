# C++ essentials for tech coding interview

## Reference: https://github.com/isocpp/CppCoreGuidelines/blob/master/CppCoreGuidelines.md#es23-prefer-the--initializer-syntax

## Best practices & heads-up
1. Always initialize types.
2. ```const``` is required for accessor member functions of classes; so think about ```const``` at the beginning in case you need to add it to every single member function later. 
3. Passing by **Reference** for function parameters can be used to return more than one value in a function; often used for objects to avoid bulky copies.


#### A* algorithm
```py
import heapq

def heuristic(a, b):
    (x1, y1) = a
    (x2, y2) = b
    return abs(x1 - x2) + abs(y1 - y2)

def a_star_search(graph, start, target_node):
    pq = [(0, start)]
    
    came_from = {}
    cost = {}
			
    came_from[start] = None
    cost[start] = 0
    
    while pq:
        priority, cur_node = heapq.heappop(pq)
        
        if cur_node == target_node:
            break
        
        for nei, weight in graph[cur_node]:
            new_cost = cost[cur_node] + weight
            if nei not in cost or new_cost < cost[nei]:
                cost[next] = new_cost
                priority = new_cost + heuristic(nei, target_node)
                heapq.heappush(pq, (priority, nei))
                came_from[nei] = cur_node
    
    return came_from, cost
```