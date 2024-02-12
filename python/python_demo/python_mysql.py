import mysql.connector
con=mysql.connector.connect(

    host="192.168.1.240",
    user="AIBATCH",
    password="AI@123",
    database="a"
)

print(con)
result=con.cursor
result.execute("show tables")
result_show=result.fetch()
for x in result_show:
    print(x)