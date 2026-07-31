-- Last updated: 31/07/2026, 13:28:54
# Write your MySQL query statement below
select email from Person
group by email
having (count(email) > 1);