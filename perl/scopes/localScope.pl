sub localFunction{
    my $myString = "my variable";
    local $localString = "Local variable";
    sub1();
}

sub sub1{
    print "$myString\n"; # won't print
    print "$localString\n"; # will print
}


localFunction();
