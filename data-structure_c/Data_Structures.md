<h3 style="text-align: center; font-weight: bold;"> Data Structures And Algorithms Notes</h3>
	In Computer programming terms, an algorithm is a set of well-defined instructions to solve a particular problem. 
	It takes a set of inputs and produces the desired output.

	Eg: An algorithm to add two numbers
- Take two number inputs
- Add numbers using the + operator
- Display the result

### Qualities of a Good Algorithm
- Input and output should be defined precisely.
- Each step in the algorithm should be clear and unambiguous.
- Algorithm should be most effective among many different ways to solve a problem.
- An algorithm should not include computer code.
- Instead, the algorithm should be written in such a way that
	   it can be used in different programming languages.

### Example: Find the largest among three numbers
<p>
	Step 1: Start
	Step 2: Declare variables a,b and c.
	Step 3: Read variables a,b and c.
	Step 4: if a > b
	           If a > c
	              Display a is the largest number.
	           Else
	             Display c is the largest number.
	        Else
	          If b > c
	               Display b is the largest number.
	           Else
	             Display c is the largest number.
	Stop 5: Stop
</p>

<h2 style="text-align: center; font-weight: bold;">Data Structures And Types</h2>
	Data structure is a storage tha is used to store and organize data.
	It is a way of arranging data on a computer so that it can be accessed and updated efficiently.

	Depending on your requirement and project, it is important to choose the right data structure for your project.
	For example if you want to store data sequentially in the memory, then you can go for the Array data structure.

	Data structure and data types are slightly different.
	Data Structure is the collection of data types arranged in a specific order.

## Types of Data structures
1. Linear data structure
2. Non-linear data structure

## Linear data structures

	In linear data structures, the elements are arranged in sequence one after the other.
	Since elements are arranged in particular order, they are easy to implement.

	However, when the complexity of the program increases, the linear data structures might not be the best choice because of operational complexities.

## Popular linear data structures are:
### 1. Array Data Structure

	In an array, elements in memory are arranged in continuous memory.
	All the elements of an array are of the same type.
	And, the type of elements that can be stored in the form of arrays is determined by
	 the programming language.

### 2. Stack Data Structure
	In stack data Structure, elements are stored in the LIFO principle.
	That is, the last element stored in a stack will be removed first.
	It works just like a pile of plates where the last plate kept on the will be removed first.

### 3. Queue Data Structure
	Unlike stack, the queue data structure works in the FIFO principle where first element stored in the queue will be removed first.

	It works just like a queue of people in the ticket counter where first person on the queue wil get the ticket first.

### 4. Linked List Data Structure
	In a linked list data structure, data elements are connected through a series of nodes.
	And each node contains the data items and address to the next node.


## Non linear data structures

	Unlike linear data structures, elements in non-linear data structures are not in any sequence.
	Instead they are arranged in a hierarchical manner where one element will be connected to one or more elements.

	Non-linear data structures are further divided into graph and tree based data structures.
### 1. Graph Data Structure

	In graph data structure, each node is called vertex and each vertex is connected to other vertices through edges.

### 2. Trees Data Structure

	Similar to a graph, a tree is also a collection of vertices and edges.
	However, in tree data structure, there can only be one edge between two vertices.

<h2 style="text-align: center; font-weight: bold;">What are Algorithms?</h2>

	Informally, an algorithm is nothing but a mention of steps to solve a problem.
	They are essentially a solution.

### Example in English: Find the factorial of n
	Initialize fact = 1
	For every value v in range 1 to n:
	    Multiply the fact by v
	fact contains the factorial of n
### In C Lang
<code>
	int factorial(int n) {
		for (int v = 1; v <= n; v++) {
			fact = fact * v;
		}
		return fact;
	}
</code>

	Programming is all about data structures and algorithms.
	Data structures are used to hold data while algorithms are used to solve the problem using that data.

	Data structures and algorithms (DSA) goes through solutions to standard problems in detail and gives you an insight into how efficient it is to use each one of them. 
	It also teaches you the science of evaluating the efficiency of an algorithm.
	This enables you to choose the best of various choices.

<h2 style="text-align: center; font-weight: bold;">Asymptotic Analysis: Big-O Notation, Theta notation and Omega notation</h2>

	The efficiency of an algorithm depends on the amount of time, storage and other resources required to execute the algorithm. The efficiency is measured with the help of asymptotic notations.

	An algorithm may not have the same performance for different types of inputs.
	With the increase in the input size, the performance will change.

	The study of change in performance of the algorithm with the change in the order of the input size is defined as asymptotic analysis.

### Asymptotic Notations

	Asymptotic notations are the mathematical notations used to describe the running time of an algorithm when the input tends towards a particular value or a limiting value.

	For example: In bubble sort, when the input array is already sorted, the time taken by the algorithm is linear i.e. the best case.

	But, when the input array is in reverse condition, the algorithm takes the maximum time (quadratic) to sort the elements i.e. the worst case.

	When the input array is neither sorted nor in reverse order, then it takes average time.
	These durations are denoted using asymptotic notations.

### There are mainly three asymptotic notations:

