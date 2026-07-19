# Random Number Generation in C

## Overview

This program generates a **pseudo-random integer between 1 and 100** using C's standard library.

Computers cannot generate truly random numbers by themselves. Instead, they use an algorithm that produces a sequence of numbers that **appears random**. These are called **pseudo-random numbers**.

---

# Header Files

```c
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
```

### `<stdio.h>`

Provides standard input/output functions such as:

* `printf()`
* `scanf()`

---

### `<stdlib.h>`

Provides functions related to memory allocation, process control, and random numbers.

Functions used in this program:

* `rand()` – Generates a pseudo-random integer.
* `srand()` – Sets (or "seeds") the starting point for the random number generator.

---

### `<time.h>`

Provides functions related to date and time.

Function used:

* `time(NULL)` – Returns the current time in **seconds since January 1, 1970 (UTC)**, also known as the **Unix Epoch**.

---

# Understanding `rand()`

`rand()` does **not** generate truly random numbers.

It generates numbers using a mathematical algorithm.

For a given starting point (called the **seed**), `rand()` always produces **the same sequence**.

Example:

```
Seed = 1

41
18467
6334
26500
19169
...
```

If the program starts with the same seed again, the sequence will be exactly the same.

---

# What is a Seed?

A **seed** is the starting value used by the random number generator.

Different seeds produce different sequences.

Example:

```
Seed = 1
41
18467
6334
...

Seed = 25
8172
132
9100
...
```

The algorithm is the same.

Only the starting point changes.

---

# Understanding `srand()`

```c
srand(123);
```

This tells the computer:

> Start generating random numbers using the seed **123**.

Every time the program runs with the same seed, it produces exactly the same sequence.

---

# Why Use `time(NULL)`?

Instead of manually choosing a seed, we use:

```c
srand(time(NULL));
```

`time(NULL)` returns the current time in seconds.

Example:

```
1752701000
```

One second later:

```
1752701001
```

Because the current time changes every second, the seed is almost always different each time the program runs.

This makes the generated numbers appear random.

---

# Why is `NULL` Used?

The `time()` function can optionally store the current time into a variable.

When we write:

```c
time(NULL);
```

we are simply saying:

> "I only want the current time."

The returned value is passed directly into `srand()`.

---

# Generating a Number Between 1 and 100

```c
int random = rand() % 100 + 1;
```

Let's break it down.

### Step 1

```c
rand()
```

Returns a large pseudo-random integer.

Example:

```
1804289383
```

---

### Step 2

```c
rand() % 100
```

The `%` operator returns the **remainder** after division.

Examples:

```
25 % 10 = 5
42 % 10 = 2
100 % 10 = 0
99 % 10 = 9
```

Therefore,

```
rand() % 100
```

can only produce:

```
0
1
2
...
99
```

There are exactly **100 possible values**.

---

### Step 3

```c
+ 1
```

Adding one shifts the range.

```
0 → 1
1 → 2
...
99 → 100
```

Now the possible values become:

```
1
2
3
...
100
```

---

# Why Not Use `rand() % 101`?

```
rand() % 101
```

produces:

```
0
1
2
...
100
```

This includes **0**, which is outside the desired range.

---

# General Formula

To generate a random integer between any two values (inclusive):

```c
rand() % (max - min + 1) + min
```

Examples:

| Desired Range | Expression           |
| ------------- | -------------------- |
| 1–100         | `rand() % 100 + 1`   |
| 10–20         | `rand() % 11 + 10`   |
| 50–75         | `rand() % 26 + 50`   |
| 200–500       | `rand() % 301 + 200` |

---

# Program Flow

```
Program Starts
      │
      ▼
Include header files
      │
      ▼
time(NULL)
      │
Current time (seconds)
      │
      ▼
srand(seed)
      │
Initializes the random number generator
      │
      ▼
rand()
      │
Large pseudo-random integer
      │
      ▼
% 100
      │
Number between 0 and 99
      │
      ▼
+1
      │
Number between 1 and 100
      │
      ▼
printf()
      │
Displays the random number
      │
      ▼
Program Ends
```

---

# Complete Example

```c
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    srand(time(NULL));

    int random = rand() % 100 + 1;

    printf("Random number between 1 and 100: %d\n", random);

    return 0;
}
```

---

# Key Takeaways

* `rand()` generates **pseudo-random** numbers, not truly random ones.
* The **seed** determines where the random sequence begins.
* `srand()` sets the seed for the random number generator.
* `time(NULL)` provides a changing seed based on the current time.
* `rand() % n` generates values from **0 to n−1**.
* Adding a value shifts the range to the desired starting point.
* To generate a random number between **min** and **max** (inclusive), use:

```c
rand() % (max - min + 1) + min
```

This is the standard technique used in beginner and intermediate C programs.
