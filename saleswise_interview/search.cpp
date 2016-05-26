#include <iostream>
#include <string>
#include <fstream>
#include <stdlib.h>
#include <vector>
#include <stdio.h>
#include <string.h>
#include <string>
#include <cstring>
#include <stdio.h>
using namespace std;

string file_name = "dict";
string input_word = "aaa";

void parse_word(string file_word, vector<string>& myvec)
{
	char c;
	string temp = "";
	for(int i = 0; i < file_word.length(); i++)
	{
		c = file_word[i];
		if (isupper(c))
		{
			temp += c;
			while(1)
			{
				if (i == file_word.length())
				{
					myvec.push_back(temp);
					break;
				}

				i++;
				c = file_word[i];
				if (!isupper(c))
					temp += c;
				else
				{
					i--;
					myvec.push_back(temp);
					temp = "";
					break;
				}
			}
		}
	}
	return;
}

int main(int argc, char* argv[])
{
	/* word input */
	input_word = (string) argv[1];	
	string file_word = "aa";
	/* file input */
	file_name = (string) argv[2];
	ifstream inFile;
	inFile.open(file_name.c_str());

	vector<string> myvec;
	vector<string> wordvec;
	int wordvec_flag = 0;

	while (getline(inFile, file_word))
	{
		wordvec_flag = 0;
		myvec.clear();
		wordvec.clear();

		/* call function to parse word and put it in vector*/
		parse_word(file_word, myvec);
		parse_word(input_word, wordvec);

		//now both vectors are ready
		for(int i = 0; i < wordvec.size(); i++)
		{
			for (int j = 0; j < myvec.size(); j++)
			{
				char * temp1 = strdup(wordvec[i].c_str());
				char * temp2 = strdup(myvec[j].c_str());

				char * pch = strstr(temp2, temp1);

				if (pch)
				{
					wordvec_flag++;
					myvec.erase(myvec.begin(), myvec.begin()+j+1);
				}
			}
		}

		if (wordvec_flag == wordvec.size())
			cout << "YES" << endl;
		else
			cout << "NO" << endl;
	}
	inFile.close();
	return 0;
}
