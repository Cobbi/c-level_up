/*
 In C programming, an enumeration type(also called enum) is a data type that consists of
 integral constants. To define enums, the enum keyword is used.

 enum flag {const1, const2, ..., constN};
 
 
-- enum variable declarations
eg1:
 enum boolean {false, true};
 enum boolean check; -declaring an enum variable
eg2.
  enum boolean {false, true} check;


 By default, const1 is 0, const2 is 1 and so on. You can change default values of enums
 elements during declaration(if necessary).

 -- Changing default values of enum constants
 enum suit {
	club = 0,
	diamonds = 10,
	hearts = 20,
	spades = 3,
 };

 -- Why enums are used 
 Example:
 #include <stdio.h>
 enum suit {
	club = 0,
	diamonds = 10,
	hearts = 20,
	spades = 3
 } card;

 int main() {
	card = club;
	printf("Size of enum variable = %d bytes", sizeof(card));
return 0;
 }

 -- Output
 = Size of enum variable  = 4 bytes.
 We are getting 4 because the size of int is 4 bytes.
 This makes enum a good choice to work with flags.


*/