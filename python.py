print('hello world!')
print("hello world", 50, 3.22, end=" ")#ending with end="" makes the next thing to get printed in the same line
print("printing in same line")#whatever is in between "", in end = "" gets printed in the end of the first line of the print and before the begining of the second line in the same line

#INTEGERS
print(10)
print(-3000)

#VARIABLE
num = 1234 #assigning an integer to a variable
print(num)

#FLOATING POINT NUMBERS
#floats refer to positive and negative decimal numbers
print(1.09808) #a positive float 
print(-84.649) #a negative float
flt = 24.5464 # assigning a floating point number to a variable
print(flt)

#COMPLEX NUMBERS:
"""
just like the print() statement is used to print values, 
complex() is used to create complex numbers.
It requires two values. The first one will be the real part of the comlex number, 
while the second value will be an imaginary part
"""
#complex(real, imaginary)
print(complex(10, 20)) # represents the complex number (10 +20j)
print(complex(2.5, -18.2)) # represets the complex number (2.5 -18.2j)

#BOOLEANS:
#A boolean is used to determine whether the logic of an expression or a comparison is correct. It plays a huge role in data comparison
fbool = False #assigning a boolean to a variable
print(fbool)
print(True)


#STRINGS:
"""
A string is a collection of characters closed within single, double or triple quotation marks
"""
print("hello") #double quotation marks
got = 'Game of Thrones' # single quotoation marks
print(got)
print("$") # single character
empty = ""
print(empty) #just prints an empty line
space = " " #just contains a space 
print(space, end="")
multiple_lines = '''Triple quotes allows
multi-line string'''
print(multiple_lines)

#LENGTH
print(len(multiple_lines)) #len() function indicates the number of characters in the string

#INDEXING
'''
A string in python is indexed from 0 to n-1 where n is its length. This means that the index of the first character in a string is 0
'''
#ACCESSING CHARACTERS:
'''
each character in a string can be accessed using its index. The index must be closed within square brackets, [], and 
appended to the string.
'''
batman = "Bruce Wayne"
first = batman[0] #accessing the first element
print(first)
space = batman[5] #accessing the empty space in the string
print(space)
last = batman[len(batman)-1] # accessing the last element of the string
print(last)
'''err = batman[len(batman)] #this will produce the error since the index is out of bounds
print(err)'''

#REVERSE INDEXING:
'''
we can also change our indexing convention by using negative indices.
Negative indices start from the opposite end of the string. Hence, the -1 index corresponds to the last character
'''
print(batman[-1]) #corresponds to batman[10]
print(batman[-5]) #corresponds to batman[6]

#STRING IMMUTABILITY
#once we assign a value to a string, we can't update it later. How about verifying it with an executable below?
'''
string = "Immutability"
string[0] = "O" #will give error
'''
str1 = 'hello'
print(id(str1))
str1 = 'bye'
print(id(str1))
#so remember, assigning a new value to a string variable doesn't mean that you've changed the value.

val = None
print(val) #print "None" and returns None
print(type(val))
#CHARACTERSTICS OF NONE:
'''
1.) None is not a default value for the variable that has not yet been assigned a value.
2.) None is not the same as False.
3.) None is not an empty string.
4.) None is not 0.
'''

#STRING SLICING:
'''
Slicing is the process of obtaining a portion (substring) of a string by using its indices.
'''
#syntax : string[start:end]
'''
1.) start is the index from where we want the substring to start
2.) end is the index where we want our substring to end

3.) the character at the 'end' index in the string will not be included in the substring obtained through this method
'''

mystring = "this is my string"
print(mystring[0:4])
print(mystring[1:7])
print(mystring[8:len(mystring)]) #from the 8th index till the end

#SLICING WITH A STEP:
'''
syntax: string[start:end:step]
'''

print(mystring[0:7]) #a step of 1
print(mystring[0:7:2]) #a step of 2
print(mystring[0:7:5]) #a step of 5

#REVERSE SLICING:
'''
Strings can also be sliced to return a reversed substring. In this case, we would need to switch the order of the 'start' and 'end' indices.
A negative step must also be provided:
'''

print(mystring[13:2:-1]) # take 1 step back each time
print(mystring[17:0:-2]) # take 2 step back each time

#PARTIAL SLICING:
print(mystring[:8]) # All the character before 'M'
print(mystring[8:]) # All the characters starting from 'M'
print(mystring[:]) # the whole string
print(mystring[::-1]) #the whole string in reverse (step is -1)

