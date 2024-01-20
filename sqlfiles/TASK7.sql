use ai_priya;
create table school_details(user_id int not null primary key auto_increment,name varchar (50) not null, section varchar(50) not null,
department varchar(50) ,dob date);

delimiter &&
drop procedure if exists school_details;&&
create procedure school_details(in nameparameter varchar(50),in sectionparameter varchar(50),
in departmentparameter varchar(50),in dobparameter date)
begin
insert into school_details(name,section,department,dob)values(nameparameter,sectionparameter,departmentparameter,dobparameter);
end &&
delimiter ;

call school_details('kalaiselvi','B','computer science','2008-1-11');
select*from school_details;
update school_details set name='rithika' where user_id=4;
update school_details set department='B.A english' where user_id=4;
alter table school_details rename column user_id  to  sno;
alter table school_details add column location varchar(50);
update school_details set location='trichy' where sno=1;
update school_details set location='wouriyur' where sno=2;
update school_details set location='wouriyur' where sno=3;
update school_details set location='trichy' where sno=4;




