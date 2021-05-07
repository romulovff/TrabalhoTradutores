int b;

void main() {
  b = 0;
  writeln((1 + 2) * 3);
  writeln(1 == 10);
  writeln(1 == 1);
  writeln(b == 0);
  writeln(b == 1);
  b = 1;
  writeln(b == 0);
  writeln(b == 1);
  writeln(b > 0 && b < 2);
  writeln(b >= 0);
  writeln(b <= 0);
  read(b);
  writeln(b * 10);
}
