# arrays is a list of scalars can be number or strings

# Arrays
@skillName = ("Perl", "Python", 5, 4);
print "@skillName\n";

# Accessing elements of an array
print $skillName[0], "\n"; # first element of the array
print $skillName[-1], "\n"; # last element of the array
print @skillName[-2], "\n"; # secondlast element of the array
print @skillName[1..3], "\n"; # elements from 1 to 3
print @skillName[1..-1], "\n"; # elements from 1 to last
print @skillName[1..$#skillName], "\n"; # elements from 1 to last
print @skillName[$#skillName-2..$#skillName], "\n"; # last 2 elements

#Declaring a numbered array with range operators
@numbers = (1..10);
print "@numbers\n";

#Array size
print "Length of the the array first way: ", scalar @numbers, "\n"; 
# or
print "Length of the array second way: ", $#numbers +1, "\n";


# functions to modify the array

# push - add element at the end
push(@skillName, "Java");
print @skillName[4], "\n";

# pop - remove element from the end
pop(@skillName);
print @skillName[4], "\n"; # nothing is printed

# shift - remove element from the beginning
shift(@skillName);
print @skillName[0], "\n";

# unshift - add element at the beginning
unshift(@skillName, "Java");
print @skillName[0], "\n";

# splice - add element at a particular index
# splice(@array, offset, length, list);
splice(@skillName, 1, 0, "Java");
print @skillName[1], "\n";

# splice - remove element at a particular index
splice(@skillName, 1, 1);
print @skillName[1], "\n";

@marks = (65, 76, 89, 90, 55, 44);
print "@marks[2..5]\n";

# split
$marks = "65,76,89,90,55,44";
@marks = split(",", $marks);
print "@marks\n";

# join
$marks = join(",", @marks);
print "$marks\n";

# sort the array

@sortedMarks = sort(@marks);
print "@sortedMarks\n";

# reverse the array
@reversedMarks = reverse(@sortedMarks);
print "@reversedMarks\n";

# merge the array
@arr1 = (1..5);
@arr2 = (6..10);
@mergedArr = (@arr1, @arr2);
print "Merged array: @mergedArr\n";