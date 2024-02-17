from tkinter import*

new=Tk()

new.title("concatenation")
new.geometry("500x500+500+100")
new.config(bg="sky blue")
new.state("zoomed")

def concatenation():
    a=str(box1.get())
    b=str(box2.get())
    concate=a+" "+b
    result.config(text=concate)
    

Labeltitle=Label(new,text="concatenation program",font=("Decorative fonts",20))
Labeltitle.grid(row=0,column=20,padx=200,pady=30)

namemessage1=Label(new,text="Enter the frist name:",font=("sans serif",18))
namemessage1.grid(row=1,column=20)

box1=Entry(new,width=60)
box1.grid(row=1,column=25)

namemessage2=Label(new,text="Enter the second name:",font=("sans serif",18))
namemessage2.grid(row=2,column=20)

box2=Entry(new,width=60)
box2.grid(row=2,column=25)

result=Label(new,text=" ")
result.grid(row=5,column=30,padx=40,pady=40)

clickbutton=Button(new,text="addednames",command=concatenation)
clickbutton.grid(row=4,column=1)

new.mainloop()


