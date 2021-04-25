set copy_set(set s, int x) {
    set ans;
    ans = EMPTY;
    forall(x in s) add(x in ans);
    return ans;
}

set succ(set n) {
    set next;
    next = copy_set(n, 1);
    return add(n in next);
}

int main() {
    set zero;
    set one;
    set two;
    set three;

    zero = EMPTY;
    one = succ(zero);
    two = succ(one);
    three = succ(two);

    return 0;
}
