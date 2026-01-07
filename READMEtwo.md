# Winter in Data Science (WiDS) 2025: 
# TYPE OF TREES IN DATA STRUCTURES
This repository contains my progress and technical implementations for the WiDS 2025 project on Data Structures and Algorithms.

## Concepts Mastered

# 1. Tree Properties & Conventions
Definitions: Explored both edge-based and node-based height conventions.
The BST Property: Mastered the fundamental rule where for any node $n$, $Left(n) \le n \le Right(n)$, allowing for optimized searching.

# 2. Depth-First Search (DFS) Patterns
I implemented the three primary traversal strategies to understand how data is processed within a recursive stack:
Pre-order: Used for cloning or serializing trees.
In-order: Leveraged to retrieve sorted data from BSTs, which proved critical for solving complex problems like finding the "Mode" or "Minimum Difference."
Post-order: Utilized for bottom-up calculations such as height and balance verification.

# 3. Algorithm Optimization (The $O(n)$ Approach)
A key highlight of my work was optimizing the Balance Verification algorithm. By transitioning from a top-down $O(n^2)$ approach to a bottom-up $O(n)$ approach, I learned how to save resources.

## Problems Solved
LC 94: Basic implementation of an inorder traversal <br>
LC 101: Checked if a tree is symmetric about it’s root node <br>
LC 108: Converted a sorted array into a BST, with the middlemost observation serving as the root for the tree <br>
LC 110: Checked if a BST is height-balanced i.e. difference between height of 2 children subtrees being atmost 1 <br>
LC 144: Basic implementation of a preorder traversal <br>
LC 145: Basic implementation of a postorder traversal <br>
LC 501: Finding the mode(s) in a BST using an inorder traversal <br>
LC 530: Finding the minimum difference between any 2 nodes in a BST <br>
LC 700: Searching a BST for a given value <br>
