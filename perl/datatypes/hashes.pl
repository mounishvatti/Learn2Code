# hashes - key value pairs, like a dictionary in python or a map in C++ STL

%skillLevel = ("Perl" => 5, "Python" => 4);
print %skillLevel, "\n"; # prints Perl5Python4

%skillsExp = (CPP => 7, Java => 6, Python => 5, Perl => 1);

# Accessing elements of a hash
print $skillsExp{CPP}, "\n"; # 7

# keys
@keys = keys %skillsExp;
print "Keys: @keys\n"; # C++ Java Python Perl

# values
@values = values %skillsExp;
print "Values: @values\n"; # 7 6 5 1

$str = CPP;

# exists
if (exists($skillsExp{"$str"})){
    print "Key exists\n";
}
else{
    print "Key does not exist\n";
}

$skillsExp{"Oracle"} = 2;

print $skillsExp{Oracle},"\n";

delete $skillsExp{"Oracle"};
print $skillsExp{Oracle},"\n";