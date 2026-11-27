create database school_db;

use school_db;

create table students (
roll_no integer primary key,
name text,
class text,
city text
);

create table subjects(
sub_id integer primary key auto_increment,
sub_name text,
max_marks integer
);

create table marks(
mark_id integer primary key auto_increment,
roll_no integer,
subject_id integer,
mark_obtained integer
);

describe students;

alter table students add column email varchar(30);

alter table students modify column city varchar(50);

create table temp_notes(
temp_id integer primary key auto_increment,
notes text
);

drop table temp_notes;

show tables;
