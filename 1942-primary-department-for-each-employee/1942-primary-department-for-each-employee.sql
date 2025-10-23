select e.employee_id , e.department_id
from Employee e
where primary_flag = 'Y'
group by employee_id
UNION
select employee_id , department_id
from employee
group by employee_id
having count(employee_id) = 1


