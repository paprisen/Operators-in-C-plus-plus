Aim: To study and implement Operators in C++.

Tool: VS Code 

Theory:
In C++, operators are special symbols or keywords used to perform operations on variables and values. They are the foundation of most expressions and help manipulate data in various ways, such as arithmetic calculations, comparisons, logical evaluations, and more.

Arithmetic Operators:
Arithmetic operators combined two or more numbers using a variety of mathematical techniques such as adding, subtracting, multiplying, etc. The basic number types for arithmetic operators are +,-,*,/,%. The arithmetic operators are often used in programming whenever calculations, evaluations, or iterative mathematics are required, such as financial computations, scientific simulations, or video games.

Relational Operators:
Relational operators are used in programming to compare two objects or expressions to know their position. Relational operators will return one of two boolean values (true or false) based on the relationship of the two evaluated values. These are <,>,==,!=,=>,=<.Relational operators are one of the more important operators because they assist in program flow, via aspects of condition-based statements such as if, while or for statements. Relational operators can be used to ascertain equality, relationship such as ordering,when checking for specific criteria.

Program 1: Check if a Number is Positive, Negative, or Zero
In this program the application of relational operators (>, <, ==) along with conditional statements (if, else if, else)
To determine whether an input integer is:

Positive: If the integer is greater than zero.
Negative: If the integer is less than zero.
Zero: If the integer is exactly zero.

Algorithm:

Start
Input number num
If num > 0, print "Positive"
Else if num < 0, print "Negative"
Else, print "Zero"
End

Program 2: Calculate Average Marks and Display Grade
In this program, the user will input marks for subjects - MTT, NT, DCLD, SS, EDC. Then the program will calculate the average marks with an arithmetic operator and find the resulting grade given average marks.

Grade Conditions:
O Grade, if the average greater than 90 and equal to or less than 100
A+ Grade if the average is between 81 and 90
A Grade if the average is between 71 and 80
B Grade if the average is between 61 and 70
C Grade if the average is between 51 and 60
Fail if the average is equal to 50 or less
If the average is less than 0 or greater than 100 the program will catch this invalid input.

Algorithm:

Start.
Input marks for 5 subjects.
Calculate average = total / 5.
If average < 0 or > 100 → print "Invalid input"
Else if average > 90 → print "O Grade"
Else if average ≥ 81 → print "A+ Grade"
Else if average ≥ 71 → print "A Grade"
Else if average ≥ 61 → print "B Grade"
Else if average ≥ 51 → print "C Grade"
Else → print "Fail"

Program 3: Determine Coordinate Quadrant
In this program, the user will enter X and Y coordinates and the program will determine in which quadrant the point lies on the Cartesian plane. The program will also ascertain whether the user enters a point that is on the X-axis, Y-axis or the origin (0,0).

The program will evaluate the following conditions:
First Quadrant: X > 0 and Y > 0
Second Quadrant: X < 0 and Y > 0
Third Quadrant: X < 0 and Y < 0
Fourth Quadrant: X > 0 and Y < 0
Y-axis: X = 0 and Y != 0
X-axis: Y = 0 and X != 0
Origin: X = 0 and Y = 0

Algorithm:

Start.
Input x and y.
If x > 0 and y > 0 → print "1st Quadrant"
Else if x < 0 and y > 0 → print "2nd Quadrant"
Else if x < 0 and y < 0 → print "3rd Quadrant"
Else if x > 0 and y < 0 → print "4th Quadrant"
Else if x == 0 and y != 0 → print "Y-axis"
Else if y == 0 and x != 0 → print "X-axis"
Else → print "Origin"
End.

Conclusion: Hence, we used Logical Operators and Relational Operators  and executed the decision-making statements to get an accurate output.
