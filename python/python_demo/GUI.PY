from tkinter import *

win = Tk()

win.title("operaters")
win.geometry("500x500+500+100")
win.config(bg="skyblue")
win.state("zoomed")

def addition():
    a= int(box1.get())
    b= int(box2.get())
    c=a+b
    result.config(text=c)

def subtraction():
    a= int(box1.get())
    b= int(box2.get())
    c=a-b
    result.config(text=c)


def multiplication():
    a= int(box1.get())
    b= int(box2.get())
    c=a*b
    result.config(text=c)

def divition():
    a= int(box1.get())
    b= int(box2.get())
    c=a/b
    result.config(text=c)

def modulus():
    a= int(box1.get())
    b= int(box2.get())
    c=a%b
    result.config(text=c)

    

operatertitle=Label(win,text="arithmetic operators")
operatertitle.grid(row=0,column=20,padx=200,pady=30)

mentiona=Label(win,text="Enter the value a:")
mentiona.grid(row=1,column=20)

box1=Entry(win,width=60)
box1.grid(row=1,column=25)

mentionb=Label(win,text="Enter the value b:")
mentionb.grid(row=2,column=20)

box2=Entry(win,width=60)
box2.grid(row=2,column=25)

result=Label(win,text="   ")
result.grid(row=5,column=30,padx=40,pady=40)

clickbutton1=Button(win,text="ADDITION", command=addition)
clickbutton1.grid(row=4,column=1)

clickbutton2=Button(win,text="SUBTRACTION", command=subtraction)
clickbutton2.grid(row=5,column=1)

clickbutton3=Button(win,text="MULTIPLICATION", command=multiplication)
clickbutton3.grid(row=6,column=1)

clickbutton4=Button(win,text="DIVITION",command=divition)
clickbutton4.grid(row=7,column=1)

clickbutton5=Button(win,text="MODULUS",command=modulus)
clickbutton5.grid(row=8,column=1)



win.mainloop()