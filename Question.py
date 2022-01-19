from learning import average
import csv

lulus = 0
remed = 0
firstTry = True
with open('d:/FADHLY/PROGRAMMING/MyFuckingCode/Python/dataNilai.csv') as file : 
    reader = csv.reader(file)
    for row in reader : 
        if firstTry : 
            firstTry = False
            [print(x,end=' ') for x in row]
        else : 
            if int(row[2]) >= round(average) : 
                row.append('LULUS')
                lulus+=1
            else : 
                row.append('REMED')
                remed+=1
            [print(x,end=' ') for x in row]
        print('')

print(f'Jumlah siswa lulus {lulus}\nJumlah siswa remed {remed}')   
