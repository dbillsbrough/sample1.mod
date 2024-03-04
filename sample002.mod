
(* sample program in Oberon language *)

MODULE sample002;

IMPORT Math, Out, Reals;

VAR
  a, b, c : INTEGER;
  x, y, z : REAL;
  sinX, cosX, tanX : REAL;
  w : REAL;
  i, j : INTEGER;
  date : ARRAY 30 OF CHAR;

BEGIN
  a := 1;
  b := 2;
  c := 28;
  date := "03/03/2024";

  Out.Ln;
  Out.String("=============="); Out.Ln;
  Out.String(" Hello World! "); Out.Ln;
  Out.String("=============="); Out.Ln;
  Out.Ln;
  Out.Ln;
  Out.String("  Count         Value: x      sine(x)        cos(x)       tan(x) "); Out.Ln;
  Out.String(" -------       ----------    ---------      --------     --------"); Out.Ln;

  Reals.SetExpo(x, 3);

  FOR i := 0 TO 100 BY 5 DO
    j:= i - 1;
    x := (i DIV 5);
    sinX := Math.sin(x);
    cosX := Math.cos(x);
    tanX := Math.tan(x);

    Out.Int(i, 6);
    Out.Real(x, 20);
    Out.Real(sinX, 20);
    Out.Real(cosX, 20);
    Out.Real(tanX, 20);
    Out.Ln;
  END;

  Out.Ln; Out.Ln; Out.Ln;

  Out.String("Compile Date: ");
  Out.Ln;

  IF date < "2022-12-25" THEN
	Out.String("Compiled before Christmas day 2022"); Out.Ln;
  ELSE
	Out.String("Compiled after Christmas day 2022"); Out.Ln;
  END;

  IF date < "2023-12-25" THEN
	Out.String("Compiled before Christmas day 2023"); Out.Ln;
  ELSE
	Out.String("Compiled after Christmas day 2023"); Out.Ln;
  END;

  Out.Ln;
  Out.String("The numbers are ");
  Out.Int(a, 2);
  Out.Int(b, 2);
  Out.Int(c, 3);  Out.Ln;
  Out.Ln;
END sample002.

(* End of file *)
