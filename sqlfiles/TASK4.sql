create database swiggy;
show databases;
use swiggy;
create table online_shopping_reg(user_id int not null primary key,frist_name varchar(200),middle_name varchar(50),
last_name varchar(50)not null, dob date, phone_no long,user_name varchar(10) not null unique,password varchar(18)not null);
create table online_shopping_login(login_id int not null primary key,
 user_name varchar(10) not null unique, password varchar(18) not null,new_password varchar(18),user_id int not null,
 foreign key(user_id)references online_shopping_reg (user_id));
 create table online_shopping_order(order_id int not null primary key,product_name varchar(100)not null,
 product_price double not null,product_quantity int not null,delivery_address varchar(250) not null,user_id int not null, login_id int not null,
 foreign key(user_id) references online_shopping_reg(user_id),foreign key(login_id) references online_shopping_login(login_id));
 select*from online_shopping_reg;
 insert into online_shopping_reg (user_id,frist_name,middle_name,last_name,dob,phone_no,user_name,password)values(1,'lakshmi','priya','senthilkumar',
 '2002-5-5', '9876543210','priya123','password1234'),(2,'A','B','C','2006-5-5','9876543210','ABC1234567','password1234'),
 (3,'D','E','F','2002-5-5','9876543210','ABC12367','password1234'),(4,'G','H','I','2004-5-5','9876543210','ABC12345','password1234'),
 (5,'J','K','L','2003-5-5','9876543210','ABC34567','password1234'),(6,'M','N','O','2006-5-5','9876543210','A1234567','password1234');
 select*from online_shopping_login;
 insert into online_shopping_login values(11,'priya123','password1234','password87',1),(12,'ABC12567','password1234','password09',2),
 (13,'ABC1234567','password1234','password98',3),(14,'ABC12345','password1234','password7654',4),
 (15,'ABC34567','password1234','password1265',5),(16,'A1234567','password1234','password6789',6);
 select*from online_shopping_order;
 insert into online_shopping_order values(100,'olive oil',95,2,'trichy',1,11),(200,'almond oil',105,4,'wouraiyur',2,12),
 (300,'milk',45,6,'pudhukottai',3,13),(400,'chocalate',150,8,'chennai',4,14),
 (500,'milkshake',75,10,'kerala',5,15),(600,'pizza',210,12,'madhurai',6,16);
 use meesho;
 drop database meesho;
 select*from online_shopping_order where product_name='olive oil';
 select user_id,new_password from online_shopping_login where login_id =15;
 select*from online_shopping_reg where middle_name='priya';
 select*from online_shopping_reg where last_name like 's%';
 
 
 


 
