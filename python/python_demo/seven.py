class cartoon():
    def __init__(self):
        print("The cartoon charecters")
    def welcome(self):
        print("welcome to cartoon charecters")
            
class doremongadgets():
    def __init__(self):
         print("twenty second century gadgets")
    def anywheredoor(self):
        print("you can go anywhere")
    def biglight(self):
        print("its can able to orginal size")
    def bamboocopter(self):
        print("its help to fly")
    def aircanon(self):
        print("its gun")

class nobita(doremongadgets):
    def __init__(self):
        super(). __init__()
        super().anywheredoor()
        super().biglight()
        super().bamboocopter()
        super().aircanon()

class honikawa():
    def __init__(self):
        print("he is nobita friend")
    def toys(self):
        print("more than toys")

class gian(honikawa):
    def __init__(self):
        print("He is rugged boy")
    
        super(). __init__()
        super().toys()
class shizuka():
    def __init__(self):
        print("she is pretty and inteligent girl")
    def friend(self):
        print("she is nobita girl friend")


c=cartoon()
c.welcome()
n=nobita()
g=gian()


s=shizuka()
s.friend()



