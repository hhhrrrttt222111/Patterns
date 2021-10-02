alphabets = ['A','B','C','D','E']
for j in range(5):
	for i in alphabets[0:(5-j)]:
		print(i, end=" ")
	print()
