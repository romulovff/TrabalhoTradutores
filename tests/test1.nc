void f() {

}

int main() {
  int a;
  int c;
  c = 100;
  a = c;

  if(f()) {}

  writeln(a + c);
  read(a);
  writeln(a + c);
  return 0;
}
