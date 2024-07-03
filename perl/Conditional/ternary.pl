use strict;
use warnings;

print "Enter a user id: ";
my $userId = <STDIN>;
chomp $userId;

print "Welcome, $userId!\n";

print "Enter your password: ";
my $pwd = <STDIN>;
chomp $pwd;

# Ternary operator in Perl
(length($pwd)==4) ? print "Password is valid\n" : print "Password is invalid\n";

