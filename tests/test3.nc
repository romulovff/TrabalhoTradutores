int funcao1(int i) {
    s = 0;
    funcao(b);
    return EMPTY;
}

int funcao() {
    int s;
    set t;
    s = EMPTY;

    funcao1();

    add(1 in s);
    add(2 in s);
    add(5 in t);
    add(1 in add(2 in t));

    set possibleSums;
    possibleSums = EMPTY;
    int x;

    read(var);

    forall (x in s) {
        set sumsWithX;
        sumsWithX = EMPTY;
        int val;
        forall (val in possibleSums) add((x + val) in sumsWithX);
        forall (val in sumsWithX) add (val in possibleSums);
        if (13 in possibleSums) writeln('y'); else writeln('n');
    }
}
