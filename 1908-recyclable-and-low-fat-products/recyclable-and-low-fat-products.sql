# Write your MySQL query statement below
SELECT dev.product_id 
FROM Products dev
WHERE dev.low_fats = 'Y' AND dev.recyclable = 'Y';