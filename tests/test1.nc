int main() {
  int a;
  int c;
  c = 100;
  a = c;

  if(1 != 2 - 1){
    a = a + 20;
    writeln(a);
  } else {
    if(10 == 10){
      int b;
      b = 10;
      writeln(b + a);
    }
  }

  writeln(a + c);
  read(a);
  writeln(a + c);
  return 0;
}
