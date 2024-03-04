
(* sample program in Oberon language *)

MODULE sample001;

IMPORT Out;

VAR a, b, c : INTEGER;

BEGIN
  a := 1;
  b := 2;
  c := 28;

  Out.String("The numbers are ");
  Out.Int(a, 2);
  Out.Int(b, 2);
  Out.Int(c, 3);  Out.Ln;

  Out.Ln;

END sample001.

(* End of file *)

