# Toby And Sheeps

Toby is now a shepherd and has a flock of sheeps all of them in a row, but alas there are wolves too, luckly our pet is pretty relaxed and will enter on panic only if when he sight a subsegment of his flock the number of wolves is greater than the number of sheeps.

Toby has few questions for you, as he is too lazy, he wants to ask you if for an given interval  (defined by [L, R]) there are more wolves than sheeps, you have to answer Yes or No.

Note: A sheep is represented by a '1' and a wolf is represented by a '0'.

## Input
There are several test cases.  
Each test case starts by a number N denoting the number animals in the flock (sheeps and wolves), next you have to read N numbers (0 or 1); followed by a number Q, the number of queries that Toby got for you, then Q lines are given and you will have to read L and R denoting the begin and the end of the subsegment that Toby wants to check.  

1 <= N, Q <= 100000  
1 <= L <= R <= N

## Output

For each query you have to output "Yes" if the numbers of wolves is greater than the numbers of sheeps, and "No" otherwise. Without quotes.

## Sample input

```
4
1 0 1 1
3
1 2
2 2
1 4
```

## Sample output
```
No
Yes
No
```
