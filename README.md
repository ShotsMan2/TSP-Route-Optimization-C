# TSP Route Optimization Algorithm (Manhattan Metric)

This project implements a brute-force optimization algorithm to solve a constrained variation of the **Traveling Salesman Problem (TSP)**. It calculates the most efficient route between multiple nodes in a 2D coordinate system using **Manhattan (Taxicab) Geometry**.

## 🚀 Key Features

* **Manhattan Distance Calculation:** Utilizes the $d = |x_1 - x_2| + |y_1 - y_2|$ formula for realistic grid-based movement costs.
* **Constraint Handling:** Implements specific routing rules (e.g., restricted transitions between specific nodes) to simulate real-world logistical limitations.
* **Global Optimization:** Evaluates all valid permutations to guarantee finding the absolute shortest path (Global Minimum).
* **Coordinate-Based Logic:** Operates on a defined set of Cartesian coordinates $(x, y)$ representing distinct locations.

## 📊 Mathematical Model

The algorithm minimizes the total cost function $C_{total}$:

$$C_{total} = \sum_{i=1}^{n-1} (|x_{i+1} - x_i| + |y_{i+1} - y_i|) + (|x_{start} - x_{end}| + |y_{start} - y_{end}|)$$

Subject to:
* Visits to all nodes exactly once.
* Start and End points must be Node A.
* Specific sequence constraints (e.g., $Node_D \nrightarrow Node_E$).

## 🛠️ Technical Details

* **Language:** C (Standard Library)
* **Logic:** Permutation evaluation and conditional filtering.
* **Complexity:** Calculates fixed path variations to determine efficiency.

## 📂 Usage

1.  Compile the source code:
    ```bash
    gcc route_optimizer.c -o solver
    ```
2.  Run the executable to view the distance analysis of all valid paths and the optimal route.

---
*This repository demonstrates low-level algorithmic logic and pathfinding optimization techniques.*
