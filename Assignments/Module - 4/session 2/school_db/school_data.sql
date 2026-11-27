use school_db;

show tables;

insert into students(roll_no,name,class,city,email) values
(1,'Aarav Patel', '9A', 'Ahmedabad','aarav.patel@gmail.com'),
(2,'Riya Shah', '9A', 'Rajkot','riya.shah@gmail.com'),
(3,'Vivaan Mehta', '9B', 'Mumbai','vivaan.mehta@gmail.com'),
(4,'Anaya Joshi', '9B', 'Pune','anaya.joshi@gmail.com'),
(5,'Krish Desai', '9A', 'Surat','krish.desai@gmail.com'),
(6,'Diya Trivedi', '9B', 'Vadodara','diya.trivedi@gmail.com'),
(7,'Arjun Singh', '9A', 'Jaipur','arjun.singh@gmail.com'),
(8,'Myra Sharma', '9B', 'Delhi','myra.sharma@gmail.com');

select *from students;

insert into subjects(sub_name,max_marks) values
('Maths',88),
('Science',95),
('English',78),
('Hindi',68),
('Social Science',55);

select *from subjects;

insert into marks(roll_no,subject_id,mark_obtained) values
(1,1,65),(1,2,78),(1,3,55),(1,4,79),
(2,1,95),(2,2,90),(2,3,80),(2,4,50),
(3,1,45),(3,2,42),(3,3,89),(3,4,96),
(4,1,46),(4,2,63),(4,3,95),(4,4,78),
(5,1,66),(5,2,42),(5,3,51),(5,4,64);

select *from marks;

UPDATE students SET class = '10A' WHERE class='9A';

select *from students where class='10A';

update students set city='Vapi' where city='Delhi';

update marks set mark_obtained=mark_obtained+5 where mark_id=1;

select *from marks where mark_id=1;

SELECT * FROM marks LIMIT 5;

INSERT INTO marks (roll_no, subject_id, mark_obtained) VALUES (1, 1, 85);

DELETE FROM marks WHERE roll_no = 1 AND subject_id = 1 AND mark_obtained = 85 LIMIT 1;

update marks set mark_obtained=null where roll_no=2;

delete from marks where roll_no=2;