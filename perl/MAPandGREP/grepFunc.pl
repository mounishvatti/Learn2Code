@skills = ("Perl", "Python", "CPP", "Java");

%skills = map { $_ => 4 } grep { /^P/ } @skills;
print %skills, "\n";


 
