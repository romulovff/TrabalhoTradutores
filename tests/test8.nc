int test_forall () {
    forall(x in s) add(x in s);
    forall(x in s) {
        acc = acc + x; // when x is {1,2} the behaviour is undefined; this may raise an exception at runtime
        accf = accf + x;
    }
    forall (x in s) {
        set sumsWithX;
        sumsWithX = EMPTY;
        int val;
        forall (val in possibleSums) add(x in v);
    }
}

float test_set_func_calls () {
    float test() {
        write("errado");
    }
}

int test_if_else () {
    if(target == cur_sum){
      return ans;
    }
    else {
       int el;
    }
}