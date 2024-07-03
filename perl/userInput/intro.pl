# print "Enter a skill: ";
# $skill = <STDIN>;
# chomp $skill;

# print "Enter the level of the skill: ";
# $level = <STDIN>;
# chomp $level;

# print "Entered skill: $skill, level is $level\n";

# # chomping on an array
# @skills = ("Perl\n", "Python\n", "Java\n", "CPP\n");
# print "@skills\n";
# chomp @skills;
# print "@skills\n";

# # chomping on a hash
# %skillsExp = (CPP => "7\n", Java => "6\n", Python => "5\n", Perl => "1\n");
# print %skillsExp, "\n";
# chomp %skillsExp;
# print %skillsExp, "\n";

# chop - last char will be removed

$skill = "Perl\n";
chop $skill;
print $skill, "\n";

@skills = ("Perl\n", "Python\n", "Java\n", "CPP\n");
print "@skills\n";
chop @skills;
print "@skills\n";


%skillsExp = (CPP => "7\n", Java => "6\n", Python => "5\n", Perl => "1\n");
print %skillsExp, "\n";
chop %skillsExp;
print %skillsExp, "\n";



