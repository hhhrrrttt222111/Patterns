
# Python 3 code for Pascal's Triangle
# A simple O(n^3)
# program for
# Pascal's Triangle
 
# Function to print
# first n lines of
# Pascal's Triangle
def printPascal(n) :
     
    # Iterate through every line
    # and print entries in it
    tarr = []
    maxline = 0
    for line in range(0, n) :
         
        # Every line has number of
        # integers equal to line
        # number
        cline = ""
        for i in range(0, line + 1) :
            cline += " " + str(binomialCoeff(line, i)) + " "
                
        tarr.append(cline)
        maxline = max(len(cline), maxline)
    for i in tarr:
        print(i.center(maxline))
    
     
 
# See https://www.geeksforgeeks.org/space-and-time-efficient-binomial-coefficient/
# for details of this function
def binomialCoeff(n, k) :
    res = 1
    if (k > n - k) :
        k = n - k
    for i in range(0 , k) :
        res = res * (n - i)
        res = res // (i + 1)
     
    return res
 
# Driver program
n = 7
printPascal(n)