#STRING FORMATTING:
'''
String formatting means substituting values into a string.
1) Inserting strings within a string
2) Inserting integers within a string
3) Inserting floats within a string
'''

#inserting strings within a string
string1 = "I like %s" % "Python"
print(string1)

temp = "Educative"
string2 = "I like %s" % temp # %s is the format specifier, which tells python to insert the text here
print(string2)

string3 = "I like %s and %s" % ("python", temp)
print(string3)

#Inserting Integers within a string
my_string = "%i + %i = %i" % (1,2,3) # %i is the format specifier, which tells python to insert the integers here.
print(my_string)

#Inserting Floats within a string
string1 = "%f" % (1.11)
print(string1)

string2 = "%.2f" % (1.11) # %f is used to substitute floats within a string
print(string2)

string3 = "%.2f" % (1.117) # if we pass a float that's greater than two decimal places, then %.2f will round off the number
print(string3)

#Operators:
'''
Operators are used to perform arithmetic and logical operations on data.
They enable us to manipulate and interpret data to produce useful outputs.

5 main operator types in python are:
1) arithmetic operators
2) comparison operators
3) assignment operators
4) logical operators
5) bitwise operators
'''
#Arithmetic Operators
print(10+5) # addition
print(6-7) # subtraction
float1 = 13.65
float2 = 3.40
print(float1+float2) # addition of variables
print(float1-float2) # subtraction of variables
print(4*3) # multiplication
print(float1*float2) # multiplication of variables
print(40/10) # division
print(float1/float2) # division of variables
print(43//10) # floor division
print(float1//float2) # floor division of variables
print(10%3) # modulo (mod) 
print(float1%float2) # module of two variables


#Comparison Operators
num1 = 5
num2 = 10
num3 = 10
list1 = [6,7,8]
list2 = [6,7,8]
print(num2 > num1) # 10 is greater than 5
print(num1 > num2) # 5 is not greater than 10
print(num2 == num3) # both have the same value
print(num3 != num1) # both have different values
print(3+10 == 5+5) # both are not equal
print(3 <= 2) # 3 is not less than or equal to 2
print(num2 is num3) # both have the same object
print(list1 is not list2) # both have the different objects


#Assignment Operator
num = 10
num += 5
print(num)
num -= 5
print(num)
num *= 5
print(num)
num /= 5
print(num)
num **= 5
print(num)


#Logical Operator
my_bool = True or False # OR expression
print(my_bool)
my_bool = True and False # AND expression
print(my_bool)
my_bool = False
print(not my_bool)

# Bit Value
print( 10 * True) # Bit value of True is 1
print( 10 * False) # Bit value of False is 0

#Bitwise Operator
num1 = 10 # Binary Value = 01010
num2 = 20 # Binary value = 10100

print(num1 & num2) # 0 -> Binary value = 00000
print(num1 | num2) # 30 -> Binary value = 11110
print(num1 ^ num2) # 30 -> Binary value = 11110
print(~num1)       # -11 -> Binary value = -(1011)
print(num1 << 3)   # 80 -> Binary value = 0101 0000
print(num2 >> 3)   # 2 -> Binary value = 0010


#String Operations
#comparison operator
print('a'<'b') # 'a' has a smaller unicode value
house = "Gryffindor"
house_copy = "Gryffindor"
print(house == house_copy)
new_house = "Slytherin"
print(house == new_house)
print(new_house <= house)
print(new_house >= house)

#Concatenation
first_name = "Bat"
last_name = "man"
full_name = first_name + last_name
print(full_name)
print(full_name * 3)

#Search
# the 'in' keyword can be used to check if a particular substring exists in another string. If the substring is found, the operation returns 'True'
random_string = "this is a random string"
print('of' in random_string)
print('random' in random_string)

#CONDITIONAL STATEMENTS
# A conditional statement is a Boolean expression that, if True, executes a piece of code.
'''
There are three types of conditional statements in python:
1.) if 
2.) if-else
3.) if-elif-else
'''
# IF
num = 5
if num == 5:
    print("the number is equal to 5")

if num>5:
    print("the number is greater than 5")

# IF - Else
num = 60
output = "the number is less than or equal to 50"\
    if num <= 50 else "the number is greater than 50"

print(output)

#alternatively
if num <= 50:
    print("the number is less than or equal to 50")
else:
    print("the number is greater than 50")

# if-elif-else
num = 5
if num == 0:
    print("zero")
elif num == 1:
    print("one")
elif num == 2:
    print("two")
elif num == 3:
    print("three")
elif num == 4:
    print("four")
elif num == 5:
    print("five")
elif num == 6:
    print("six")

