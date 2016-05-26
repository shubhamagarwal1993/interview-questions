			RIVERBED 

	Given a string of words ...... reverse the words.

FILES INCLUDED:
	reverse.cpp	- main program contained here
	Makefile 	- main idea was to only have to type in make to build program.


PLATFORM SUPPORT:
	I tried this on linux ubuntu 14.04.


BASIC APPROACH:
	Reverse the string
	Reverse each word


USER INPUT
	The user can input any string with words/spaces in the terminal during run time.


BUILD AND RUN:
OPTION1:	Have the g++ compiler installed.
		Use the command 'g++ reverse.cpp'
		Run the executable ./a.out
		enter your string with spaces

OPTION2:	The Makefile is included.
		Use the command "make" in a linux command line.
		Run the executable ./output
		enter your string with spaces

RUNNING TIME AND SPACE COMPLEXITY:
	- The running time should be O(n) where n is the length of the string during input.
	- The space complexcity is O(1) since nothing new is made such that it depends on the length of the string.
