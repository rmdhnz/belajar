import csv 

total = 0
jml = 0
firstTry = True
with open('d:/FADHLY/PROGRAMMING/MyFuckingCode/Python/dataNilai.csv') as file : 
    reader = csv.reader(file)
    for row in reader : 
        if firstTry : 
            firstTry = False
            continue
        else : 
            total+=int(row[2])
            jml+=1

average = total/jml