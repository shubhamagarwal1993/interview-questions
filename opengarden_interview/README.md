# opengarden_interview

	Given a list of integers ...... user to input different data.


FILES INCLUDED:
	summation.py	- has the main code


PLATFORM SUPPORT:
	 - I tried this on linux ubuntu 14.04.


BASIC APPROACH:
	 - Used recusion to generate all cases of the given input and check their sum.
	 - I have put some cases to check whether a case is worth progressing with or not. This saves some time while compiling.


BUILD AND RUN:
	- Build and run the code using the command 'python summation.py'


OUTPUT:
	- Running the program on the given lists of integers (any random order) returns the integers which form the summation we 
		need. We get all the possible outputs, though there is only one case in this question which is valid.


RUNNING TIME: 
	- This is a NP problem.
	- The running time should be O(2^n) where n is the number of integers in the list. 
		Thus, for 26 integers there will be 67108864 cases. Thus, it takes about a minute for the program to run.
