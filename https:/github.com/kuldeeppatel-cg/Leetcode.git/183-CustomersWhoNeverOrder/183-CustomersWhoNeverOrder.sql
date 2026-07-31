-- Last updated: 31/07/2026, 13:28:53
# Write your MySQL query statement below
select C.name  As Customers from  Customers C
left join Orders O
on C.id = O.customerId  
where CustomerId is null