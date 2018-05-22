# Toby and Numbers

Toby just invented a game with numbers, initially you have a list of numbers
and at any moment you can do the following operation:

    - Take two different numbers and replace the greater one with the absolute
    difference of those numbers.
    - The game ends when all the numbers are equal.

It can be shown that the game always ends and no matter how you play, the result
will be always the same.

Help toby to determine what is the result for several instances of the game.

## Input

The input begins with an integer T denoting the number of test cases. For each
test case, there is a number N indicating how many numbers are in the current case,
followed by N positive integers.

## Output

Print one integer for each test case. Note that at end of each the game all the
numbers are equal, for this reason you only need to print it once, no matter what
is the size of the input list.

## Sample input

```text
2
3
3 6 9
5
2 8 10 16 36
```

## Sample output

```text
3
2
```