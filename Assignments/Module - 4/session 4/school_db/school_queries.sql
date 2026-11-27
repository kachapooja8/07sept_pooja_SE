use school_db;

select *from students;

SELECT roll_no, name AS student_name, class
FROM students
WHERE class = '10A'
ORDER BY name ASC;

SELECT roll_no, subject_id, mark_obtained AS marks
FROM marks
WHERE mark_obtained >= 80
ORDER BY mark_obtained DESC;

SELECT roll_no, subject_id, mark_obtained AS highest_marks
FROM marks
ORDER BY mark_obtained DESC
LIMIT 3;

select *from marks;

------------------------------------------------------

select sum(mark_obtained) as total_marks from marks where roll_no=1;

select round(avg(mark_obtained),2) as avg_marks from marks where subject_id=1;

SELECT count(*) AS total_students from students where class='10A';

------------------------------------------------------

select subject_id, avg(mark_obtained) from marks group by subject_id;

select roll_no, sum(mark_obtained) as total_marks from marks group by roll_no order by total_marks desc;

select subject_id, count(*) as marks_count from marks group by subject_id;

------------------------------------------------------

select roll_no, sum(mark_obtained) as total from marks 
group by roll_no order by total desc limit 1;
