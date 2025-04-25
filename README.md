Sorting Algorithms  

This repository contains implementations of various sorting algorithms. The provided algorithms are implemented in C and can sort both integer arrays and doubly linked lists.  

▶ Table of Contents  

- [Description](#description)  
- [Functions](#functions)  
- [Algorithms](#algorithms)  
- [Usage](#usage)  

▶ Description

This project demonstrates several sorting algorithms, including Bubble Sort, Insertion Sort, Selection Sort, and Quick Sort. Each algorithm is designed to sort a collection of integers, showcasing different techniques and performance characteristics.  

▶ Functions 
  
- void bubble_sort(int *array, size_t size): Implementation of the Bubble Sort algorithm.  
- void insertion_sort_list(listint_t **list): Implementation of the Insertion Sort algorithm for doubly linked lists.  
- void selection_sort(int *array, size_t size): Implementation of the Selection Sort algorithm.  
- void quick_sort(int *array, size_t size): Implementation of the Quick Sort algorithm.  
- void print_array(const int *array, size_t size): Utility functions for printing arrays and linked lists.  

▶ Algorithms  

1. **Bubble Sort**: A simple comparison-based sorting algorithm that repeatedly steps through the list, compares adjacent elements, and swaps them if they are in the wrong order.  
2. **Insertion Sort**: Builds a sorted array one element at a time by comparing and inserting each new element into its correct position.  
3. **Selection Sort**: Sorts an array by repeatedly finding the minimum element and moving it to the beginning of the array.  
4. **Quick Sort**: A highly efficient sorting algorithm that follows the divide-and-conquer principle, partitioning the array into sub-arrays and recursively sorting them.  

▶ Usage  

To compile the code, you can use the `gcc` compiler. Here’s an example command to compile the Bubble Sort implementation:  

```bash  
gcc -o bubblesort bubblesort.c print.c -I.
