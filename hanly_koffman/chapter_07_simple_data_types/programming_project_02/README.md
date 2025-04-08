# Programming Project 2 from Chapter 7
Write a program using loops that demonstrates the problem of repesentational
error. For each fraction from 1/2 to 1/30, add up n copies of 1/n and then compare the
sum to 1. If the sum is equal to 1, display a line such as

```
Adding n 1/n's gives a result of 1.
```
If not, display either
```
Adding n 1/n's gives a result less than 1.
```
or
```
Adding n 1/n's gives a result greater than 1.
```
Use nested loops--an outer loop that counts from 2 to 30 and an inner loop that
adds up 1/2 + 1/2 on the first iteration of the outer loop, 1/3 + 1/3 + 1/3 on the sec-
ond iteration, and so on.

## Conclusion
This is very interesting, because the difference between the numbers is really vanishingly small,
but it is still enough for the program to notice when something is not going quite right.
