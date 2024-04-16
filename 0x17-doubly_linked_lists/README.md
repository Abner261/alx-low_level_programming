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

		[b] **It’s the node with the pointer to the previous equals to `NULL`**

		* **Answer [b]**

## Tasks

0. [Print list](./0-print_dlistint.c)

* **Write a function that prints all the elements of a** `dlistint_t` **list.**

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

1. [List length](./1-dlistint_len.c)

* **Write a function that returns the number of elements in a linked** `dlistint_t` **list.**

	- Prototype: `size_t dlistint_len(const dlistint_t *h);`

```sh
root@e1714dc5a3c9:~/alx-low_level_programming/0x17-doubly_linked_lists# gcc -Wall -pedantic -Werror -Wextra -std=gnu89 1-main.c 1-dlistint_len.c -o b
root@e1714dc5a3c9:~/alx-low_level_programming/0x17-doubly_linked_lists# ./b
-> 2 elements
root@e1714dc5a3c9:~/alx-low_level_programming/0x17-doubly_linked_lists#
```

* **Repo:**

	- GitHub repository: `alx-low_level_programming`
	- Directory: `0x17-doubly_linked_lists`
	- File: `1-dlistint_len.c`

2. [Add node](./2-add_dnodeint.c)

* **Write a function that adds a new node at the beginning of a** `dlistint_t` **list.**

	- Prototype: `dlistint_t *add_dnodeint(dlistint_t **head, const int n);`
	- Return: the address of the new element, or `NULL` if it failed

```sh
root@e1714dc5a3c9:~/alx-low_level_programming/0x17-doubly_linked_lists# gcc -Wall -pedantic -Werror -Wextra -std=gnu89 2-main.c 2-add_dnodeint.c 0-print_dlistint.c -o c
root@e1714dc5a3c9:~/alx-low_level_programming/0x17-doubly_linked_lists# ls
0-main.c            1-dlistint_len.c  2-add_dnodeint.c  3-main.c  5-main.c  7-main.c  a  c        README.md
0-print_dlistint.c  1-main.c          2-main.c          4-main.c  6-main.c  8-main.c  b  lists.h
root@e1714dc5a3c9:~/alx-low_level_programming/0x17-doubly_linked_lists# ./c
1024
402
98
4
3
2
1
0
root@e1714dc5a3c9:~/alx-low_level_programming/0x17-doubly_linked_lists#
```

* **Repo:**

	- GitHub repository: `alx-low_level_programming`
	- Directory: `0x17-doubly_linked_lists`
	- File: `2-add_dnodeint.c`

3. [Add node at the end](./3-add_dnodeint_end.c)

* **Write a function that adds a new node at the end of a** `dlistint_t` **list.**

	- Prototype: dlistint_t `*add_dnodeint_end(dlistint_t **head, const int n);`
	- Return: the address of the new element, or `NULL` if it failed

```sh
root@e1714dc5a3c9:~/alx-low_level_programming/0x17-doubly_linked_lists# gcc -Wall -pedantic -Werror -Wextra -std=gnu89 3-main.c 3-add_dnodeint_end.c 0-print_dlistint.c -o d
root@e1714dc5a3c9:~/alx-low_level_programming/0x17-doubly_linked_lists# ./d
0
1
2
3
4
98
402
1024
root@e1714dc5a3c9:~/alx-low_level_programming/0x17-doubly_linked_lists#
```

* **Repo:**

	- GitHub repository: `alx-low_level_programming`
	- Directory: `0x17-doubly_linked_lists`
	- File: `3-add_dnodeint_end.c`

4. [Free list](./4-free_dlistint.c)

* **Write a function that frees a** `dlistint_t` **list**

	- Prototype: `void free_dlistint(dlistint_t *head);`

```sh
root@e1714dc5a3c9:~/alx-low_level_programming/0x17-doubly_linked_lists# vi 4-free_dlistint.c 
root@e1714dc5a3c9:~/alx-low_level_programming/0x17-doubly_linked_lists# gcc -Wall -pedantic -Werror -Wextra -std=gnu89 4-main.c 3-add_dnodeint_end.c 0-print_dlistint.c 4-free_dlistint.c -o e
root@e1714dc5a3c9:~/alx-low_level_programming/0x17-doubly_linked_lists# valgrind ./e 
==30434== Memcheck, a memory error detector
==30434== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==30434== Using Valgrind-3.15.0 and LibVEX; rerun with -h for copyright info
==30434== Command: ./e
==30434== 
0
1
2
3
4
98
402
1024
==30434== 
==30434== HEAP SUMMARY:
==30434==     in use at exit: 0 bytes in 0 blocks
==30434==   total heap usage: 9 allocs, 9 frees, 1,216 bytes allocated
==30434== 
==30434== All heap blocks were freed -- no leaks are possible
==30434== 
==30434== For lists of detected and suppressed errors, rerun with: -s
==30434== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)
root@e1714dc5a3c9:~/alx-low_level_programming/0x17-doubly_linked_lists#
```

* **Repo:**

	- GitHub repository: `alx-low_level_programming`
	- Directory: `0x17-doubly_linked_lists`
	- File: `4-free_dlistint.c`

5. [Get node at index](./5-get_dnodeint.c)

* **Write a function that returns the nth node of a** `dlistint_t` **linked list**

	- Prototype: `dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index);`
	- where `index` is the index of the node, starting from `0`
	- if the node does not exist, return `NULL`

```sh
root@e1714dc5a3c9:~/alx-low_level_programming/0x17-doubly_linked_lists# vi 5-get_dnodeint.c
root@e1714dc5a3c9:~/alx-low_level_programming/0x17-doubly_linked_lists# gcc -Wall -pedantic -Werror -Wextra -std=gnu89 5-main.c 3-add_dnodeint_end.c 0-print_dlistint.c 4-free_dlistint.c 5-get_dnodeint.c -o h
root@e1714dc5a3c9:~/alx-low_level_programming/0x17-doubly_linked_lists# ./h
0
1
2
3
4
98
402
1024
98
root@e1714dc5a3c9:~/alx-low_level_programming/0x17-doubly_linked_lists#
```

* **Repo:**

	- GitHub repository: `alx-low_level_programming`
	- Directory: `0x17-doubly_linked_lists`
	- File: `5-get_dnodeint.c`
