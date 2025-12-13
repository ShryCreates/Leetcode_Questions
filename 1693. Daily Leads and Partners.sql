SELECT date_id , make_name , COUNT(distinct lead_id ) unique_leads ,
COUNT( distinct partner_id ) unique_partners
 FROM DailySales
 GROUP BY date_id,make_name;
