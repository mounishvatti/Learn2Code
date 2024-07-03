use strict; # forces to define the scope of declarations, identifies barewords.
use warnings; # missing semicolon, wrong syntax, deprecated function, Declaring a variable with same name again

# use both of them for a cleaner code.

my $myVar = 10; # no error
$Var = 10; # error

print $myVar, "\n";

my $myVar = 20; # error - cuz of redeclaration of the variable

