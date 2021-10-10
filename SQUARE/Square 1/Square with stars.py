#!/usr/bin/env python
# coding: utf-8

# In[2]:


num1=int(input("Enter the integer"))    #Taking input
for i in range (num1):                  #1st for loop for the number of rows
    for j in range(num1):               #2nd for loop for the number of columns
        print("*",end="")               #Printing stars
    print()                             #starting for a new line

