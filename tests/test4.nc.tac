.table
.code
main:
mov $0, 0
mov $1, 0
slt $2, 1, 2
brz if_exit_1, $2
mov $3, 0
slt $4, 1, 2
brz if_exit_2, $4
mov $5, 0
if_exit_2:
jump if_jump_2
if_exit_2:
if_jump_1:
println (null)
seq $6, (null), (null)
brz if_exit_4, $6
println $0
jump if_jump_4
if_exit_4:
println (null)
if_jump_4:
main:
