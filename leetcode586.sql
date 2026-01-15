SELECT customer_number
FROM (
    SELECT customer_number
    FROM Orders
    GROUP BY customer_number
    ORDER BY COUNT(order_number) DESC
)
WHERE ROWNUM = 1;
