echo How many files that have not been accessed for ___ days?
read days
find /home/jcho18 -atime +$days -exec gzip {} \;

