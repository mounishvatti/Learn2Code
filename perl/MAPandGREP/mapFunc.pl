@skills = ("Perl", "Python", "Java", "Unix");

@skills = map { $_ . "-Tech"} @skills;

print "@skills\n";


%skills = map { $_ => 0} @skills;
print %skills, "\n";

print keys %skills, "\n";
print values %skills, "\n";



