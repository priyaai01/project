show databases;
create database lakshmipriya;
use lakshmipriya;
create table school_details_table(reg_no int not null primary key,name varchar(56) not null,section varchar(13) not null,ph_no long,location varchar(244));
show tables;
select*from school_details_table;
insert into school_details_table(reg_no,name,section,ph_no,location)values(1,'lakshmipriya','A',1234567891,'trichy'),(2,'jaya lakshmi','b',9876543210,'sit'),(3,'lavanya','c',0912785643,'trichy'),
(4,'jeevitha','D',1345678903,'woriayur');
select*from school_details_table where name ='jeevitha';
select*from school_details_table where location='woriayur';
use ai_priya;
drop database ai_priya;



                                   

 

