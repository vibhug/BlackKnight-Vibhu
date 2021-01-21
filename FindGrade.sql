SELECT ID, Name, Marks, 
CASE WHEN (Marks) > 90
    THEN 'A+'
    WHEN (Marks) <= 90 AND (Marks) > 70
    THEN 'A'
    WHEN (Marks) <= 70 AND (Marks) > 50
    THEN 'B'
    WHEN (Marks) <= 50 AND (Marks) >= 40
    THEN 'C'
    ELSE 'FAIL'
    END AS GRADE
FROM STUDENTS
    
   


