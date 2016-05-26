#!/usr/bin/env python

import sys
import readline
import io
import re

#recursive function	partial retails a copy of the integers being processed.
def subset_sum(input_nums, total, partial=[]):
	partial_sum = sum(partial)

	# here we check the sum of the numbers in every round to see if it equals total.
	if partial_sum == total:
		print "%s = %s" % (partial, total)

	# if we cross sum, we cannot have negative sums. Thus, stop. If we had negative numbers, then we could not.
	if partial_sum >= total:
		return

	for i in range(len(input_nums)):
		n = input_nums[i]
		remaining = input_nums[i+1:]
		subset_sum(remaining, total, partial + [n]) 


if __name__ == "__main__":
	#The main list which will have the input.
	#Numbers can be input in any order.
	input_num = []
	input_num.append(18897109)
	input_num.append(12828837)
	input_num.append(9461105)
	input_num.append(6371773)
	input_num.append(5965343)
	input_num.append(5946800)
	input_num.append(5582170)
	input_num.append(5564635)
	input_num.append(5268860)
	input_num.append(4552402)
	input_num.append(4335391)
	input_num.append(4296250)
	input_num.append(4224851)
	input_num.append(4192887)
	input_num.append(3439809)
	input_num.append(3279833)
	input_num.append(3095313)
	input_num.append(2812896)
	input_num.append(2783243)
	input_num.append(2710489)
	input_num.append(2543482)
	input_num.append(2356285)
	input_num.append(2226009)
	input_num.append(2149127)
	input_num.append(2142508)
	input_num.append(2134411)
	total = 100000000			#this is the summation we are looking at
	subset_sum(input_num, total)



#THE ANSWER THAT PRINTS IS 
#[18897109, 12828837, 9461105, 6371773, 5946800, 5582170, 5268860, 4552402, 4335391, 4296250, 4224851, 3279833, 3095313, 2812896, 2543482, 2226009, 2142508, 2134411] = 100000000







