# Write your MySQL query statement below
SELECT 
    a.Name as 'Employee'
from
    Employee AS a, 
    Employee AS b

where
    b.id=a.managerId and a.salary>b.salary
