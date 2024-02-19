from tkinter import*

scl=Tk()

scl.title=("SCHOOL")
scl.geometry=("500x500")
scl.state("zoomed")

def login():
    name=(box1.get())
    year=(box2.get())
    group=(box3.get())
    Tenthmark=str(box4.get())

    if(Tenthmark>="450"):
        print("YOUR ELIGIBLE IN FIRST GROUP")
    elif(Tenthmark>"380") and (Tenthmark<"400"):
        print("YOUR ELIGIBLE IN SECOND GROUP")
    elif(Tenthmark>="350") and (Tenthmark<"370"):
        print("YOUR ELIGIBLE IN THIRD GROUP")  
    elif(Tenthmark<="300") or (Tenthmark<"350"):
        print("LAST GROUP")  
    else:
        print("CHOOSED OTHER GROUP")        

Labeltitle=Label(scl,text="SCHOOL REGISTRATION",fg="blue")
Labeltitle.grid(row=0,column=20,padx=200,pady=30)

name=Label(scl,text="STUDENT NAME")
name.grid(row=1,column=20)

box1=Entry(scl,width=60)
box1.grid(row=1,column=25)

year=Label(scl,text="STUDENT YEAR")
year.grid(row=2,column=20)

box2=Entry(scl,width=60)
box2.grid(row=2,column=25)

group=Label(scl,text="WHERE GROUP")
group.grid(row=3,column=20)

box3=Entry(scl,width=60)
box3.grid(row=3,column=25)

Tenthmark=Label(scl,text="STUDENT TENTH MARK")
Tenthmark.grid(row=4,column=20)

box4=Entry(scl,width=60)
box4.grid(row=4,column=25)

clickbutton=Button(scl,text="login" , command=login, fg="red")
clickbutton.grid(row=4,column=1)

scl.mainloop()