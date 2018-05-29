# Toby And The Railway Stations

Toby is analysing the railway system of his city, and he has noticed that it can be modeled like a directed graph where the stations are the vertex and the edges are the rails that connect them.

Toby got a lot queries for you and for each query he wants to know how many stations are reachable if he is actually in the station S, by reachable he means that can go from S to an station T using one or more rails.

## Input

The input contains two numbers N, M denoting number of stations and rails respectively. Each one of the following M lines contains two integers (X, Y) denoting that there is a connection from X to Y, then one integer Q denoting the number of queries that Toby is going to give to you, in the next Q lines an integer S is given the city for which toby wants to know how many stations are reachable from it.

Note: You can assume that X and Y are different.

1 <= N, Q <= 1000  
0 <= M <= (N * (N - 1)) / 2



## Output

For each query print the number of stations reachable from S.

## Sample input

```
7 9
1 2
2 4
4 3
3 1
4 5
1 5
7 2
7 6
6 7
3
6
5
2
```

## Sample output
```
6
0
4
```
