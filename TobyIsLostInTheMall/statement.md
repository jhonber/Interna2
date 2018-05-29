# Toby Is Lost In The Mall

Toby is lost in a mall and now is looking for the exit, the mall can be modeled as a matrix in 2D of N rows and M columns, Toby is located at the left upper corner and the exit is located at the right lower corner, Toby just have 2 kinds of steps to move forwards to the exit, moving  right or lower to the adjacents cells  and pay a price to move there, each cell has a price that must be payed to stay there, can you help to our pet to find the exit paying the lowest price?.

## Input

The input contains two numbers N, M denoting number of rows and columns respectively. Each one of the following N lines, contains M integers denoting the price that Toby must pay to stay in the (i-th, j-th) cell.

1 <= N, M <= 1000  
Each element in the matrix is between 1 and 1000.

## Output

Print the minimum price that Toby has to pay to reach the exit.

## Sample input

```
4 5
1 1 1 5 6
2 2 1 8 1
2 1 8 1 2
1 1 1 1 1
```

## Sample output
```
9
```
