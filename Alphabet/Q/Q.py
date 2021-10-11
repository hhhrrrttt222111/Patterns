str="";    
for Row in range(0,7):    
    for Col in range(0,7):     
        if ((Col == 1 and Row != 0 and Row != 6) or (Row == 0 and Col > 1 and Col < 5) or (Col == 5 and Row != 0 and Row != 5) or (Row == 6 and Col > 1 and Col < 4) or (Col == Row - 1 and Row > 3)):  
            str=str+"*"    
        else:      
            str=str+" "    
    str=str+"\n"    
print(str);   