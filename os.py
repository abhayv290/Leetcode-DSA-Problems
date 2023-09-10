# I wrote this program for clearing the exe files if you have  many of them 
 # you just have to run progarm in the terminal and there you are



import os
files= os.listdir()
for i in range(1,len(files)):
    if(files[i].endswith('.exe')):
        print(files[i])
        os.remove(files[i])
       
