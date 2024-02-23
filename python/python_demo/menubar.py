import tkinter as tk
obj=tk.Tk()

obj.title("MENU BAR CREATE")
obj.geometry("500x500")
obj.state("zoomed")

def Exit():
    obj.destroy

def New():
    nw=tk.Tk()
    nw.title("New File")
    nw.geometry("500x500")
    nw.state("zoomed")
    nw.mainloop()

menubar=tk.Menu(obj)

filemenu=tk.Menu(menubar)

menubar.add_cascade(label="File",underline=0,menu=filemenu)
filemenu.add_command(label="New",underline=0,accelerator="Ctrl+N",command=New)
filemenu.add_command(label="New window",underline=0,accelerator="ctrl+shift+N")
filemenu.add_command(label="Open",underline=0,accelerator="ctrl+o")
filemenu.add_command(label="Save",underline=0,accelerator="ctrl+s")
filemenu.add_command(label="Save as",underline=0,accelerator="ctrl+shift+s")
filemenu.add_separator()
filemenu.add_command(label="Page setup",underline=0)
filemenu.add_command(label="Print",underline=0,accelerator="ctrl+P")
filemenu.add_separator()
filemenu.add_command(label="Exit",underline=0,command=Exit)

editmenu=tk.Menu(menubar)

menubar.add_cascade(label="Edit",underline=1,menu=editmenu)
editmenu.add_command(label="Undo",underline=1,accelerator="ctrl+z")
editmenu.add_separator()
editmenu.add_command(label="Cut",underline=1,accelerator="ctrl+x")
editmenu.add_command(label="Copy",underline=1,accelerator="ctrl+c")
editmenu.add_command(label="Paste",underline=1,accelerator="ctrl+p")
editmenu.add_command(label="Delete",underline=1,accelerator="del")

formatmenu=tk.Menu(menubar)

menubar.add_cascade(label="Format",underline=2,menu=formatmenu)
formatmenu.add_command(label="Word Wrap")
formatmenu.add_command(label="Font...")

viewmenu=tk.Menu(menubar)

menubar.add_cascade(label="View",underline=3,menu=viewmenu)
viewmenu.add_command(label="Zoom")
viewmenu.add_command(label="Status bar")

helpmenu=tk.Menu(menubar)

menubar.add_cascade(label="Help",underline=4,menu=helpmenu)
helpmenu.add_command(label="View help",underline=4)
helpmenu.add_command(label="Send feedback",underline=4)
helpmenu.add_separator()
helpmenu.add_command(label="About notbad",underline=4)



obj.config(menu=menubar)

obj.mainloop()



