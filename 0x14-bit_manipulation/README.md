# 0x14. C - Bit manipulation 


## Tasks

---

0. [0](./0-binary_to_uint.c) : A function that converts a binary number to an `unsigned int`.
	- Prototype: `unsigned int binary_to_uint(const char *b);`
	- Where `b` is pointing to a string of `0` and `1` chars.
	- Return: the converted number, or 0 if
		- there is one or more chars in the string `b` that is not `0` or `1`
		- `b` is `NULL`
	
1. [1](./1-print_binary.c) : A function that prints the binary representation of a number.
	- Prototype: `void print_binary(unsigned long int n);`
	- Format: see below.
		```sh
		julien@ubuntu:~/0x14. Binary$ ./b 
		0
		1
		1100010
		10000000000
		10000000001
		julien@ubuntu:~/0x14. Binary$
		```
	- You are not allowed to use arrays.
	- You are not allowed to use `malloc`
	- You are not allowed to use the `%` or `/` operators.
2. [10](./2-get_bit.c) : A function that returns the value of a bit at a given index.
	- Prototype: `int get_bit(unsigned long int n, unsigned int index);`
	- Where `index` is the index, starting from `0` of the bit you want to get.
	- Returns: the value of the bit at index `index` or `-1` if an eror occured.
3. [11](./3-set_bit.c) : A function that sets the value of a bit to `1` at a given index.
	- Prototype: `int set_bit(unsigned long int *n, unsigned int index);`
	- where `index` is the index, starting from `0` of the bit you want to set.
	- Returns: `1` if it worked, or `-1` if an error occurred.
4. [100](./4-clear_bit.c) : A function that sets the value of a bit to `0` at a given index.
	- Prototype: `int clear_bit(unsigned long int *n, unsigned int index);`
	- Where `index` is the index, starting from `0` of the bit you want to set.
	- Returns: `1` if it worked, or `-1` if an error occured.
5. [101](./5-flip_bits.c) : A function that returns the number of bits you would need to flip to get from one number to another.
	- Prototype: `unsigned int flip_bits(unsigned long int n, unsigned long int m);`
	- You are not allowed to use the `%` or `/` operators.
	- If you are here for a solution for ALX, [checker version](https://github.com/iAmG-r00t/alx-low_level_programming/blob/0377351dc5aa5ff7bf5f41869b69165c878d5a36/0x14-bit_manipulation/5-flip_bits.c).
6. [Endianness](./100-get_endianness.c) : A function that checks the endianness.
	- Prototype: `int get_endianness(void);`
	- Returns: `0` if big endian, `1` if little endian.
7. [Crackme3](./101-password) : Find the password for this [program](https://github.com/holbertonschool/0x13.c/blob/master/crackme3).
	- Save the password in the file 101-password
	- Your file should contain the exact password, no new line, no extra space
