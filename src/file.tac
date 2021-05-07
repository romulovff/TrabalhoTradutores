.table
.code
mov $0, 0
main:
mov $0, 0
add $1, 1, 2
mul $1, $1, 3
println $1
seq $1, 1, 10
println $1
seq $2, 1, 1
println $2
seq $3, $0, 0
println $3
seq $4, $0, 1
println $4
mov $0, 1
seq $5, $0, 0
println $5
seq $6, $0, 1
println $6
slt $7, 0, $0
slt $8, $0, 2
and $9, $7, $8
println $9
sleq $10, 0, $0
println $10
sleq $11, $0, 0
println $11
scani $0
println $0
