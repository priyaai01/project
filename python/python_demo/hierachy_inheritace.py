class githup():
    def __init__(self):
        print("installed githup")
    def login(self):
        print("login your account process")
    def account(self):
        print("Enter your accounts")
    def email(self):
        print("Enter your email_id")
    def password(self):
        print("Enter your eight charecter password")
    def ph(self):
        print("Enter your phone number")

class welcome(githup):
    def __init__(self):
        super().__init__()
        super().login()
        super().account()
        super().email()
        super().password()
        super().ph()
        print("welcome githup")

class repositaryfileadded(githup):
    def __init__(self):
        super().__init__()
        super().login()
        super().account()
        super().email()
        super().password()
        super().ph()
        print("your programs")
    def rtry(self):
        print("create new repositary")
    def status(self):
        print("git status")
    def clone(self):
        print("git clone")
    def add(self):
        print("git add .")
    def commit(self):
        print("git commit -m added files")
    def push(self):
        print("git push")

rtry=repositaryfileadded()
rtry.rtry()
rtry.status()
rtry.clone()
rtry.add()
rtry.commit()
rtry.push()
              
    