select e1.name
from Employee e1
inner join Employee e2
on e1.id = e2.managerid
group by e1.id
having count(e2.managerid) >=5
