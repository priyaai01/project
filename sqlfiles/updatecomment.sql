use ai_priya;
create table choclate_factory(SNO int not null primary key auto_increment,choclate_name varchar(50) not null,quantity int not 
null ,feedback varchar(50) not null);
delimiter &&
create procedure choclate_factory( in choclate_nameparameter varchar(50),quantityparameter int,feedbackparameter varchar(50))
begin
insert into choclate_factory(choclate_name,quantity,feedback)values(choclate_nameparameter,quantityparameter,feedbackparameter);
end &&
delimiter ;
call choclate_factory('kitkat',4,'tastey');
select*from choclate_factory;
drop procedure if exists choclate_factory;
delete from choclate_factory where sno=1;

delimiter ##
drop procedure if exists firstupdate##
create procedure firstupdate(in tablename varchar(50),
in columname varchar(50),
in valuechange varchar(50),
in idname varchar(50),
in idparam int)
begin
set @updatestmt=concat('update ',tablename,' set ',columname, '=\'',valuechange, '\'',' where ',idname, 
'=',idparam);
prepare cmnt from @updatestmt;
execute cmnt;
end ##
delimiter ;
call firstupdate('choclate_factory','choclate_name','choco','sno',5);

delimiter $$
drop procedure if exists firstdelete;
create procedure firstdelete(in tablename varchar(50),
in idname varchar(50),
in idparam int)
begin 
set @deletestmt=concat('delete ' ,' from ' ,tablename,' where ' ,idname,
'=',idparam);
prepare stmnt from @deletestmt;
execute stmnt;
end $$
delimiter ;
call firstdelete('choclate_factory','sno',5);

delimiter %%
drop procedure if exists firstadd_varchar;%%
create procedure firstadd_varchar
(in tablename varchar(50),
in columnname varchar(50)
)
begin
set @addstmt=concat('alter table ',tablename,' add column ',columnname,' varchar\ (50\)');
prepare stct from @addstmt;
execute stct;
end %%
delimiter ;
call firstadd_varchar('choclate_factory','location'); 

delimiter &&
drop procedure if exists firstchange;&&
create procedure firstchange
( in tablename varchar(50),
in oldname  varchar(50),
in newname varchar(50)
)
begin
set @changestmt=concat('alter table ',tablename,' rename column ',oldname,' to ',newname);
prepare stct from @changestmt;
execute stct;
end &&
delimiter ;
call firstchange('choclate_factory','location','district');

delimiter $$;
drop procedure if exists valueinsert;
create procedure valueinsert
(in tablename varchar(50),
in  district varchar(50),
in sno int
)
begin
set @valueinsert=concat('update ',tablename,' set ',district,'where ',sno);
prepare stct @valueinsert;
execute stct;
end $$
delimiter ;
call valueinsert('choclate_factory','trichy',2);











 