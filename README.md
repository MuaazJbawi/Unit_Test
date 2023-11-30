# Unit_Test
# Max Difference Finder

## Overview

This C++ program finds the two numbers in a given list that have the maximum difference between them.

## How it Works

The program defines a function called `findMaxDifference` that takes a vector of integers as input. It iterates through the list, keeping track of the minimum element and the maximum difference found so far. It also maintains a pair of integers to store the result, which consists of two numbers with the maximum difference.

### Steps in `findMaxDifference`:

1. Initialize variables:
   - `minElement`: Tracks the minimum element in the list.
   - `maxDifference`: Tracks the maximum difference found so far.
   - `result`: A pair to store the two numbers with the maximum difference.

2. Loop through the list:
   - Calculate the difference between the current number and `minElement`.
   - If the current difference is greater than `maxDifference`, update `maxDifference` and `result` with the current pair of numbers.
   - Update `minElement` if the current number is smaller.

3. Return the `result` pair, which contains the two numbers with the maximum difference.

## How to Use

1. Clone this repository or download the source code to your local machine.

2. Compile the code using a C++ compiler. You can use a command like:
   ```bash
   g++ -o max_difference_finder max_difference_finder.cpp

