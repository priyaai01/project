create database company;
show databases;
use company;
create table company_details(id_number int not null primary key,employe_name varchar(200),age int not null,location varchar(100),
monthly_salary int not null);
show tables;
insert into company_details(id_number,employe_name,age,location,monthly_salary)values(001,'jayalakshmi',23,'trichy',10000),(002,'lachu',20,'trichy',12000),(003,'gracy',21,'trichy',1000),(004,'jeevi',
20,'trichy',14000),(005,'karishma',22,'chennai',10000),(006,'kalai',18,'trichy',14000),(007,'swetha',24,'pudhukottai',10000),(008,'rithika',
18,'wouraiyur',14000); 
select*from company_details;


