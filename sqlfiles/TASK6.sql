create database ai_priya;
use ai_priya;
create table new_table(SNO int not null primary key auto_increment,name varchar(50) not null,qualification varchar(50) not null,
age int not null);
delimiter &&
create procedure new_table ( in nameparameter varchar(50),in qualificationparameter varchar(50),
in ageparameter int)
begin
insert into new_table(name,qualification,age)values(nameparameter,qualificationparameter,ageparameter);
end &&
delimiter ;
call new_table('lakshmipriya','physics',21);
select*from new_table;

