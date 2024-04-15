## 0x17. C - Doubly linked lists

### Resources

* **Read or watch:**

	- [What is a Doubly Linked List](https://www.youtube.com/watch?v=k0pjD12bzP0)

### Learning Objectives

- At the end of this project, you are expected to be able to [explain to anyone](https://fs.blog/feynman-learning-technique/), **without the help of Google:**

* **General**

	- What is a doubly linked list
	- How to use doubly linked lists
	- Understand and know how to implement the various operations (deletion, insertion, etc) with doubly linked lists
	- Start to look for the right source of information without too much help

## Requirements

* **General**

	- Allowed editors: `vi`, `vim`, `emacs`
	- All your files will be interpreted/compiled on Ubuntu 20.04 LTS using python3 (version 3.8.5)
	- All your files should end with a new line
	- A `README.md` file, at the root of the folder of the project is mandatory
	- Your code should use the `Betty` style. It will be checked using [betty-style.pl](https://github.com/alx-tools/Betty/blob/master/betty-style.pl) and [betty-doc.pl](https://github.com/alx-tools/Betty/blob/master/betty-doc.pl)
	- You are not allowed to use global variables
	- No more than 5 functions per file
	- The only C standard library functions allowed are `malloc`, `free`, `printf` and `exit`
	- In the following examples, the `main.c` files are shown as examples. You can use them to test your functions, but you don’t have to push them to your repo (if you do we won’t take them into account). We will use our own `main.c` files at compilation. Our `main.c` files might be different from the one shown in the examples
	- The prototypes of all your functions should be included in your header file called `lists.h`
	- Don’t forget to push your header file
	- All your header files should be include guarded

## More Info

- Please use this data structure for this project:

```sh
/**
 * struct dlistint_s - doubly linked list
 * @n: integer
 * @prev: points to the previous node
 * @next: points to the next node
 *
 * Description: doubly linked list node structure
 * 
 */
typedef struct dlistint_s
{
    int n;
    struct dlistint_s *prev;
    struct dlistint_s *next;
} dlistint_t;
```

## Quiz questions


* **Question #0**
	
	- In a doubly linked list, what are possible directions to traverse it? (select all possible answers)

[a] **Forward**

[b] **Backward**

* **Answers [a], [b]**

* **Question #1**
	
	- In a doubly linked list, what’s the “head” of a linked list?

[a] It’s the node with the pointer to the next equals to `NULL`

[b] It’s the node with the pointer to the previous equals to `NULL`

* **Answer [b]**

## Tasks

0. [Print list](./0-print_dlistint.c)

* **Write a function that prints all the elements of a `dlistint_t` list.**

	- Prototype: `size_t print_dlistint(const dlistint_t *h);`
	- Return: the number of nodes
	- Format: see example

```sh
root@e1714dc5a3c9:~/alx-low_level_programming/0x17-doubly_linked_lists# gcc -Wall -pedantic -Werror -Wextra -std=gnu89 0-main.c 0-print_dlistint.c -o a
root@e1714dc5a3c9:~/alx-low_level_programming/0x17-doubly_linked_lists# ./a
9
8
-> 2 elements
root@e1714dc5a3c9:~/alx-low_level_programming/0x17-doubly_linked_lists#
```

* **Repo:**

	- GitHub repository: `alx-low_level_programming`
	- Directory: `0x17-doubly_linked_lists`
	- File: `0-print_dlistint.c`