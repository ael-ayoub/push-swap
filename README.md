Push_Swap
Push_Swap is a sorting algorithm project designed to sort a stack of integers using a limited set of operations. This implementation utilizes indexing and chunking techniques to optimize performance and minimize the number of operations.

Table of Contents
About the Project
Features
Files Structure
How It Works
Indexing
Chunking
Usage
Compilation
Contributing
License
About the Project
The push_swap project is a challenge that requires sorting a stack of integers using only a predefined set of operations (sa, sb, pa, pb, ra, rb, etc.). The goal is to implement an efficient algorithm to sort stacks of various sizes (e.g., 3, 5, 100, or 500 numbers) while adhering to strict constraints.

Features
Implements indexing for simplified comparisons.
Utilizes chunking to divide the problem into manageable parts for larger datasets.
Compatible with Linux environments.
Includes a checker program to validate the sorting sequence.
Files Structure
plaintext
Copy code
project-root/  
├── bonus/  
├── checker_linux/  
├── checker/  
├── includes/  
│   ├── push_swap.h  
│   └── other_header.h  
├── ft_parcing/  
│   └── (parsing related files)  
├── libft/  
│   └── (custom library for utility functions)  
├── main.c  
├── main.o  
├── Makefile  
├── operations/  
│   └── (files implementing stack operations)  
├── push_swap/  
├── sorting/  
│   └── (sorting algorithm implementations)  
How It Works
Indexing
Before sorting, all the stack values are transformed into their respective indices based on their size. For example:

Input stack: [-3, 42, 0, 10]
Indexed stack: [0, 3, 1, 2]
This simplifies comparisons since you only need to deal with indices rather than the actual values.

Chunking
Chunking divides the stack into smaller subproblems (chunks) that are sorted individually before combining them into the final sorted stack. For example, a stack of size 100 could be split into chunks of 20, sorted sequentially, and merged in order.

Usage
Clone the repository:

bash
Copy code
git clone <repository-url>  
cd push_swap  
Compile the project using the Makefile:

bash
Copy code
make  
Run the program with an input stack:

bash
Copy code
./push_swap "4 3 2 1"  
To validate the sorting sequence, use the checker program:

bash
Copy code
./push_swap "4 3 2 1" | ./checker_linux "4 3 2 1"  
Compilation
Use the provided Makefile to build the project. The Makefile ensures that all dependencies are compiled efficiently.
Contributing
Contributions are welcome! Please fork the repository, make your changes, and submit a pull request.

License
This project is open source and available under the MIT License.
