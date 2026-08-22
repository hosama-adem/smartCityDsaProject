# 🏙️ Smart City Urban Transit & Route Optimization Engine (C++)

[![Language](https://img.shields.io/badge/Language-C%2B%2B17-00599C?style=for-the-badge&logo=c%2B%2B&logoColor=white)](https://isocpp.org/)
[![DSA](https://img.shields.io/badge/Data_Structures-Graph_%7C_Tree_%7C_Queue_%7C_Stack-orange?style=for-the-badge)](#-data-structures-implemented)
[![Algorithms](https://img.shields.io/badge/Algorithms-Dijkstra_%7C_BFS_%7C_DFS-brightgreen?style=for-the-badge)](#-algorithms--features)
[![License](https://img.shields.io/badge/License-MIT-blue?style=for-the-badge)](LICENSE)

A high-performance algorithmic simulation engine written in **C++** modeled to solve complex urban infrastructure challenges—including shortest path navigation, emergency vehicle dispatching, traffic flow load balancing, and hierarchical zoning.

---

## 🏗️ Custom Data Structures Implemented (From Scratch)

Unlike projects utilizing the standard template library (`std::`), this project implements core computer science data structures with custom memory management:

- 🌐 **Weighted Directed Graph (`graph.h`, `graph.cpp`)**: Adjacency list representation supporting dynamic vertex insertion, road capacity weighting, and real-time congestion factors.
- 🌲 **Hierarchical Tree (`tree.h`, `tree.cpp`)**: Multi-level organizational structure representing municipal districts, zones, and utility subdivisions.
- 🔗 **Linked List (`linkedlist.h`, `linkedlist.cpp`)**: Doubly-linked list for real-time sensor event logging and route waypoints.
- 🚦 **Priority & FIFO Queue (`queue.h`, `queue.cpp`)**: Custom queue managing transit schedules and emergency vehicle dispatch queues.
- 📚 **Call Stack (`stack.h`, `stack.cpp`)**: Navigation history and recursive backtracking for alternative detour evaluation.

---

## ⚡ Core Algorithms & Features

- **Shortest Path & Navigation**: Dijkstra’s algorithm and Bidirectional Search to compute minimum distance and lowest-latency routes across city intersections.
- **Urban Connectivity Analysis**: Breadth-First Search (BFS) and Depth-First Search (DFS) for connectivity auditing and isolated road detection.
- **Traffic Congestion Simulation**: Dynamic edge weight re-calculation simulating rush hour bottlenecks and road maintenance detours.
- **Emergency Vehicle Routing**: High-priority pre-emption routing ensuring rapid transit for emergency response units.

---

## 📁 Repository Structure

```
smartCityDsaProject/
├── graph.h / graph.cpp         # Custom Graph data structure & pathfinding
├── tree.h / tree.cpp           # Hierarchical City District Tree
├── queue.h / queue.cpp         # Dispatch & Transit Queue
├── stack.h / stack.cpp         # Navigation history & Backtracking Stack
├── linkedlist.h / linkedlist.cpp# Waypoint sequences & Log storage
├── utils.h / utils.cpp         # IO utilities, coordinate parsers, helpers
└── main.cpp                    # Interactive Simulation CLI
```

---

## 🛠️ Build & Run Instructions

### Prerequisites
- GCC / G++ (`g++ 9.0+` supporting C++17) or Clang
- Make or CMake (optional)

### Compilation
```bash
# Clone the repository
git clone https://github.com/hosama-adem/smartCityDsaProject.git
cd smartCityDsaProject

# Compile all modules with optimization flags
g++ -std=c++17 -O2 main.cpp graph.cpp tree.cpp queue.cpp stack.cpp linkedlist.cpp utils.cpp -o smartcity

# Run the interactive simulation
./smartcity
```

---

## 📄 License
Distributed under the MIT License. Developed by [Hosama Adem](https://github.com/hosama-adem).
