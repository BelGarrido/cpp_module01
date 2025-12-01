//#include <string.h>
#include <iostream>

int main(void){
	std::string str = "HI THIS IS BRAIN";
	// A pointer to variable stringSRT "stores the address of str"
	std::string *stringPTR = &str;
	// A reference (or alias) for str.
	std::string &stringREF = str;
	
	std::cout << "\033[36m" << "Memory address" << "\033[0m" << std::endl;
	std::cout << "str: " << &str << std::endl;
	std::cout << "stringPTR: " << &stringPTR << std::endl;
	std::cout << "stringREF: " << &stringREF << std::endl;
	std::cout << std::endl;
	std::cout << "\033[36m" << "Values" << "\033[0m" << std::endl;
	std::cout << "str: " << str << std::endl;
	std::cout << "stringPTR: " << stringPTR << std::endl;
	std::cout << "stringREF: " << stringREF << std::endl;
}












/* Differences:  

1. Initialization: A pointer can be initialized in this way: 

	int a = 10;
	int *p = &a;
	// OR 
	int *p;
	p = &a;
	We can declare and initialize pointer at same step or in multiple line.

2. While in references,

	int a = 10;
	int &p = a; // It is correct
	// but
	int &p;
	p = a; // It is incorrect as we should declare and initialize references at single step
	NOTE: This difference may vary from compiler to compiler. The above difference is with respect to Turbo IDE. 

3. Reassignment: A pointer can be re-assigned. This property is useful for the implementation of data structures like a linked list, a tree, etc. See the following example: 

	int a = 5;
	int b = 6;
	int *p;
	p = &a;
	p = &b;

4. On the other hand, a reference cannot be re-assigned, and must be assigned at initialization.

	int a = 5;
	int b = 6;
	int &p = a;
	int &p = b; // This will throw an error of "multiple declaration is not allowed"

	// However it is valid statement,
	int &q = p;

5. Memory Address: A pointer has its own memory address and size on the stack, whereas a reference shares the same memory address with the original variable and takes up no space on the stack.

	int &p = a;
	cout << &p << endl << &a;

6. NULL value: A pointer can be assigned NULL directly, whereas a reference cannot be. The constraints associated with references (no NULL, no reassignment) ensure that the underlying operations do not run into an exception situation.

7. Indirection: You can have a pointer to pointer (known as a double pointer) offering extra levels of indirection, whereas references only offer one level of indirection. For example, 

	In Pointers,
	int a = 10;
	int *p;
	int **q; // It is valid.
	p = &a;
	q = &p;

	// Whereas in references,
	int &p = a;
	int &&q = p; // It is reference to reference, so it is an error

8. Arithmetic operations: Various arithmetic operations can be performed on pointers, whereas there is no such thing called Reference Arithmetic (however, you can perform pointer arithmetic on the address of an object pointed to by a reference, as in &obj + 5). 
 */

