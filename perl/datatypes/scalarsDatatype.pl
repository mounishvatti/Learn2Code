# scalar can hold a string a number etc

# . is used to concatenate strings

#Numeric Scalar
$number = 5;
print $number, "\n";

#String Scalar
$strScalar = "Perl";
print $strScalar, "\n";

#vString
$vString = v65.66.67; # ascii codes for A, B, C
print $vString, "\n";

#String Concatenation
$concat = $number."-".$strScalar."-".$vString;
print $concat, "\n";

# repetition operator - any thing inside for any number of times
print "=" x 10, "\n";