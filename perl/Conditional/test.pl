use strict;
use warnings;

my @skills = ("Perl", "Python", "Cpp");

# if..else in Perl
if($skills[-1] eq "Java"){
    print "yes\n";
}
else{
    print "no\n";
}

# if..elsif..else in Perl
print "Enter your age: ";
my $myAge = <STDIN>;
chomp $myAge;

if($myAge >= 18){
    print "You are eligible to vote\n";
}
elsif($myAge < 0){
    print "Invalid age entered\n";
}
else{
    print "You are not eligible to vote\n";
}


