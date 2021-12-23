from tkinter import *
from PIL import Image,ImageTk

root = Tk()
root.title('Learn to be pro coders')
root.iconbitmap('d:/FADHLY/PROGRAMMING/MyFuckingCode/Python/F BARU.ico')

my_img1 = ImageTk.PhotoImage(Image.open('D:/FADHLY/pp.jpg'))
my_img2= ImageTk.PhotoImage(Image.open('d:/FADHLY/PAS FOTO/10.jpg'))
my_img3 = ImageTk.PhotoImage(Image.open('d:/FADHLY/PAS FOTO/FOTO MERAH.jpg'))

image_list = [my_img1,my_img2,my_img3]

my_label = Label(image=my_img1)
my_label.grid(row=0,column=0,columnspan=3)

def foward(num):
    global my_label
    global button_foward
    global button_back

    my_label.grid_forget()
    my_label = Label(image=image_list[num-1])
    button_foward = Button(root,text=">>",command=lambda:foward(num+1))
    button_back = Button(root,text="<<",command=lambda:back(num-1))

    my_label.grid(row=0,column=0,columnspan=3)
    button_back.grid(row=1,column=0)
    button_foward.grid(row=1,column=2)

def back():
    global my_label
    global button_foward
    global button_back

button_back = Button(root,text='<<',command=lambda:back())
button_quit = Button(root,text='Exit',command=root.quit)
button_foward = Button(root,text=">>",command=lambda:foward(2))

button_back.grid(row=1,column=0)
button_quit.grid(row=1,column=1)
button_foward.grid(row=1,column=2)

root.mainloop()
