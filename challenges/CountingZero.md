# Counting Trailing Zero

You have a list of _**2N**_ distinct elements. Now, you want to distribute each element into one of the _**2**_ equal set(i.e after distribution both set contains _**N**_ elements).

Let's denote the number of ways to do it by _**X**_. We want to know number of zeroes in the end of _**X**_ (i.e the highest power of 10 that divides _**X**_).

### Input Format

First line contains a single integer _**T**_.

_**T**_ lines follow each containing single integer _**N**_.

### Constraints
- 1 <= _**T**_ <= 10^5
- 1 <= _**N**_ <= 10^18

### Output Format

print  lines each containing the answer to respective test case.

**Sample Input 0**
```
2
1
3
```

**Sample Output 0**
```
0
1
```

**Explanation 0**

_**N**_ = 1:
```
List = [1, 2]
X = 2 Ways to distribute are {1,2} and {2,1}.
```

_**N**_ = 3:
```
List = [1, 2, 3, 4, 5, 6]
X = 20. You might wanna list them yourself
```