SELECT r.contest_id ,
 ROUND(COUNT( r.contest_id)/(SELECT COUNT(user_id) from Users) *100,2) as percentage
 FROM Register r JOIN Users u ON r.user_id=u.user_id
  GROUP BY contest_id 
  ORDER BY percentage 
  DESC, contest_id ASC;
