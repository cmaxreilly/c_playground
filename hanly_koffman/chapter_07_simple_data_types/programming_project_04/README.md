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

## Optimization

### Todo

### Data
Inital time for 1,000,000 iterations: ./output  0.82s user 1.82s system 77% cpu 3.437 total
- Remove printf statements to reduce load on operating system
    - ./output  0.02s user 0.00s system 97% cpu 0.019 total
- Going to try time for 10 million iterations.
    - ./output  0.16s user 0.00s system 99% cpu 0.158 total
- 100 million iterations
    - ./output  1.62s user 0.00s system 99% cpu 1.619 total
    - Accurate to 7 decimals
- 1 billion iterations
    - ./output  15.12s user 0.00s system 99% cpu 15.124 total
    - Accurate to 8 decimals
- Remove unneccessary conditionals
    - ./output  3.57s user 0.00s system 99% cpu 3.570 total
    - Accurate to 8 decimals
- 5 billion iterations
    - ./output  17.92s user 0.00s system 99% cpu 17.934 total
    - Accurate to 9 decimals
    - I suspect that, at this point, it is probably rounding error that is resulting in my issue.
      I probably need to do a bit of a redesign at this point if I want better accuracy. But, I did
      get to the point where I have 5 billion iterations in less than a minute!
- use an abritrary precision library like MPFR
- Consider Machin's formula, which converges much faster than Leibniz's formula.
- Use parallelization (Open MP)
