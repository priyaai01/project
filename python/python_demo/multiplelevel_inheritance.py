class collegeIV():
    def __init__(self):
        print("school vacation trip")
    def welcome(self):
        print("welcome students")
    def count(self):
        print("200 student come on tour")

        
class department(collegeIV):
    def department(self):
        super(). __init__()
        super().welcome()
        super().count()
        print("science student going  tour")
    
    
        
class place(department):
    def __init__(self):
        
        super().department()
        print("the tour for kerala")
    def cost(self):
        print("3000 per person")
    def days(self):
        print("Four days tour")
    


p=place()
p.cost()
p.days()



       
    


    
