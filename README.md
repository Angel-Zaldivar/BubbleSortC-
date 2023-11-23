# BubbleSortC-
I've written this C++ program to implement the Bubble Sort algorithm. It's a simple sorting technique, and I'm using it to sort a vector of integers in ascending order.

First things first, I've declared a vector called v and initialized it with five integers (5, 4, 3, 2, 1). These numbers are deliberately in descending order because 
I want to see if the Bubble Sort works and sorts them in ascending order.

I've got two variables, right and left, to keep track of indices. The main sorting logic is in two nested loops. The outer loop (right loop) starts from the last index and 
goes backward to the second index, and the inner loop (left loop) goes from the first index to the current right value.

Inside the inner loop, I'm comparing adjacent elements. If the element at the current left index is greater than the one at left + 1, I swap them. This process is like "bubbling up" 
the larger elements towards the end of the unsorted portion.

After the sorting loops finish, I have another loop to print out the sorted elements. I'm just using cout to display each element separated by a comma and space.

That's it! The program ends after printing the sorted vector. It's a neat way to visualize how Bubble Sort works on a simple vector of integers.
