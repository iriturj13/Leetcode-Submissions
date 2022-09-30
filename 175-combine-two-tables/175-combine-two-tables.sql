# Write your MySQL query statement below

SELECT firstName ,lastName,city,State FROM Person left join Address 
ON Person.personId = Address.personId