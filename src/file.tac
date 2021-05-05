.table
.code
main:
mov $1, 0
mov $2, 0
mov $2, 1
mov $1, $2
div $3, 3, 2
mul $3, 2, $3
add $3, 10, $3
mov $1, $3
println $1
add_func:
mov $3, 0
