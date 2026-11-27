create database canteen_db;
use canteen_db;

create table menu_items(
item_id int primary key auto_increment,
item_name text,
price int,
stock int
);

create table orders(
order_id int primary key auto_increment,
quantity int,
order_date date,
item_id int, foreign key (item_id) references menu_items(item_id) 
);

insert into menu_items(item_name,price,stock)values
('Samosa', 10, 100),
('Tea', 15, 80),
('Sandwich', 40, 50),
('Cold Drink', 30, 70),
('Pizza', 80, 20),
('Burger', 60, 40);

select *from menu_items;



