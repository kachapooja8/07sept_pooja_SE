use school_db;

show tables;

insert into students(name,class,city) values
('Aarav Patel', '9A', 'Ahmedabad'),
('Riya Shah', '9A', 'Rajkot'),
('Vivaan Mehta', '9B', 'Mumbai'),
('Anaya Joshi', '9B', 'Pune'),
('Krish Desai', '9A', 'Surat'),
('Diya Trivedi', '9B', 'Vadodara'),
('Arjun Singh', '9A', 'Jaipur'),
('Myra Sharma', '9B', 'Delhi');

select *from students;