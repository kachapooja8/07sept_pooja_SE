use school_db;
select *from marks;
select *from students;
select *from subjects;

alter table marks add constraint fk_marks_students foreign key (roll_no) references students (roll_no);

alter table marks add constraint fk_marks_subjects foreign key (subject_id) references subjects (sub_id);

INSERT INTO marks (roll_no, subject_id, mark_obtained) VALUES (99, 1, 80);

--------------------------------------------------

select s.name, sub.sub_name, m.mark_obtained, sub.max_marks 
from students s join marks m on s.roll_no = m.roll_no 
join subjects sub on m.subject_id = sub.sub_id where s.roll_no=1 order by sub.sub_name;

-------------------------------------------------

insert into students(name,class,city,email) values 
('Rahul','A10','Vapi','rahul.shah@gmail.com');

select s.roll_no, s.name from students s left join marks m on s.roll_no=m.roll_no where m.roll_no is null;

---------------------------------------------------

SELECT
    sub.sub_id,
    sub.sub_name,
    COUNT(m.mark_id) AS marks_count
FROM marks m
RIGHT JOIN subjects sub
    ON m.subject_id = sub.sub_id
GROUP BY sub.sub_id, sub.sub_name;