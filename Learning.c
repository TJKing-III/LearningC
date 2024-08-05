#include <stdio.h>// a libary to deal with inputs and outputs

int main(){

	printf("Hello\n");
	//will print the statement inside the double quotes
	//you can add a new line by doing'\n'

	int num = 20;
	char name[] = "slim shady";
	 /*will set the variable to an interger
	float allows decimal points
	char allows single charcters
	if you add [] to char it allows you to output a string*/

	/*to output a variable we will need to format the data otherwise it will not print*/
	printf("%d\n", num); //formats the data and outputs the variable

	/*to format an interger you need to use %d
	 to format a charcter you need to use %c
	 to format a float you use %f
	 to format a string you use %s*/

	//Example:
	printf("Hello my name is %s\n", name);

	//we can check the size of a data type by using this:
	int myint;
	printf("%lu\n", sizeof(myint));//this would return the size of 4 bytes

	




	return 0;
}