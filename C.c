#include <stdio.h>

int main ()
{
	//create variables
	int myNum = 5;//integer ( whole number )
	int x,y,sum;
	int a = 5, b = 6, c = 7; //declaring multiple variable
	int p,q,r,s;
	int i = 0;
	const float MYFLOATNUM = 5.99; //float point number NOTE: const keyword is used to declare a constant variable (BETTER TO DECLARE IN UPPERCASE)
	char myChar = 'D'; //character
	printf("hello world!\n");
	printf("I am learning \"C\".");//this is the comment at the end of the code in a line
	//this is a single line comment
	/*printf(myNum);//nothing happens as there is a concept of format specifiers*/
	//print variable
	printf("%d\n", myNum);
	printf("%f\n", MYFLOATNUM);
	printf("%c\n", myChar);
	printf(" my favourite number is %d\n", myNum);
	printf("my favourite number is %d\n and my favourite letter is %c\n", myNum, myChar);

	//adding variables together
	x = 5;
	y = 6;//an example of assignment operator
	sum = x + y;//an example of arithematic operator
	printf("%d\n", sum);
	printf("%i\n", a+b+c);//%d and %i works interchangeably
	p = q = r = s = 4; //assigning same value to multiple variables
	printf("%d\n", p+q+r+s);
	
	//other assignment operator
	sum += 9;
	printf("%d\n", sum);
	sum -= 1;
	printf("%d\n", sum);
	sum *= 2;
	printf("%d\n", sum);

	//comparison operators (THE RETURN VALUE OF THE COMPARISON OPERATOR IS EITHER '1' = true OR '0' = false)
	printf("%d\n", x>y);
	printf("%d\n", x==y);
	printf("%d\n", x!=y);
	printf("%d\n", x>=y);
	printf("%d\n", x<=y);

	//logical operators
	printf("%d\n", x>3 && x<10); // && (LOGICAL AND) returns true if both the statements are true
	printf("%d\n", x>3 || x<4); // || (LOGICAL OR) returns true if any one statement is true
	printf("%d\n", !(x>3 && x<10)); // ! (LOGICAL NOT) reverses the result, returns true if the statement is false

	//sizeof operator returns the memory size of the data type
	printf("%lu\n", sizeof(myNum));
	printf("%lu\n", sizeof(MYFLOATNUM));
	printf("%lu\n", sizeof(myChar));	

	//Conditional statements:
	/*
	1. Use 'if' to specify a block of code to be executed, if a specified condition is true
	2. Use 'else' to specify a block of code to be executed, if the same condition is false
	3. Use 'else if' to specify a new condition to test, if the first condition if false
	4. Use 'switch' to specify many alternative blocks of code to be executed
	*/

	if (20>18)
	{
		printf("20 is greater than 18\n");
	}
	if (x>y)
	{
		printf("x is greater than y\n"); //nothing gets printed as x is not greater than y
	}
	else if (x==y)
	{
		printf("x is equal to y\n"); //nothing gets printed as x is not equal to y
	}
	else
	{
		printf("x is less than y\n"); //this statement gets executed as x is less than y
	}

	//short hand if else
	/*
	syntax:
	variable = (condition) ? expressionTrue : expressionFalse;
	*/
	int time = 18;
	(time<16) ? printf("Good Day\n") : printf("Good Evening\n");

	// HOW DOES switch BLOCK WORKS:
	/*
	1. The 'switch' expression is evaluated at once
	2. The value of the expression is compared with the value of each 'case'
	3. If there is a match, the associated block of code is executed
	4. The 'break' statement breaks out of the switch block and stops the execution
	5. The 'default' statement is optional, and specifies some code to run if there is no case match
	*/
	int day = 4;
	switch (day)
	{
		case 1:
			printf("monday\n");
			break;
		case 2:
			printf("tuesday\n");
			break;
		case 3:
			printf("wednesday\n");
			break;
		case 4:
			printf("thursday\n");
			break;
		case 5:
			printf("friday\n");
			break;
		case 6:
			printf("saturday\n");
			break;
		case 7:
			printf("sunday\n");
			break;//A 'break' can save a lot of execution time because it "ignores" the execution of all the rest of the code in the switch block
		default:
			printf("looking forward to the weekend\n");
	}

	/*
	LOOPS :
	Loops can execute a block of code as long as a specific condition is reached. Loops are handy because they save time, reduce errors, and they make code more readable
	*/

	// WHILE LOOP
	//the while loop loops through a block of code as long as a specified condition is 'true':
	/* 
	SYNTAX:
	
	while (condition)
	{
		//block of code
	}
	*/
	while ( i<5 )
	{
		printf("%d\n", i);
		i++; //increment operator, if not used the loop condition will always be true and loop will never end
	}

	//the DO-WHILE loop
	/*
	the 'do-while' loop is a variant of the 'while' loop. this loop will execute the code block once, before checking if the condition is true, then it will repeat the loop as long as the condition is true
	
	SYNTAX :
	do
	{
		//code block to be executed
	}
	while (condition)
	*/
	do
	{
		printf("%d\n", i);
		i++;
	}
	while (i<5);

	// FOR LOOP : when you know exactly how many times you want to loop through a block of code, use the 'for' loop instead of a 'while' loop
	/*
	SYNTAX:
	for (statement 1; statement 2; statement 3)
	{
		//code blocks to be executed
	}

	1. statement 1 : is executed (one time) before the execution of the code block
	2. statement 2 : defines the condition for executing the code block
	3. statement 3 : is executed (every time) after the code block has been executed
	*/
	for (i=0; i<10; i+=2)
	{
		printf("%d\n", i);
	}

	for (i=0; i<10; i++)
	{
		if (i==4)
		{
			break; // 'break' could also be used to jump out of a loop, here as 'i' is equal to '4', loop ends
		}
		printf("%d\n", i);
	}

	for (i=0; i<10; i++)
	{
		if (i==4)
		{
			continue; // 'continue' statement breaks one iteration (in the loop), if a specified condition occurs, and continues with the next iteration in the loop
		}
		printf("%d\n", i);
	}

	// ARRAY : are used to store multiple values in a single variable, instead of declaring separate variables for each value.
	int myNumbers[] = {25, 50, 75, 100}; //declaration of an array
	printf("%d\n", myNumbers[0]); //accessing the first element of the array
	myNumbers[0] = 35; //changing the specific element of an array
	printf("%d\n", myNumbers[0]);

	//loop through the array
	for (i=0; i<4; i++)
	{
		printf("%d\n", myNumbers[i]); // this programs prints all the elements of an array
	}
	//you can also specify the size of the array and add elements later on
	int Numbers[4];
	// adding elements in the predefined array with the size 4
	Numbers[0] = 10;
	Numbers[1] = 20;
	Numbers[2] = 30;
	Numbers[3] = 40;

	for(i=0; i<4; i++)
	{
		printf("%d\n", Numbers[i]);
	}

	// STRINGS : 
	char greetings[] = "hello world!"; //creating string array
	printf("%s\n", greetings);//accessing array
	printf("%c\n", greetings[2]); //accessing single character of the string array
	greetings[0] = 'j';
	printf("%s\n", greetings); //modifying a string array
	//another crazy way of creating a string array
	char myGreetings[] = {'h', 'e', 'l', 'l', 'o', ' ', 'w', 'o', 'r', 'l', 'd', '!', '\0'}; 
	// this '\0' is known as the "null terminating character", and must be included when creating strings using this method. it tells C that this is the end of the string. 
	printf("%s\n", myGreetings);
	
	//TAKING INPUT FROM THE USER
	//create an integer variable that will store the number we get from the user
	int inputNum;
	//ask the user to type a number
	printf("type a number: \n");
	//get and save the number the user types
	scanf("%d", &inputNum);
	//output the number the user typed
	printf("you number is : %d\n", inputNum);
	
	//taking string as an input
	char firstName[30];
	printf("enter your first name\n");
	scanf("%s", firstName); // no need to specify the reference operator '&' when working with strings in 'scanf()'
	printf("hello %s\n", firstName);

	//MEMORY ADDRESS : when a variable is created in C, a memory address is assigned to the variable. The memory address is a unique number that represents the location of the variable in memory.
	// to access it, use the reference operator (&), and the result will represent where the variable is stored
	int myAge = 19;
	printf("%p\n", &myAge); // prints the memory address of the variable 'myAge'
	printf("%d\n", myAge); // prints the value of the variable 'myAge'
	// '&myAge' is often called a "pointer". A pointer is a variable that stores the memory address of another variable as its value.
	
	int* ptr = &myAge;
	printf("%d\n", myAge);
	printf("%p\n", &myAge);
	printf("%p\n", ptr);
	printf("%d\n", *ptr); // dereferencing the pointer, the value of the variable is printed


	// FUNCTIONS :
	// functions are blocks of code that perform a specific task.
	/*
	1. A function is a block of code which only runs when it is called.
	2. you can pass data, known as parameters, into a function.
	3. Functions are used to perform certain actions, and they are important for reusing code: Define the code once, and use it many times.
	4. Functions can return data to the caller, which is useful for chaining functions together.
	*/

	// CREATE A FUNCTION: declaration of function
	/*
	void myFunction() // 'myFunction' is the name of the function AND 'void' means that the function does not have a return value.
	{
		//code to be executed (defines what this function should do)
	}
	*/
	// CALLING A FUNCTION: Declared functions are not used immediately. They are "saved for later use", and will be executed when they are called.
	void myFunction()
	{
		printf("i just got called\n");
	}
	// calling a function
	myFunction(); // calling the function 'myFunction'
	// A function can be called multiple times

	// PARAMETER and ARGUMENTS
	/*
	1. A parameter is a variable that is used as an input to a function.
	2. information can be passed to functions as a parameter. Parameter act as variables inside the function.
	3. parameters are specified after the function name, inside the parentheses. you can add as many parameters you want, just separate them with a comma.
	
	SYNATX:
	returnType functionName(parameter1, parameter2, parameter3) [DECLARATION]
	{
		//code to be executed [DEFINITION]
	}
	*/
	void newFunction(char name[])
	{
		printf("hello %s\n", name);
	}

	newFunction("aryan");
	newFunction("poornima");
	//multiple parameters:
	void secFunc(char name[], int age)
	{
		printf("hello %s, you are %d years old\n", name, age);
	}
	secFunc("aryan", 19);
	secFunc("poornima", 18);

	// FUNCTION RETURNING A VALUE:
	int thirFunc(int g)
	{
		return g+5;
	}
	printf("%d\n", thirFunc(56));

	int sumFunc(int h, int k)
	{
		return h+k;
	}
	printf("%d\n", sumFunc(45, 76));
	int sumResult = sumFunc(45, 76); // you can store the result of a function in a variable
	printf("%d\n", sumResult);

	// RECURSION : it is the technique of making a function call itself. This technique provides a way to break complicated problems down into simpler problems, which are easier to solve.
	// code to add a range of numbers (1-10)
	int Rsum(int k)
	{
		if (k>0)
		{
			return k + Rsum(k-1);
		}
		else
		{
			return 0;
		}
	}
	int rangeSum = Rsum(10);
	printf("%d\n", rangeSum);

	// STRUCTURES: also called (structs) are a way to group several ralated variables into one place. Each variable in the structure is known as a member of the structure.
	// unlike an ARRAY, a STRUCTURE can contain many different data types (int, float, char, ets.)

	// STRUCTURE DECLARATION: creating a structure
	struct myStructure // structure declaration
	{
		int meraNumber; // Member (int variable)
		char meraLetter;// Member (char variable)
		char meriString[30]; // Member (char array)
	}; // End the structure with a semicolon
	
	//Accessing a structure: to access a structure, you must first create a variable of the structure type.
	struct myStructure s1; // creating a variable of the structure type
	//assign values to members of s1
	s1.meraNumber = 34;
	s1.meraLetter = 'a';
	//strcpy(s1.meriString = "hello world!");
	//print values
	printf("my number : %d\n", s1.meraNumber);
	printf("my letter : %c\n", s1.meraLetter);
	//printf("my string : %s\n", s1.meriString);
	struct myStructure s2; // creating multiple structure variables with different values, using just one structure variable.
	s2.meraNumber = 56;
	s2.meraLetter = 'b';
	printf("my number : %d\n", s2.meraNumber);
	printf("my letter : %c\n", s2.meraLetter);
	//simpler syntax
	struct myStructure s3 = {78, 'c', "hello world!"};
	printf("my number : %d\nmy letter : %c\nmy string : %s\n", s3.meraNumber, s3.meraLetter, s3.meriString);

	// COPY A STRUCTURE
	struct myStructure s4 = s3; // copy the values of s3 into s4
	//MODIFY VALUES
	s2.meraNumber = 99;
	s2.meraLetter = 'd';
	strcpy(s2.meriString, "something else");
	printf("my Number : %d\nmy letter : %c\nmy string : %s\n", s2.meraNumber, s2.meraLetter, s2.meriString);
	return 0;
}
