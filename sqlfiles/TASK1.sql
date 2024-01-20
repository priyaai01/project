create database college;
show databases;
use college;
create table student_list(reg_no int not null primary key,name varchar (100),department varchar(45),age int not null,location varchar(300));
show tables;

insert into student_list (reg_no,name,department,age,location)values(1,'lachu','b.sc',20,'trichy'),(2,'gracy','b.com',21,'trichy'),(3,'jeevi',
'cs',20,'trichy'),(4,'karishma','nursing',22,'chennai'),(5,'kalai','computer science',18,'trichy'),(6,'swetha','diplomo',24,'pudhukottai'),(7,'rithika','b.sc',
18,'wouraiyur'); 
select*from student_list; 
truncate table student_list;
alter table student_list modify column reg_no int not null primary key;
insert into student_list values(8,'lavanya','b.sc',22,'malaikottai');
insert into student_list (reg_no,name,department,age,location)values(1,'lachu','b.sc',20,'trichy'),(2,'gracy','b.com',21,'trichy'),(3,'jeevi',
'cs',20,'trichy'),(4,'karishma','nursing',22,'chennai'),(5,'kalai','computer science',18,'trichy'),(6,'swetha','diplomo',24,'pudhukottai'),(7,'rithika','b.sc',
18,'wouraiyur');  
select*from student_list  where age <20;
select name,age from  student_list where age=20 AND location='trichy';
select name,location from student_list where department<>'b.sc';








