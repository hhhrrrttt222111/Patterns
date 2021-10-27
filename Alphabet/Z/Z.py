str="";    
for Row in range(0,7):    
    for Col in range(0,7):     
        if (((Row == 0 or Row == 6) and Col >= 0 and Col <= 6) or Row+Col==6):  
            str=str+"*"    
        else:      
            str=str+" "    
    str=str+"\n"    
print(str);    