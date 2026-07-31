-- Last updated: 31/07/2026, 13:28:55
# Write your MySQL query statement below
select P.firstName , P.lastName , A.city , A.state from Person P
left join Address A
on P.personId = A.personId