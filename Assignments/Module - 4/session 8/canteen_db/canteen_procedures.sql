use canteen_db;

update menu_items set stock=0 where item_id=1;
update menu_items set stock=10 where item_id=2;
update menu_items set stock=50 where item_id=3; 


delimiter $$
create procedure show_item_status(in p_item_id int)
begin
	declare v_stock int;
    select stock into v_stock from menu_items where item_id = p_item_id;
    
    if v_stock=0 then
		select 'out of stock' as status;
        
	elseif v_stock < 20 then
		select 'low stock' as status;
        
	else 
		select 'in stock' as status;
	
    end if;
end $$
delimiter ;

call show_item_status(1);
call show_item_status(2);
call show_item_status(3);

-------------------------------------------

delimiter $$
create procedure restock_all(in p_amount int)
begin
	declare v_item_id int default 1;
    
    my_loop:loop
		
        if v_item_id > 6 then
			leave my_loop;
		end if;
        
        update menu_items set stock = stock+p_amount where item_id =
        v_item_id;
        set v_item_id = v_item_id +1;
        
	end loop my_loop;
    
end $$
delimiter ;

call restock_all(25);
select *from menu_items;

--------------------------------------

USE canteen_db;

DROP PROCEDURE IF EXISTS inventory_value;

DELIMITER $$

CREATE PROCEDURE inventory_value(OUT p_total DECIMAL(10,2))
BEGIN
    DECLARE v_done INT DEFAULT 0;
    DECLARE v_price DECIMAL(10,2);
    DECLARE v_stock INT;

    DECLARE cur_items CURSOR FOR
        SELECT price, stock FROM menu_items;

    DECLARE CONTINUE HANDLER FOR NOT FOUND SET v_done = 1;

    SET p_total = 0;

    OPEN cur_items;

    read_loop: LOOP

        FETCH cur_items INTO v_price, v_stock;

        IF v_done = 1 THEN
            LEAVE read_loop;
        END IF;

        SET p_total = p_total + (v_price * v_stock);

    END LOOP;

    CLOSE cur_items;
END $$

DELIMITER ;

CALL inventory_value(@total);

SELECT @total AS inventory_total;

SELECT SUM(price * stock) AS sum_total
FROM menu_items;