#include <iostream>
#include <string>
#include <algorithm>
#include <vector>

using namespace std;

void reverse(string &orig, int start, int word_len)
{
	char temp;		//temporary char to switch chars
	int index = 0;		//to maintain position inside word
	for (int i = start; i < start + word_len/2; i++)
	{
		temp = orig[i];
		orig[i] = orig[start+word_len - index - 1];
		orig[start+word_len - index - 1] = temp;
		index++;
	}
	return;
}

int main()
{
	string orig;
	cout << "enter your string below" << endl;

	//input string
	getline (cin, orig);

	//temporary char to switch
	char temp;
	
	//reverse the whole string
	for (int i = 0; i < orig.length()/2; i++)
	{
		temp = orig[i];
	        orig[i] = orig[orig.length()-i-1];
        	orig[orig.length()-i-1] = temp;
	}

	//reverse words in string
	int boundary = 0;			//to keep while loop running
	int start = 0;				//start of word
	int word_len = 0;			//length of a word
	while (orig[boundary] != '\0')
	{
		boundary++;
		word_len++;
		if (orig[boundary] == ' ' || orig[boundary] == '\0')
		{
			start = boundary - word_len;
			
			//reverse word
			reverse(orig, start, word_len);

			//reset variables
			word_len = -1;			//to cover extra spaces
		}
	}
	cout << orig << endl;
	return 0;
}
