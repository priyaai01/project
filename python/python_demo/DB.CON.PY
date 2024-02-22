from tkinter import*
import mysql.connector
op=Tk()

op.title("SCHOOL DETAILS")
op.geometry("500x500")
#op.config(bg="sky blue")
op.state("zoomed")

def MyDBConnection():
    con=mysql.connector.connect(
    host="192.168.1.240",
    user="AIBATCH01",
    password="AI@123",
    database="ai_priya"
    )

    return con




def insert():
    a=student_name.get()
    b=tamil.get()
    c=english.get()
    d=maths.get()
    e=science.get()
    f=social.get()

    e_con=MyDBConnection()
    result=e_con.cursor()

    statement="insert into std_mark(student_name,tamil,english,maths,science,social) values(%s,%s,%s,%s,%s,%s);"
    valuespass=(a,b,c,d,e,f)
    result.execute(statement,valuespass)

    e_con.commit()

    print(result.rowcount,"row created")


def update():
    
    a=student_name.get()
    b=tamil.get()
    c=english.get()
    d=maths.get()
    e=science.get()
    f=social.get()

    
    e_con=MyDBConnection()
    result=e_con.cursor()

    statement="update std_mark set student_name =  (%s) where sno= (%s);"
    valuespass=(a,b)
    result.execute(statement,valuespass)
    e_con.commit()
    print(result.rowcount,"update counted")


        
def delete():
    a=student_name.get()
    b=tamil.get()
    c=english.get()
    d=maths.get()
    e=science.get()
    f=social.get()

    e_con=MyDBConnection()
    result=e_con.cursor()

    stament="delete from std_mark where student_name = (%s);"
    valuespass=(a,)
    result.execute(stament,valuespass)
    e_con.commit()
    print(result.rowcount,"deleted colums")

    
def alter():
    pass
def submit():
    pass

Labeltitle=Label(op,text="STUDENT MARK")
Labeltitle.grid(row=0,column=20,padx=200,pady=30)

name1=Label(op,text="STUDENT NAME")
name1.grid(row=1,column=20)

student_name=Entry(op,width=60)
student_name.grid(row=1,column=25)

tamil2=Label(op,text="TAMIL")
tamil2.grid(row=2,column=20)

tamil=Entry(op,width=60)
tamil.grid(row=2,column=25)

english3=Label(op,text="ENGLISH")
english3.grid(row=3,column=20)

english=Entry(op,width=60)
english.grid(row=3,column=25)

maths4=Label(op,text="MATHS")
maths4.grid(row=4,column=20)

maths=Entry(op,width=60)
maths.grid(row=4,column=25)

science5=Label(op,text="SCIENCE")
science5.grid(row=5,column=20)

science=Entry(op,width=60)
science.grid(row=5,column=25)

social6=Label(op,text="SOCIAL")
social6.grid(row=6,column=20)

social=Entry(op,width=60)
social.grid(row=6,column=25)

clickbutton=Button(op,text="INSERT" ,command=insert)
clickbutton.grid(row=4,column=1)


clickbutton=Button(op,text="UPDATE" ,command=update)
clickbutton.grid(row=4,column=3)


clickbutton=Button(op,text="DELETE" ,command=delete)
clickbutton.grid(row=4,column=5)


clickbutton=Button(op,text="RESET" ,command=reset)
clickbutton.grid(row=4,column=7)


clickbutton=Button(op,text="SUBMIT" ,command=submit)
clickbutton.grid(row=4,column=9)

op.mainloop()

