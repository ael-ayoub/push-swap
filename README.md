# Push_Swap

A sorting algorithm project that sorts data on a stack, with a limited set of instructions, using minimum possible number of moves.

## Table of Contents
* [Project Overview](#project-overview)
* [Algorithm](#algorithm)
* [Installation](#installation)
* [Usage](#usage)
* [Files Structure](#files-structure)
* [Operations](#operations)
* [Bonus Part](#bonus-part)
* [Error Management](#error-management)

## Project Overview
Push_swap is a sorting algorithm project where you need to sort a stack of random integers using two stacks (stack A and stack B) and a limited set of operations. The goal is to sort the numbers with the minimum possible number of moves.

## Algorithm
This implementation uses an optimized approach combining:
- Indexing: Converting input numbers to indices (0 to n-1) to simplify comparisons
- Chunking: Dividing numbers into chunks for efficient sorting
- Stack operations optimization

### How it works:
1. Parse and validate input numbers
2. Convert numbers to indices
3. Divide indices into chunks
4. Push chunks to stack B strategically
5. Push back numbers to stack A in sorted order

## Installation

```bash
# Clone the repository
git clone https://github.com/ael-ayoub/push_swap.git

# Move into the project directory
cd push_swap

# Compile the project
make

# Compile with bonus
make bonus
```

## Usage

```bash
# Run push_swap with numbers as arguments
./push_swap 2 1 3 6 5 8

# Run with numbers in quotes
./push_swap "1 2 3 4 5"

# Check the number of operations
./push_swap 2 1 3 6 5 8 | wc -l
```

## Files Structure

Below is the structure of the project:

```plaintext
.
├── Makefile
├── includes/
│   ├── push_swap.h
│   └── checker.h
├── libft/
│   └── [libft source files]
├── operations/
│   ├── push.c
│   ├── reverse_rotate.c
│   ├── rotate.c
│   └── swap.c
├── sorting/
│   ├── sort_small.c
│   ├── sort_big.c
│   ├── indexing.c
│   └── chunks.c
├── ft_parcing/
│   ├── input_validation.c
│   └── stack_init.c
├── main.c
├── bonus/
│   └── checker source files
└── checker_linux
```


## Operations

Below is a list of operations used in the **Push_Swap** project:

-----------------------------------------------------------------------------
| Operation | Description                                                   |
|-----------|---------------------------------------------------------------|
| `sa`      | Swap the first two elements of stack A.                       |
| `sb`      | Swap the first two elements of stack B.                       |
| `ss`      | Perform `sa` and `sb` simultaneously.                         |
| `pa`      | Push the top element of stack B onto stack A.                 |
| `pb`      | Push the top element of stack A onto stack B.                 |
| `ra`      | Rotate stack A (move the top element to the bottom).          |
| `rb`      | Rotate stack B (move the top element to the bottom).          |
| `rr`      | Perform `ra` and `rb` simultaneously.                         |
| `rra`     | Reverse rotate stack A (move the bottom element to the top).  |
| `rrb`     | Reverse rotate stack B (move the bottom element to the top).  |
| `rrr`     | Perform `rra` and `rrb` simultaneously.                       |
-----------------------------------------------------------------------------
## Bonus Part

### Checker Program

The checker program reads and executes operations from standard input:

```bash
./checker 3 2 1 0
ra
pb
sa
pa
```
Then press Ctrl+D to terminate input and see the result.

## Performance
### Operation Count Targets:

3 numbers: ≤ 3 operations
5 numbers: ≤ 12 operations
100 numbers: ≤ 700 operations
500 numbers: ≤ 5500 operations

## Error Management
### The program handles various error cases:

Duplicate numbers
Non-numeric input
Numbers bigger than INT_MAX or smaller than INT_MIN
Invalid operations in checker

Error output:
```bash
./push_swap 42 42        # Error (duplicate)
./push_swap 42 abc       # Error (non-numeric)
./push_swap 2147483648   # Error (out of range)
```
## Development
### Building

```bash
make        # Build push_swap
make bonus  # Build checker
make clean  # Remove objects
make fclean # Remove objects and binary
make re     # Rebuild
```
### Testing

```bash
# Test with random numbers
python3 generator.py 100 | xargs ./push_swap

# Memory leak check
valgrind ./push_swap 3 2 1
```

