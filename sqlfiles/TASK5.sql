create database Amazon;
show databases;
use Amazon;
create table online_platform_reg(user_id int not null  primary key,first_name varchar(100)not null,middle_name varchar(150),
last_name varchar(200)not null,Dob int not null);
create table online_platform_login(login_id int not null primary key,user_id int not null,old_password varchar(8)not null,
new_password varchar(10)not null,ph_no long not null,foreign key (user_id)references online_platform_reg(user_id));
select*from online_platform_login;
describe online_platform_login;
alter table online_platform_login Add primary key (login_id);
create table online_platform_order(order_id int not null primary key,user_id int not null,login_id int not null,
address varchar(200)not null,product_name varchar(100),
product_quantity int not null,product_price int not null,foreign key(user_id) references online_platform_reg(user_id),
foreign key(login_id) references online_platform_login(login_id));
select*from online_platform_order;
describe online_platform_order;
select*from online_platform_reg;
insert into online_platform_reg values(001,'S','','lakshmipriya'),(002,'R','','jeevitha'),
(003,'S','','kalai'),(004,'R','','rithika'),(005,'M','','maha');
alter table online_platform_reg drop column Dob;
alter table online_platform_reg add column Dob date;
update online_platform_reg set Dob=
case user_id
when 001 then '2002-5-5'
when 002 then '2005-4-3'
when 003 then '2008-1-11'
when 004 then '2010-11-22'
when 005 then '2018-4-27'
end;
insert into online_platform_login values(100,001,'priya@12','lachu@55','9876543210'),(200,002,'vitha@09','jeevi@87','1234567890'),
(300,003,'selvi@76','kalai@56','1357802467'),(400,004,'krithi@7','rithi@45','7890123456'),(500,005,'thanu@90','maha@675');


 
	





