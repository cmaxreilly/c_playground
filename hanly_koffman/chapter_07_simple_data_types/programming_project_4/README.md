# Programming Project 4, chapter 7
This programming project is about finding the value of PI.

## Description
The value of $\pi$ can be determined by the series equation
$$
\pi = 4 x (1 - \frac{1}{3} + \frac{1}{5} - \frac{1}{7} + \frac{1}{9} - \frac{1}{11} + \frac{1}{13} -
...)
$$

Write a program to approximate the value of $\pi$ using the formula given
including terms up through 1/99.

## Conclusion
I have ended my inquiry into this particular thing because with 10 million iterations, I was only
able to get 6 or 7 digits of accuracy with a great deal of computational waste. While optimizing
this program is a bit beyond the scope of this programming project, here are some things that I
should consider if I would like to do so in the future.

- Remove unneccessary conditionals
- Iterate by 2 so that we are not checking for odd numbers
- Remove printf statements to reduce load on operating system
- use `sign = -sign` instead of a switch statement
- use an abritrary precision library like MPFR
- Consider Machin's formula, which converges much faster than Leibniz's formula.
- Use parallelization (Open MP)
