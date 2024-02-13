class dogyworld():
    def __init__(self):
        print("welcome to dogys world")
    def welcome(self):
         print("dog house")

class fatherandmotherdog():
    def __init__(self):
        print("****************************")
       
    def food(self):
        print("father dog gives bone and chicken to boy")
    def barking(self):
        print("teach us pupyy,how to bark")
    def love(self):
        print("the mother dog protected her son")

class childdog(dogyworld,fatherandmotherdog):
    def __init__(self):
        super().welcome()
        super().__init__()
        super().food()
        super().barking()
        super().love()


c=childdog()


