set add_int(set s, set i) {
    s = EMPTY;
    return add(-2 in add(1 in s));
}

set add_float(set s, set i) {
    return add(-5.4 in add(1.5 in s));
}

set add_set(set s) {
    set newset;
    newset = EMPTY;
    return add(1 in s);
}

int main() {
    set s;
    set t;
    set o;
}