- Big-O notation
- Omega notation
- Theta notation

### Big-O Notation(O-notation)
	Big-O notation represents the upper bound of the running time of an algorithm.
	Thus, it gives the worst-case complexity of an algorithm.
<code>
	o(g(n)) = { f(n): there exist positive constants c and n
 	such that 0 <= f(n) <= cg(n)
	for all n >= n0}
</code>

	The above expression can be described as a function f(n) belongs to the set O(g(n)) if there exists a positive constant c such that it lies between 0 and cg(n), for sufficiently large n.

	For any value of n, the running time of an algorithm does not cross the time provided by O(g(n)).

	Since it gives the worst-case running time of an algorithm, it is widely used to analyze an algorithm as we are always interested in the worst-case scenario.

### Omega Notation(Ω-notation)
	Omega notation represents the lower bound of the running time of an algorithm.
	Thus, it provides the best case complexity of an algorithm.

<code>
	Ω(g(n)) = { f(n): there exist positive constants c and n0 
            such that 0 ≤ cg(n) ≤ f(n) for all n ≥ n0 }

</code>

	The above expression can be described as a function f(n) belongs to the set Ω(g(n)) if there exists a positive constant c such that it lies above cg(n), for sufficiently large n.

	For any value of n, the minimum time required by the algorithm is given by Omega Ω(g(n)).

### Theta Notation (Θ-notation)

	Theta notation encloses the function from above and below.
	Since it represents the upper and the lower bound of the running time of an algorithm,
	it is used for analyzing the average-case complexity of an algorithm.

	For a function g(n), Θ(g(n)) is given by the relation:
<code>
Θ(g(n)) = { f(n): there exist positive constants c1, c2 and n0
            such that 0 ≤ c1g(n) ≤ f(n) ≤ c2g(n) for all n ≥ n0 }
</code>

	The above expression can be described as a function f(n) belongs to the set Θ(g(n)) 
	if there exist positive constants c1 and c2 such that it can be sandwiched between c1g(n) and c2g(n),
	for sufficiently large n.

	If a function f(n) lies anywhere in between c1g(n) and c2g(n) for all n ≥ n0,
	then f(n) is said to be asymptotically tight bound.

<h2 style="text-align: center; font-weight: bold;">Master Theorem</h2>

	The master method is a formula for solving recurrence relations of the form:
<code>
	T(n) = aT(n/b) + f(n),
where,
n = size of input
a = number of subproblems in the recursion
n/b = size of each subproblem. All subproblems are assumed 
     to have the same size.
f(n) = cost of the work done outside the recursive call, 
      which includes the cost of dividing the problem and
      cost of merging the solutions

Here, a ≥ 1 and b > 1 are constants, and f(n) is an asymptotically positive function.
</code>

	An asymptotically positive function means that for a sufficiently large value of n, we have f(n) > 0.

	The master theorem is used in calculating the time complexity of recurrence relations (divide and conquer algorithms) in a simple and quick way.

### Master Theorem Limitations

__The master theorem cannot be used if__:

    T(n) is not monotone. eg. T(n) = sin n
    f(n) is not a polynomial. eg. f(n) = 2n
    a is not a constant. eg. a = 2n
    a < 1

<h2 style="text-align: center; font-weight: bold;">Divide and Conquer Algorithm</h2>

A divide and conquer algorithm is a strategy of solving a large problem by

- breaking the problem into smaller sub-problems
- solving the sub-problems, and
- combining them to get the desired output.

To use the divide and conquer algorithm, recursion is used.

### How Divide and Conquer Algorithms Work?

__Here are the steps involved:__

- Divide: Divide the given problem into sub-problems using recursion.
- Conquer: Solve the smaller sub-problems recursively. If the subproblem is small enough, then solve it directly.
- Combine: Combine the solutions of the sub-problems that are part of the recursive process to solve the actual problem.
   

### Divide and Conquer Vs Dynamic approach

The divide and conquer approach divides a problem into smaller subproblems; these subproblems are further solved recursively.
The result of each subproblem is not stored for future reference, whereas, in a dynamic approach, the result of each subproblem is stored for future reference.

Use the divide and conquer approach when the same subproblem is not solved multiple times.
Use the dynamic approach when the result of a subproblem is to be used multiple times in the future.

Let us understand this with an example. Suppose we are trying to find the Fibonacci series.

*Divide and Conquer approach:*
<code>
	fib(n)
	   If n < 2, return 1
	   Else , return f(n - 1) + f(n -2)
</code>

*Dynamic approach:*
<code>
mem = []
fib(n)
    if n in mem: return mem[n]
    else,
        if n < 2, f = 1
        else , f = f(n - 1) + f(n -2)
        mem[n] = f
        return f
</code>

	In a dynamic approach, mem stores the result of each subproblem.

### Advantages of Divide and Conquer Algorithm

- The complexity for the multiplication of two matrices using the naive method is O(n3), whereas using the divide and conquer approach (i.e. Strassen's matrix multiplication) is O(n2.8074). This approach also simplifies other problems, such as the Tower of Hanoi.
- This approach is suitable for multiprocessing systems.
- It makes efficient use of memory caches.

