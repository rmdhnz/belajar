from tkinter import *
from types import LambdaType
from PIL import ImageTk,Image

root = Tk()
root.title('Learn to build GUI')
root.iconbitmap('d:/FADHLY/PROGRAMMING/MyFuckingCode/Python/F BARU.ico')

my_img1 = ImageTk.PhotoImage(Image.open('d:/FADHLY/EMPTY CLUB.png'))
my_img2 = ImageTk.PhotoImage(Image.open('d:/FADHLY/F BARU.png'))
my_img3 = ImageTk.PhotoImage(Image.open('d:/FADHLY/bg_zoom.jpg'))

imgList = [my_img1,my_img2,my_img3]

myLabel = Label(image=my_img1)
myLabel.grid(row=0,column=0,columnspan=3)

def forward(img_num) :
    global myLabel
    global button_next
    global button_back 
    
    myLabel.grid_forget()
    myLabel = Label(image=imgList[img_num-1])
    button_next = Button(root,text=">>",command=lambda:forward(img_num+1))
    button_back = Button(root,text="<<",command=lambda:back(img_num-1))

    if img_num == 3 : 
        button_next = Button(root,text=">>",state=DISABLED)
    myLabel.grid(row=0,column=0,columnspan=3)
    button_back.grid(row=1,column=0)
    button_next.grid(row=1,column=2)

def back(img_num) : 
    global myLabel
    global button_next
    global button_back 

    myLabel.grid_forget()
    myLabel = Label(image=imgList[img_num-1])
    button_next = Button(root,text=">>",command=lambda:forward(img_num+1))
    button_back = Button(root,text="<<",command=lambda:back(img_num-1))

    if img_num == 1 : 
        button_next = Button(root,text=">>",state=DISABLED)
    myLabel.grid(row=0,column=0,columnspan=3)
    button_back.grid(row=1,column=0)
    button_next.grid(row=1,column=2)

button_back = Button(root,text='<<')
button_exit = Button(root,text='EXIT',command=root.quit)
button_next = Button(root,text='>>',command=lambda:forward(2))

button_back.grid(row=1,column=0)
button_exit.grid(row=1,column=1)
button_next.grid(row=1,column=2)


root.mainloop()
