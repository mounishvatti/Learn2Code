use strict;
use warnings;

my $str = "Perl";
my $rev = reverse($str);

=ANY
print "$rev\n";

my @arr=split("",$str);
=cut

my @arr=split("",$str);

for(my $i=$#arr; $i>=0; $i--){
    print "$arr[$i]";
}

print "\n";

