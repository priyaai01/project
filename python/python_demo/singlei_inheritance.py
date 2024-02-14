class plant():
    def __init__(self):
        print("purely sands")
    def seeds(self):
        print("some seeds")
    def ditch(self):
        print("put the seeds into the hole")
    def water(self):
        print("pouring water")

class flower(plant):
    def __init__(self):
        super (). __init__()
        super ().seeds()
        super ().ditch()
        super ().water()
        print("The beautiful flowers are bloosoms now")
        

f=flower()