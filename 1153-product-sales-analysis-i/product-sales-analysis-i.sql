# Write your MySQL query statement below
select s.product_name,e.year,e.price from Sales as e
left join Product as s #important can also use join only
on e.product_id=s.product_id

