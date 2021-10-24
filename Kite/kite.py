# Python3 Program to print Kite Pattern
if __name__ == '__main__':

	space = 4
	prt = '*'

	for i in range(1, 6):

		# For printing the space
		for sp in range(space, 0, -1):
			print(end = " ")

		# For printing the *
		for j in range(1, i + 1):
			print(prt, end = "")

		for k in range(1, i):
		
			if (i == 1):
			
				continue
			
			print(prt, end = "")

		print()
		space -= 1
	
	space = 1

	for i in range(4, 0, -1):

		for sp in range(space, 0, -1):
			print(end = " ")

		for j in range(1, i + 1):
			print(prt, end = "")

		for k in range(1, i):
			print(prt, end = "")

		space += 1
		print()

	space = 3

	for i in range(2, 6):

		if ((i % 2) != 0):
		
			for sp in range(space, 0, -1):
				print(" ", end = "")

			for j in range(1, i + 1):
				print(prt, end = "")

		if ((i % 2) != 0):
			print()
			space -= 1


# Python3 Program to print Kite Pattern
if __name__ == '__main__':

	space = 4
	prt = '*'

	for i in range(1, 6):

		# For printing the space
		for sp in range(space, 0, -1):
			print(end = " ")

		# For printing the *
		for j in range(1, i + 1):
			print(prt, end = "")

		for k in range(1, i):
		
			if (i == 1):
			
				continue
			
			print(prt, end = "")

		print()
		space -= 1
	
	space = 1

	for i in range(4, 0, -1):

		for sp in range(space, 0, -1):
			print(end = " ")

		for j in range(1, i + 1):
			print(prt, end = "")

		for k in range(1, i):
			print(prt, end = "")

		space += 1
		print()

	space = 3

	for i in range(2, 6):

		if ((i % 2) != 0):
		
			for sp in range(space, 0, -1):
				print(" ", end = "")

			for j in range(1, i + 1):
				print(prt, end = "")

		if ((i % 2) != 0):
			print()
			space -= 1

      
# output of code 
#     *
#    ***
#   *****
#  *******
# *********
#  *******
#   *****
#    ***
#     *
#    ***
#   *****
